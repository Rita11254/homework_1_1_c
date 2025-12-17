#include <iostream>

class Vector {
public:
  double *start;
  int size;

  // дает возможность обращаться в привычном для нас формате
  double &operator[](size_t i) { return start[i]; }
 
  // a[9] = 4;
  double& operator=(const Vector& other) { 
    if (size != other.size) {
      std::cout << "Не может быть выполнена корректно!\n";
      return *start;
    }
    for (int i = 0; i < size; ++i) {
      start[i] = other.start[i];
    }
    return *start;
  }

  // конструктор копирования
  Vector(const Vector &other) {
    size = other.size;
    start = new double[size];
    for (int i = 0; i < size; ++i) {
      start[i] = other.start[i];
    }
  }

  Vector(int n) : size(n) { start = new double[n]; }

  ~Vector() { delete[] start; }
};

int main() { // просто смотрю как работает
  int n = 5;
  Vector my(n);
  for (int i = 0; i < my.size; ++i) {
    my[i] = 2 * i;
  }
  Vector arr(my);
  for (int i = 0; i < arr.size; ++i) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
  Vector ne(n);
  for (int i = 0; i < ne.size; ++i) {
    ne[i] = 2 * i + 1;
  }
  arr = ne;
  for (int i = 0; i < arr.size; ++i) {
    std::cout << arr[i] << ' ';
  }
  return 0;
}
