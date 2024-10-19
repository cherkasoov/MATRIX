#include <cstddef>
#ifndef MATRIX_HPP
#define MATRIX_HPP

int** creatematrix(size_t n);
void destroymatrix(int** t, size_t m);
void readmatrix(int** t, size_t m, size_t n);
void printmatrix(const int* const* t, size_t m, size_t n);
void constructmatrix(int** t, size_t m, size_t n);

#endif
