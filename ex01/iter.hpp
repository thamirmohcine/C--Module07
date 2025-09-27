#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename A, typename B>

void iter(A *a,const size_t len, B func){
    for (size_t t(0); t < len; t++){
        func(a[t]);
    }
}

#endif