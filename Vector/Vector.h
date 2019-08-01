/*This code shows the "vector" class of the "Vector" project.*/
#ifndef VECTOR_H
#define VECTOR_H

template <class T>
class vector {
public:
   vector(int = 10);
   ~vector();
   int GetSize() const;
   bool SetValue(int pos, int val);
   bool GetValue(int pos, int& val) const;
   void Print() const;
private:
   int size;
   T *ptrValues;
};

#endif //VECTOR_H
