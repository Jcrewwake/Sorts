cmake_minimum_required(VERSION 3.21)
project(Sorts LANGUAGES C CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含头文件目录
include_directories(./include . ./Insert ./SqList)

# 添加源文件
set(SOURCE_FILES
    main.cpp
    ./Insert/BinarySort/insert.c
    ./SqList/sqList.c
)

# 创建可执行文件
add_executable(Sorts ${SOURCE_FILES})

# 链接必要的库
target_link_libraries(Sorts libgtest.a libgtest_main.a libgmock.a libgmock_main.a)
set(CMAKE_VERBOSE_MAKEFILE ON)

