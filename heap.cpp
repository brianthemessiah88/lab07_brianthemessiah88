// heap.cpp
// Diba Mirza

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged



void Heap::push(int value){
  vdata.push_back(value);
}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){
  vdata.pop_back();
}

// Returns the minimum element in the heap
int Heap::top(){
  return vdata[vdata.size()];
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  if (!vdata[0]){
    return true;
  }
  return false;
}
    