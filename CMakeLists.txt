# cmake的最低版本要求是2.8
cmake_minimum_required(VERSION 2.8)

# 设置C++标准为 C++ 11
set(CMAKE_CXX_STANDARD 11)

# 工程名叫demo project()函数将创建一个值为demo的变量${PROJECT_NAME}
project(demo)# 表示最终要生成的elf文件的名字叫demo ，使用的源文件是main.c

# 可以类推，如果在同一目录下有多个源文件，那么只要在add_executable里把所有源文件都添加进去就可以了，比如
# add_executable(${PROJECT_NAME}
# main.c
# testFunc.c
# testFunc1.c
# testFunc2.c
# testFunc3.c
# )
# 但是如果有一百个源文件，再这样做就有点坑了，无法体现cmake的优越性，cmake提供了一个命令可以把指定目录下所有的源文件存储在一个变量中，这个命令就是：
# aux_source_directory(dir var)
# 第一个参数dir是指定目录
# 第二个参数var是用于存放源文件列表的变量。
# ux_source_directory()也存在弊端，它会把指定目录下的所有源文件都加进来，可能会加入一些我们不需要的文件，此时我们可以使用set命令去新建变量来存放需要的源文件，如下：
# set(SOURCES
# ./main.c
# ./testFunc1.c
# ./testFunc.c)
aux_source_directory(test1 SRC_LIST)
aux_source_directory(test2 SRC_LIST1)
add_executable(${PROJECT_NAME} main.cpp ${SRC_LIST} ${SRC_LIST1})