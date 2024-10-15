#include "Cstring.h"
#include <iostream>
//��������������Ϊ���룬���ļ������ΪUTF-8����
int main() //���Ժ�������Ҫ��.h�ļ����в���
{
    CString s1("hello");
    CString s2("world");
    CString s3 = s1 + s2;
    std::cout << s3 << std::endl;
    return 0; //����Ϊ�������貹ȫ�����к����Ĳ���
}