#ifndef CSTRING_H
#define CSTRING_H
#include <iostream>
#include <cstring>
using namespace std;

class CString {
public:
    CString (const char *str =""); //构造函数
    CString (const CString &Str, int pos, int len); //构造函数，内容是Str的子串
    CString (const char *s , int len); //构造函数，内容是s的前len个字符
    CString (int len, char c); //构造函数，内容是len个c
    CString (const CString &Str); //深拷贝构造函数
    CString &operator=(const CString &Str); //深赋值运算

    virtual ~CString(); //析构函数(虚函数)

    CString &insert(int p0, const char *s);//在p0位置之前插入字符串s
    CString substr(int pos, int len) const; //取子串
    int find (const CString &Str) const; //查找子串
    int str_length() const; //获取长度
    const char *c_str(); //获取字符串指针
    void swap(CString &Str); //交换两个CString的内容
    void clear(); //清空字符串
    bool empty() const; //判断是否为空字符串

    //重载运算符
    char &operator[](int index); //方括号运算符
    friend CString operator+(const CString &str1, const CString &str2); //字符串连接运算符
    CString &operator+=(const CString &Str); //字符串拼接运算符
    friend ostream &operator<<(ostream &out, const CString &Str); //输出运算符
    friend istream &operator>>(istream &in, CString &Str); //输入运算符
    //其余的先不重载了，有需要再说

    //友元函数
    friend istream &getline(istream &in, CString &Str, int num , char delim);
    CString &trim();
     //删除前后空白

private:
    char *data; //字符串指针
    int length; //字符串长度

};
#endif