#pragma once

template<class T>
class MyVector{
public:
  MyVector();
  MyVector(int size, T set);
  int size();
  void print();
  void push_back(T item);
  void clear();
  void pop_back(int n);
  void pop_back();
  bool empty();
  T &operator[] (int i);
  int capacity();

private:
  T* nums;
  int length;
  int capacitys;
};

#include "myVec.cxx"