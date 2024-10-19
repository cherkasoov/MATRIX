#include "matrix.h"
#include <iostream>

void destroymatrix(int** t, size_t m)
{
  for (size_t i = 0; i < m; ++i)
  {
    delete[] t[i];
  }
  delete[] t;
}

int** creatematrix(size_t m, size_t n)
{
  int** t = new int* [m];
  size_t created = 0;
  try
  {
    for (; created < m; ++created)
    {
      t[created] = new int[n];
    }
  }
  catch (const std::bad_alloc& e)
  {
    destroymatrix(t, created);
    throw;
  }
  return t;
}

void readmatrix(int** t, size_t m, size_t n)
{
  for (size_t i = 0; i < m; ++i)
  {
    for (size_t j = 0; j < n; ++j)
    {
      std::cin >> t[i][j];
    }
  }
}

void printmatrix(const int* const* t, size_t m, size_t n)
{
  for (size_t i = 0; i < m; ++i)
  {
    for (size_t j = 0; (j + 1) < n; ++j)
    {
      std::cout << t[i][j] << " ";
    }
    std::cout << t[i][n - 1];
    std::cout << "\n";
  }
}

void constructmatrix(int** t, size_t m, size_t n)
{
  for (size_t i = 0; i < m; ++i)
  {
    for (size_t j = 0; j < n; ++j)
    {
      t[i][j] = (i + 1) * 10 + (j + 1);
    }
  }
}
