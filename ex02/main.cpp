#include <iostream>
#include "Array.hpp"


void testHeader(const std::string& testName) {
    std::cout << "\n" << std::string(50, '*') << std::endl;
    std::cout << "TEST: " << testName << std::endl;
    std::cout << std::string(50, '*') << std::endl;
}


int main() {
    testHeader("TESTING DEFAULT CONSTRUCTOR");
    Array<std::string> str;
    std::cout << "empty array size : " << str.size() << std::endl;

    testHeader("TESTING PARAMETRIZE CONSTRUCTOR");
    Array<int> arr(5);
    arr[0] = 42;
    std::cout << "arr[0] = " << arr[0] << std::endl;
    std::cout << "size = " << arr.size() << std::endl;

    testHeader("TESTING COPY CONSTRUCTOR");
    Array<int> copy(arr);
    copy[0] = 99;
    std::cout << "original: " << arr[0] << ", copy: " << copy[0] << std::endl;
    
    testHeader("TESTING OUT OF RANGE INDEX CONSTRUCTOR");
    try {
        arr[100];
    } catch (std::exception& e) {
        std::cout << "Exception caught" << std::endl;
    }
    
    return 0;
}