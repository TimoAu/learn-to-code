#include"gtest/gtest.h"
#include"animal_class.h"
float speed = 5;
float test_time = 10;
class animalTest :public ::testing ::Test
{
    protected:
    float speed = 5;
    float test_time = 10;
    spider testSpider(speed);
    mamal testMamal(4, speed);
    /*float test_move_spider(){
        return testSpider.move(test_time);
    }
    float test_move_mamal(){
        return testMamal.move(test_time);
    }*/
         
   
};

TEST_F(animalTest, spider_move){
    ASSERT_EQ(50, animalTest.move(test_time));
}
TEST_F(animalTest, mamal_move){
    ASSERT_EQ(50, animalTest.);
}