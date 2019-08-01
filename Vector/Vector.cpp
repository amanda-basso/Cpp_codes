/*This code shows the methods for the "vector" class. It's an example of Template usage in C++.*/
#include <iostream>
#include "Vector.h"

template <class T>
vector<T>::vector(int size){
   if (size > 0)
      this->size = size;
   else
      this->size = 10;
   ptrValues = new T[this->size];
   for (int i = 0; i < this->size; i++)
      SetValue(i, 0);
}
template <class T>
vector<T>::~vector(){
   delete [] ptrValues;
}
template <class T>
int vector<T>::GetSize() const{
   return size;
}
template <class T>
bool vector<T>::SetValue(int pos, int val){
   if (pos >=0 && pos < size){
      ptrValues[pos] = val;
      return true;
   }
   else
      return false;
}
template <class T>
bool vector<T>::GetValue(int pos, int& val) const{
   if (pos >= 0 && pos < tam){
      val = ptrValues[pos];
      return true;
   }
   else
      return false;
}
template <class T>
void vector<T>::Print() const{
   int value;
   for (int i = 0; i < GetSize(); i++){
      GetValue(i, value);
      std::cout << value << " ";
   }
   std::cout << std::endl;
}
