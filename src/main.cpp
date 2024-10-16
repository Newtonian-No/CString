#include <iostream>
#include "Cstring.h"

int main() {
    CString str1, str2("Hello, World!");
    int choice;
    while (true) {
        std::cout << "\n选择要测试的功能:\n";
        std::cout << "1. 测试字符串长度\n";
        std::cout << "2. 测试查找子串\n";
        std::cout << "3. 测试插入字符串\n";
        std::cout << "4. 测试字符串拼接\n";
        std::cout << "5. 测试清空字符串\n";
        std::cout << "6. 测试深拷贝构造\n";
        std::cout << "7. 测试赋值运算符\n";
        std::cout << "8. 测试友元函数 getline\n";
        std::cout << "9. 测试输入字符串\n";
        std::cout << "0. 退出\n";
        std::cout << "请输入您的选择: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cout << "Length of str2: " << str2.str_length() << std::endl;
                break;
            }
            case 2: {
                CString subStr = str2.substr(0, 5);
                int pos = str2.find(subStr);
                std::cout << "Position of subStr in str2: " << pos << std::endl;
                break;
            }
            case 3: {
                CString insertStr;
                std::cout << "请输入要插入的字符串: ";
                std::cin >> insertStr;
                std::cout << "您插入的字符串: " ;
                std::cout << insertStr << std::endl;
                str1.insert(0, insertStr.c_str());//这里的c_str()返回const指针
                std::cout << "插入后: " << str1 << std::endl;
                break;
            }
            case 4: {
                CString str3 = str1 + str2;
                std::cout << "拼接后的字符串: " << str3 << std::endl;
                break;
            }
            case 5: {
                str1.clear();
                std::cout << "清空后，str1是否为空: " << (str1.empty() ? "是" : "否") << std::endl;
                break;
            }
            case 6: {
                CString str4(str2);
                std::cout << "str4 (str2的拷贝): " << str4 << std::endl;
                break;
            }
            case 7: {
                str1 = str2;
                std::cout << "赋值后，str1: " << str1 << std::endl;
                break;
            }
            case 8: {
                std::cout << "请输入一个字符串（最多100个字符，以换行结束）: ";
                std::cin.ignore(); // 清除缓冲区中的换行符
                getline(std::cin, str1, 100, '\n'); // 调用友元函数
                std::cout << "您输入的字符串: " << str1 << std::endl;
                break;
            }
            case 9: {
                std::cout << "请输入一个字符串（最多100个字符，以换行结束）: ";
                std ::cin >> str1;
                std::cout << "您输入的字符串: " << str1 << std::endl;
                break;
            }
            case 0:
                std::cout << "退出程序..." << std::endl;
                return 0;
            default:
                std::cout << "无效选择! 请重试。" << std::endl;
        }
    }

    return 0;
}
