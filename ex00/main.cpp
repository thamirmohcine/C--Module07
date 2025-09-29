#include "whatever.hpp"

void testHeader(const std::string& testName) {
    std::cout << "\n" << std::string(50, '*') << std::endl;
    std::cout << "TEST: " << testName << std::endl;
    std::cout << std::string(50, '*') << std::endl;
}

int main(void)
{
    int a = 6; int b = 10;
    testHeader("TESTING SWAP FUNCTION TEMPLATE  : ");
    std::cout << "befor swap : a = "<< a << " , b =" << b << std::endl;
    swap(a, b);
    
    std::cout << "after swap : a = "<< a << " , b =" << b << std::endl;
    testHeader("TESTING MIN AND MAX FUNCTION TEMPLATE  : ");
    std::cout << "testing max:  max = " << max(a, b) << std::endl;
    std::cout << "testing min:  min = " << min(a, b) << std::endl;

    return (0);

}