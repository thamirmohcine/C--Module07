#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template<typename T>
class Array{
        T *Arr;
        size_t ArrSize;
    public:
        Array():Arr(NULL), ArrSize(0){}
        Array(unsigned int n):Arr(new T[n]()), ArrSize(n){}
        Array(const Array& other):Arr(NULL), ArrSize(0){ *this = other;}
        Array& operator=(const Array& other){
            if (this != &other){
                delete[] Arr;
                if (other.ArrSize > 0){
                    this->Arr = new T[other.ArrSize];
                    for (size_t i(0); i < other.ArrSize;i++){ this->Arr[i] = other.Arr[i];}
                    this->ArrSize = other.ArrSize;
                }
                else
                    Arr = NULL;
            }
            return *this;
        }
        ~Array(){ if (ArrSize > 0) {delete[] Arr;}}
        T& operator[](size_t index){
            if (index >= ArrSize)
                throw std::exception();
            return Arr[index];
        }
        const T& operator[](size_t index) const {
            std::cout << "You are tring to modify a constant \n";
            if (index >= ArrSize)
                throw std::exception();
            return Arr[index];
        }
        size_t size() const{return ArrSize;};
};


#endif 