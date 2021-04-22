#include  <iostream>
#include <string>

template<typename T, int N>
class Array
{
private:
  T m_Array[N];
Public:
  int GetSize() const { return N; }
};
int main()
{
  Array<std::string, 5> array;
  std::cout << array.GetSize() << std::endl;
  
  std::cin.get();
  
}
  
