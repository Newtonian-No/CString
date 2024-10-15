#include "strings/Cstring.h"
#include <iostream>
//如其他部分中文为乱码，将文件编码改为UTF-8即可
int main() //测试函数，需要对.h文件进行测试
{
    CString s1("hello");
    CString s2("world");
    CString s3 = s1 + s2;
    std::cout << s3 << std::endl;
    return 0; //仅作为样例，需补全对所有函数的测试
}