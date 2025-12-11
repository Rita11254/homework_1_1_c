#include <cmath>
#include <iostream>
#include <string>
#include <vector>
// не совсем понятно что под удалением понимается (откуда удалять) - деструктор?
// или из какого то массива удалить (надо ли все фигуры в массиве хранить)

// считаю что есть список с фигурами и далее надо уметь выводить площадь и
// периметр для каждой (буду считать что по всем элементам все равно что циклом
// пройти по всем элементам) и буду считать что надо уметь удалять  только 
// последний экземплят

// зачем выводить площать, когда можно просто получить ее значение
// (закоменченный вариант)

const double pi = 3.1416;

class Point {
 public:
  double x;
  double y;
};

class Vector {
 public:
  double x;
  double y;
  Vector(const Point &p1, const Point &p2) : x(p2.x - p1.x), y(p2.y - p1.y) {}
  // конструктор по умолчанию строится от 2ух точек
};

double Dlina(const Vector &p) { return sqrt(p.x * p.x + p.y * p.y); }

double vertor_prod(const Vector &a, const Vector &b) {
  return a.x * b.x + a.y * b.y;
}  // векторное произведение

class Shape {
 protected:
  virtual void Area() = 0;
  virtual void Perimetr() = 0;
  // virtual double Area() = 0;
  // virtual double Perimetr() = 0;

  // virtual operator>>() = 0;
};

struct Triangle : Shape {  // треугольник
  Point a;
  Point b;
  Point c;

  void Area() override {
    std::cout << std::abs(vertor_prod(Vector(a, b), Vector(a, c))) / 2 << '\n';
  }

  void Perimetr() override {
    std::cout << Dlina(Vector(a, b)) + Dlina(Vector(a, c)) + Dlina(Vector(b, c))
              << '\n';
  }

  // double Area() override {
  //   return std::abs(vertor_prod(Vector(a, b), Vector(a, c))) / 2;
  // }

  // double Perimetr() override {
  //   return Dlina(Vector(a, b)) + Dlina(Vector(a, c)) + Dlina(Vector(b, c));
  // }
};

struct Rectangle : Shape {  // четырёхугольник
  Point a;
  Point b;
  Point c;
  Point d;

  void Area() override {
    std::cout << std::abs(vertor_prod(Vector(a, b), Vector(a, c))) / 2 +
                     std::abs(vertor_prod(Vector(d, b), Vector(d, c))) / 2
              << '\n';
    //   return Area(x1) + Area(x2);
  }

  void Perimetr() override {
    std::cout << Dlina(Vector(a, b)) + Dlina(Vector(b, c)) +
                     Dlina(Vector(c, d)) + Dlina(Vector(d, a))
              << '\n';
  }

  // double Area() override {
  //   return std::abs(vertor_prod(Vector(a, b), Vector(a, c))) / 2 +
  //   std::abs(vertor_prod(Vector(d, b), Vector(d, c))) / 2;
  // }

  // double Perimetr() override {
  //   return Dlina(Vector(a,b)) + Dlina(Vector(b,c)) + Dlina(Vector(c, d)) +
  //   Dlina(Vector(d,a));
  // }
};

struct Circle : Shape {  // круг
  Point centre;
  double radius;

  void Area() override { std::cout << pi * radius * radius << '\n'; }

  void Perimetr() override { std::cout << 2 * pi * radius << '\n'; }

  // double Area() override {
  //   return pi * radius * radius;
  // }

  // double Perimetr() override {
  //   return 2 * pi * radius;
  // }
};

struct Square : Shape {  // квадрат
  Point a;
  Point b;

  void Area() override { std::cout << (a.x - b.y) * (a.x - b.y) << '\n'; }

  void Perimetr() override { std::cout << 4 * std::abs(a.x - b.y) << '\n'; }

  // double Area() override {
  //   return (x.x - y.y) * (x.x - y.y);
  // }

  // double Perimetr() override {
  //   return 4 * std::abs(x.x - y.y)s;
  // }
};

