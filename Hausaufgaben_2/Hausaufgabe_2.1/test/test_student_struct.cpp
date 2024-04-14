#include "gtest/gtest.h"
extern"C"{
    #include"student.h"
}
TEST(tdd_tests, student_init ){
    EXPECT_EQ("Max Mustermann", student_init(&max, "Max Mustermann"))
}