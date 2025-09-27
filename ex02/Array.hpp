#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array : std::exception {
        T *Arr;
        size_t ArrSize;
    public:
        Array():Arr(new T[]), ArrSize(0){};
        Array(unsigned int){int *a =  new int(); std::cout << *a < std::endl;}
        Array& operator=(const Array& other){}
        T& operator[](size_t index);
        size_t size() const{return ArrSize;};
};



#endif 