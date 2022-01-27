#include <iostream>
#include "myVec.h"

int main(){
  //Starting with an empty vector
  MyVector<int> vec = MyVector<int>();
  std::cout << "This is s vector filled with integers\n";
  std::cout << "Current size: " << vec.size() << '\n';
  std::cout << "Current capacity: " << vec.capacity() << '\n';
  if(vec.empty()){
    std::cout << "This Vector is currently empty \n";
  }
  else{
    std::cout << "This vector is not empty \n";
  }
  vec.print(); //This should print out nothing because this is an empty vector
  std::cout << "Added values of integers within the vector" << '\n';
  vec.push_back(20);
  vec.push_back(2);
  vec.push_back(43);
  vec.push_back(223);
  vec.push_back(23);
  vec.push_back(92);
  std::cout << "Current size: " << vec.size() << '\n';
  std::cout << "Current capacity: " << vec.capacity() << '\n';
  std::cout << "Current values within the vector: ";
  for(int i = 0; i < vec.size(); i++){
    std::cout << vec[i] << " ";
  }
  std::cout << "\nDeleting an element at index 0\n";
  vec.pop_back(0);
  std::cout << "Current size: " << vec.size() << '\n';
  std::cout << "Current capacity: " << vec.capacity() << '\n';
  std::cout << "Current values within the vector: ";
  for(int i = 0; i < vec.size(); i++){
    std::cout << vec[i] << " ";
  }
  std::cout << "\nDeleting the vector\n";
  vec.clear();
  if(vec.empty()){
    std::cout << "This Vector is currently empty \n";
  }
  else{
    std::cout << "This vector is not empty \n";
  }
  std::cout << "Current size: " << vec.size() << '\n';
  std::cout << "Current capacity: " << vec.capacity() << '\n';
  vec.push_back(20);
  vec.push_back(2);
  std::cout << "Current values within the vector: ";
  for(int i = 0; i < vec.size(); i++){
    std::cout << vec[i] << " ";
  }
  std::cout << '\n';
  std::cout << "Current size: " << vec.size() << '\n';
  std::cout << "Current capacity: " << vec.capacity() << '\n';
}