std::istream &operator>>(std::istream &is, Point &r) {
  is >> r.x >> r.y;
  return is;
}

std::istream &operator>>(std::istream &is, Circle &r) {
  is >> r.centre >> r.radius;
  return is;
}

std::istream &operator>>(std::istream &is, Square &r) {
  is >> r.a >> r.b;
  return is;
}

std::istream &operator>>(std::istream &is, Rectangle &r) {
  is >> r.a >> r.b >> r.c >> r.d;
  return is;
}

std::istream &operator>>(std::istream &is, Triangle &r) {
  is >> r.a >> r.b >> r.c;
  return is;
}

void Delete(std::vector<std::pair<int, int>> &id, int &n, int &kfree,
            int &kfour, int &kzero, int &kkvadrat) {
  switch (id[n - 1].first) {
    case 0:
      kzero -= 1;
      break;
    case 1:
      kfree -= 1;
      break;
    case 2:
      kkvadrat -= 1;
      break;
    default:
      kfour -= 1;
  }
  n -= 1;
}

void Push(std::vector<std::pair<int, int>> &id, int &n, int &kfree, int &kfour,
          int &kzero, int &kkvadrat, std::vector<Triangle> &free,
          std::vector<Circle> &zero, std::vector<Square> &kvadrat,
          std::vector<Rectangle> &four) {
  std::string s;
  std::cin >> s;  // что хочу ввести
  std::pair<int, int> idi;
  if (s == "Triangle") {
    Triangle geom;
    std::cin >> geom;
    free.push_back(geom);
    idi.first = 3;
    idi.second = kfree;
    kfree += 1;
  }
  if (s == "Rectangle") {
    Rectangle geom;
    std::cin >> geom;
    four.push_back(geom);
    idi.first = 4;
    idi.second = kfour;
    kfour += 1;
  }
  if (s == "Circle") {
    Circle geom;
    std::cin >> geom;
    zero.push_back(geom);
    idi.first = 0;
    idi.second = kzero;
    kzero += 1;
  }
  if (s == "Square") {
    Square geom;
    std::cin >> geom;
    kvadrat.push_back(geom);
    idi.first = 2;
    idi.second = kkvadrat;
    kkvadrat += 1;
  }
  id.push_back(idi);
  n += 1;
}

void AreaPerimetr (std::vector<std::pair<int, int>> &id, int &n, int &kfree, int &kfour,
          int &kzero, int &kkvadrat, std::vector<Triangle> &free,
          std::vector<Circle> &zero, std::vector<Square> &kvadrat,
          std::vector<Rectangle> &four) {
    for (int i = 0; i < n; ++i) {  
    if (id[i].first == 0) {
      zero[id[i].second].Area();
      zero[id[i].second].Perimetr();
    }
    if (id[i].first == 4) {
      four[id[i].second].Area();
      four[id[i].second].Perimetr();
    }
    if (id[i].first == 2) {
      kvadrat[id[i].second].Area();
      kvadrat[id[i].second].Perimetr();
    }
    if (id[i].first == 3) {
      free[id[i].second].Area();
      free[id[i].second].Perimetr();
    }
    std::cout << '\n';
  }
}


// возможно стоит изменить массив из Shape*
// чтобы проще было вводить 
int main() {
  int n = 0;
  std::vector<std::pair<int, int>> id;
  int kfree = 0, kzero = 0, kkvadrat = 0, kfour = 0;
  std::vector<Triangle> free;
  std::vector<Circle> zero;
  std::vector<Square> kvadrat;
  std::vector<Rectangle> four;
  Push(id, n, kfree, kfour, kzero, kkvadrat, free, zero, kvadrat,
       four);                                    // добавить эл-т
  // Delete(id, n, kfree, kfour, kzero, kkvadrat);  // удалить эл-т
  AreaPerimetr(id, n, kfree, kfour, kzero, kkvadrat, free, zero, kvadrat,
       four); // вывести по всем эл-там площадь и периметр
  return 0;
}
