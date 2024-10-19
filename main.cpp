#include <iostream>
#include "matrix.hpp"

int main()
{
  size_t M = 0, N = 0;
  std::cout << "Enter two numbers - the size of the array\n";
  std::cin >> M >> N;

  if (!std::cin.good())
  {
    std::cerr << "No nuber enetered\n";
    return 1;
  }

  int** table = nullptr;

  try
  {
    table = creatematrix(M, N);
  }
  catch (const std::exception& e)
  {
    std::cerr << "failure to allocate storage:" << e.what() << "\n";
    return 3;
  }
  
  std::cout << "Enter numbers " << M * N << " numbers\n";

  readmatrix(table, M, N);

  if (!std::cin.good())
  {
    std::cerr << "fail\n";
    destroymatrix(table, M);
    return 1;
  }
  std::cout << "You matrix\n";
  printmatrix(table, M, N);
  destroymatrix(table, M);
}
