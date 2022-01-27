#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "myVec.h"

MyVector<std::string> words;
MyVector<int> nums;
bool TorF;

TEST_CASE("Creating a vector and testing capacity/size"){
  nums = MyVector<int>(10,0);
  words = MyVector<std::string>();
  CHECK(nums.empty() == false);
  CHECK(words.empty() == true);
  CHECK(nums.size() == 10);
  CHECK(nums.capacity() == 10);
  CHECK(words.size() == 0);
  CHECK(words.capacity() == 0);
}
TEST_CASE("Checking for right values, setting values, new size/capacity"){
    int check[] = {1,0,3,43,0,6,7,0,9,12};
    for(int i = 0; i < nums.size(); i++){
        CHECK(nums[i] == 0);
    }
    std::string check2[] = {"This" , "should", "be", "the", "same"};
    words.push_back("This");
    words.push_back("should");
    words.push_back("be");
    words.push_back("the");
    words.push_back("same");
    TorF = words.capacity() == 5 && words.size() == 5;
    CHECK(TorF);
    for(int i = 0; i < words.size(); i++){
        CHECK(words[i] == check2[i]);
    }
    nums[0] = 1;
    nums[2] = 3;
    nums[3] = 43;
    nums[5] = 6;
    nums[6] = 7;
    nums[8] = 9;
    nums[9] = 12;
    for(int i = 0; i < nums.size(); i++){
        CHECK(nums[i] == check[i]); 
    }
}
TEST_CASE("Deleting values/the whole vector"){
    int check[] = {1,0,3,43,0,6,7,0};
    nums.pop_back();
    nums.pop_back();
    TorF = (nums.capacity() == 10 && nums.size() == 8);
    CHECK(TorF);
    for(int i = 0; i < nums.size(); i++){
        CHECK(nums[i] == check[i]);
    }
    words.pop_back();
    words.pop_back();
    words.pop_back();
    TorF = (words.capacity() == 5 && words.size() == 2);
    std::string check2[] = {"This" , "should"};
    for(int i = 0; i < words.size(); i++){
        CHECK(words[i] == check2[i]);
    }
    nums.clear();
    TorF = (nums.size() == 0 && nums.capacity() == 10);
    CHECK(TorF);
    CHECK(nums.empty() == true);
    words.clear();
    TorF = (words.size() == 0 && words.capacity() == 5);
    CHECK(TorF);
    CHECK(words.empty() == true);
}