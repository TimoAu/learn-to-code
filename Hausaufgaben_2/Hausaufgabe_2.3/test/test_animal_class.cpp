#include"gtest/gtest.h"
#include"animal_class.h"
float speed = 5;
float test_time = 10;
class animalTest :public ::testing ::Test
{
    protected:
    float speed = 5;
    float test_time = 10;
    spider testSpider= spider(speed);
    mamal testMamal= mamal(4, speed);
    /*float test_move_spider(){
        testSpider.move(test_time);
        return testSpider.position;
    }
    float test_move_mamal(){
        testMamal.move(test_time);
        return testMamal.position;
    }*/
};

TEST_F(animalTest, spider_move){
    ASSERT_EQ(50, testSpider.move(test_time));
}
TEST_F(animalTest, mamal_move){
    ASSERT_EQ(50, testMamal.move(test_time));
}