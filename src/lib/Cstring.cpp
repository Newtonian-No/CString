#include <iostream>
#include <cstring>
#include "Cstring.h"
using namespace std;

CString::CString (const char *str)
{
    if ( str != nullptr)
    {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data , str);
    }
    else{
        length = 0;
        data = new char[1];
        data[0] = '\0';
    }
}

CString::CString (const CString &Str, int pos, int len)
{
    // ��������Ч��
    if (pos < 0 || pos >= Str.length || len < 0 || pos + len > Str.length) {
        // ���������Ч�����ÿ��ַ���
        length = 0;
        data = new char[1];
        data[0] = '\0'; // �������ַ���
        return;
    }
    length = len;
    data = new char[length + 1];
    strncpy(data, Str.data + pos, length);
    data[length] = '\0'; // �ַ�����β����'\0'
}

CString::CString (const char *s , int len)
{
    if (len < 0 || len > strlen(s) || s == nullptr)
    {
        length = 0;
        data = new char[1];
        data[0] = '\0'; // �������ַ���
        return;
    }
    length = len;
    data = new char[length + 1];
    strncpy(data, s, length);
    data[length] = '\0'; // �ַ�����β����'\0'
}

CString::CString (int len, char c)
{
    if (len < 0)
    {
        length = 0;
        data = new char[1];
        data[length] = '\0';
        return;
    }
    length = len;
    data = new char[length + 1];
    for (int  i=0; i<length; i++)
    {
        data[i] = c;
    }
    data[length] = '\0'; // �ַ�����β����'\0'
}

CString::CString (const CString &Str)
{
    if (this == &Str)
    {
        return;
    }
    length = Str.length;
    data = new char[length + 1];
    strncpy(data, Str.data, length);
    data[length] = '\0';
}

CString &CString::operator=(const CString &Str)
{
    if (this == &Str)
    {
        return *this;
    }
    if (data != nullptr)
    {
        delete[] data;
    }
    length = Str.length;
    data = new char[length + 1];
    strncpy(data, Str.data, length);
    data[length] = '\0';
    return *this;
}

CString::~CString()
{
    delete[] data;
}

int CString::str_length() const
{
    return length;
}

CString& CString::insert(int p0, const char *s)
{
    int s_length = strlen(s);
    if (p0 < 0 || p0 > s_length) 
    {
        cout << "Error: insert position out of range." << endl;
        return *this;
    }
    char *new_data = new char[s_length + s_length + 1];
    strncpy(new_data, data, p0);
    strncpy(new_data + p0, s, s_length);
    strncpy(new_data + p0 + s_length, data + p0, length - p0);
    delete[] data;
    data = new_data;
    length += s_length;

    return *this;
}

CString CString::substr(int pos, int len) const
{
    if (pos < 0 || pos > length || len  < 0 || pos + len > length)
    {
        cout << "Error: substr position or length out of range." << endl;
        return CString();
    }
    return CString(data + pos, len);
}

int CString::find (const CString &Str) const
{
    if(Str.length == 0 || length < Str.length)
    {
        cout << "Error: find string is empty or out of range." << endl;
        return -1;
    }
    for (int i=0 ; i< length - Str.length + 1; i++)
    {
        if (strncmp(data + i, Str.data, Str.length))
        {
            return i;
        }
    }
    cout << "Error: find string is not found." << endl;
    return -1;
}

const char * CString::c_str()
{
    return data;
}

void CString::swap(CString &Str)
{
    int _length = Str.length;
    CString temp = new char[_length + 1];
    strncpy(temp.data,Str.data,_length);
    temp.data[_length] = '\0';
    Str.length = length;
    Str.data = data;
}

void CString::clear()
{
    length =0 ;
    data[0] = '\0';
}

bool CString::empty() const
{
    return length == 0;
}

char & CString::operator[](int index)
{
    if (index < 0 || index >= length)
    {
        return data[0];
    }
    return data[index];
}

CString operator+(const CString &str1, const CString &str2)
{
    CString result = new char[str1.length + str2.length + 1];
    strncpy(result.data, str1.data, str1.length);
    strncpy(result.data + str1.length, str2.data, str2.length);
    result.data[str1.length + str2.length] = '\0';
    result.length = str1.length + str2.length;
    return result;
}

CString & CString::operator+=(const CString &Str)
{
    return insert(this->length, Str.data);
}

ostream & operator<<(ostream &out, const CString &Str)
{
    out << Str.data;
    return out;
}

istream &operator>>(istream &in, CString &Str)
{
    Str.clear();
    in >> Str.data;
    if (Str.data == nullptr)
    {
        Str.clear();
        cout << "Error: input is null." << endl;
        return in;
    }
    return in;
}

istream &getline(istream &in, CString &Str, int num , char delim)
{
    Str.clear();
    Str.data = new char[num];
    in.getline(Str.data, num, delim);
    Str.length = strlen(Str.data);
    return in;
}

CString & CString::trim()
{
    int start = 0;
    int end = length - 1;
    while (start < length && isspace(data[start]))
    {
        start++;
    }
    while (end >= 0 && isspace(data[end]))
    {
        end--;
    }
    if (start > end)
    {
        clear();
    }
    else
    {
        length = end - start + 1;
        strncpy(data, data + start, length);
        data[length] = '\0';
    }
    return *this;
}