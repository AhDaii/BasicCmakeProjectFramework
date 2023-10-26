# 添加测试目标
add_executable(MyGTest01 test01.cpp)
# 链接 gtest 库
target_link_libraries(MyGTest01 gtest gtest_main)

# 添加测试规则
add_test(NAME MyTest COMMAND MyGTest01)
