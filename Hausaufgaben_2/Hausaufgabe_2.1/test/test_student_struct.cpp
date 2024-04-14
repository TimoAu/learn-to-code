#include "gtest/gtest.h"
extern"C"{
    #include"student.h"
}
TEST(tdd_tests, student_init ){
ASSERT_STREQ("Max Mustermann", max.name);
}