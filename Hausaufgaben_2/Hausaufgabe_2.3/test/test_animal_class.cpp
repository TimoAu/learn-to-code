#include"gtest/gtest.h"
#include"animal_class.h"
int feet_init = 4;
class animalTest :public ::testing ::Test
{
    protected:
    spider testSpider;
    int mamal_init()
    {
        mamal testMamal(4);
        return testMamal.get_number_feet();
    }       
   
};

TEST_F(animalTest, spider_init){
    ASSERT_EQ(8, testSpider.get_number_feet());
}
TEST_F(animalTest, mamal_init){
    ASSERT_EQ(4, mamal_init());
}