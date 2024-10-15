#如其他部分中文为乱码，请在编辑器中将其编码格式设置为GBK。

# cmake 最低版本需求
cmake_minimum_required(VERSION 3.13)

# 工程名称
project(MyProject VERSION 1.0)

#包含头文件目录
include_directories(${PROJECT_SOURCE_DIR}/src/include)

#添加在子目录
add_subdirectory(src)
