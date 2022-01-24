#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "myVec.h"

MyVector<std::string> words;
MyVector<int> nums;

TEST_CASE("Creating a vector and testing capacity/size"){
    nums(10,0);
    words = MyVector<std::string>();
    CHECK(nums.empty() == true);
    CHECK(words.empty() == false);
}