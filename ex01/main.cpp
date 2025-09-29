#include "iter.hpp"

void testHeader(const std::string& testName) {
    std::cout << "\n" << std::string(50, '*') << std::endl;
    std::cout << "TEST: " << testName << std::endl;
    std::cout << std::string(50, '*') << std::endl;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  const int tab[] = { 0, 1, 2, 3, 4 };
  int tab2[] = { 0, 1, 2, 3, 4 };
  std::string a[] = {"one", "two", "three"};
  const std::string b[] = {"one", "two", "three"};

  testHeader("PRINTING TAB OF const integers : ");
  iter( tab, 5, print<const int> );
  testHeader("PRINTING TAB OF integers : ");
  iter( tab2, 5, print<int> );
  testHeader("PRINTING TAB OF std::string : ");
  iter( a, 3, print<std::string > );
  testHeader("PRINTING TAB OF const std::string : ");
  iter( a, 3, print<const std::string > );
  return 0;
}

