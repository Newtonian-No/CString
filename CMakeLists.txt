#如其他部分中文为乱码，请在编辑器中将其编码格式设置为GBK。

# cmake 最低版本需求
cmake_minimum_required(VERSION 3.13)

# 工程名称
project(CPackaging)
set(EXECUTABLE_NAME CPackaging)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 设置
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER g++)

# 添加 strings 子目录
add_subdirectory(strings)

# 编译源码生成目标
add_executable(EXECUTABLE_NAME main.cpp)

# 添加链接库
target_link_libraries(EXECUTABLE_NAME strings)