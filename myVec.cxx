#include <iostream>
#include "myVec.h"

template<class T>
MyVector<T>::MyVector(){
  nums = new T[1];
  nums[0] = 0;
  length = 0;
  capacitys = 0;
}

template<class T>
MyVector<T>::MyVector(int size, T set){
  nums = new T[size];
  length = size;
  capacitys = size;
  for(int i = 0; i < size; i++){
    nums[i] = set;
  }
}
template<class T>
int MyVector<T>::size(){
  return length;
}

template<class T>
int MyVector<T>::capacity(){
  return capacitys;
}
template<class T>
void MyVector<T>::print(){
  for(int i = 0; i < length; i++){
    std::cout << nums[i] << " ";
  }
  std::cout << '\n';
}

template<class T>
void MyVector<T>::push_back(T item){
  if(length == capacitys){
    capacitys++;
    length++;
  }
  else{
    length++;
  }
  T *newList = new T[capacitys];
  for(int i = 0; i < length-1; i++){
    newList[i] = nums[i];
  }
  newList[length-1] = item;
  delete[] nums;
  nums = newList;
}

template<class T>
void MyVector<T>::clear(){
  delete[] nums;
  length = 0;
}

template<class T>
void MyVector<T>::pop_back(int n){
  length--;
  T *newList = new T[capacitys];
  for(int i = 0; i < length; i++){
    if(i >= n){
      newList[i] = nums[i+1];
    }
    else{
      newList[i] = nums[i];
    }
  }
  delete[] nums;
  nums = newList;
}

template<class T>
void MyVector<T>::pop_back(){
  length--;
  T *newList = new T[capacitys];
  for(int i = 0; i < length-1; i++){
    newList[i] = nums[i];
  }
  //newList[length-1] = item;
  delete[] nums;
  nums = newList;
}

template<class T>
bool MyVector<T>::empty(){
  if(length == 0){
    return true;
  }
  else{
    return false;
  }
}

template<class T>
T &MyVector<T>::operator[] (int i){
  return nums[i];
}//*/