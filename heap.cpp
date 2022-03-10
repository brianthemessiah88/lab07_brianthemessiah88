#include "heap.h"
#include <iostream>
using namespace std;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged



void Heap::push(int value) {
   vdata.push_back(value);
  heapify();
}


// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged


void Heap::pop() {
   if (empty()){
    return;
   }
   std::swap(vdata[0], vdata[vdata.size() - 1]);

   vdata.pop_back();
   heapify();
   
}

// Returns the minimum element in the heap
int Heap::top() {
   //returns the topmost element
   return vdata[0];
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty() {
  if (vdata.size() ==0){
    return true;
  }
  return false;
}

unsigned int Heap::min_child(unsigned int index) const
{
   int left = 2 * index;
   int right = 2 * index + 1;
   int len = vdata.size();
   if ((left <= len) && (right <= len)){
     if ((vdata[left - 1]) > (vdata[right- 1])){
       return right - 1;
     }
     return left - 1;
   }
   else if (left <= len){
       return left - 1;
   }
   else if (right <= len){
       return right - 1;
   }
   return 0;
}


void Heap::heapify(){
  for (int i = (vdata.size() / 2); i > 0; --i){
    int minChild = min_child(i);
    if (vdata[minChild] < vdata[i - 1]){
      std::swap(vdata[i - 1], vdata[minChild]);
      }
  }
}