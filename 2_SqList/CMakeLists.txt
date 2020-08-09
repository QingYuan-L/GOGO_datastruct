CMAKE_MINIMUM_REQUIRED(VERSION 3.14)
#指定项目名称
PROJECT(2_SqList)
#指定头文件目录
INCLUDE_DIRECTORIES(../include)
#指定链接库文件目录
LINK_DIRECTORIES(../lib)
#将hello.cpp生成可执行文件hello
ADD_EXECUTABLE(2_SqList main.cpp)
#指定hello 链接库myprint
TARGET_LINK_LIBRARIES(2_SqList SqList)