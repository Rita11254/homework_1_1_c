#include <cstdint>
#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

struct BCD {
  std::vector<uint8_t> begin;
  std::vector<uint8_t> end;
  bool sign;

  std::string stroka;

  BCD() : stroka(), sign(true), end(), begin() {}

  BCD(const BCD &other)
      : stroka(other.stroka),
        sign(other.sign),
        end(other.end),
        begin(other.begin) {}

  BCD(BCD &&other) {
    stroka = std::move(other.stroka);
    sign = other.sign;
    end = std::move(other.end);
    begin = std::move(other.begin);
  }

  BCD(const std::string &s) : stroka(s) {
    int f = 1;
    if (s[0] == '-') {
      sign = false;
    } else {
      sign = true;
    }
    for (int i = 0; i < static_cast<int>(s.size()); ++i) {
      if (s[i] == '-') {
        continue;
      }
      if (s[i] == '.' || s[i] == ',') {
        f = 0;
      } else {
        if (f == 1) {
          begin.push_back(s[i] - '0');
        } else {
          end.push_back(s[i] - '0');
        }
      }
    }

    if (begin.size() > 10) {
      throw 0;
    }
  }

  BCD &operator=(const BCD &other) {
    begin = other.begin;
    end = other.end;
    sign = other.sign;
    stroka = other.stroka;
    return *this;
  }

  BCD &operator=(BCD &&other) {
    begin = std::move(other.begin);
    end = std::move(other.end);
    sign = other.sign;
    stroka = std::move(other.stroka);
    return *this;
  }

  ~BCD() = default;

  BCD operator-() {
    BCD result(*this);
    result.sign = !sign;
    return result;
  }

  BCD &operator+() { return *this; }

  // считаю что он не изменяет значение, а возвращает округленный
  BCD floor() {
    BCD result(*this);

    result.end.clear();
    if (!(end.size() == 1 && end[0] == 0)) {
      return result;
    }
    if (sign == false) {
      for (int i = begin.size(); i >= 0; --i) {
        if (begin[i] != 0) {
          result.begin[i] -= 1;
          for (int j = i + 1; j < begin.size(); ++j) {
            result.begin[i] = 9;
          }
          return result;
        }
      }
      begin[0] = -1;
      return result;
    }
    return result;
  }

  // считаю что он не изменяет значение, а возвращает округленный
  BCD ceil() {
    BCD result(*this);

    result.end.clear();
    if (!(end.size() == 1 && end[0] == 0)) {
      return result;
    }
    if (sign == true) {
      for (int i = begin.size(); i >= 0; --i) {
        if (begin[i] != 9) {
          result.begin[i] += 1;
          for (int j = i + 1; j < begin.size(); ++j) {
            result.begin[i] = 0;
          }
          return result;
        }
      }
      begin[0] = 1;
      return result;
    }
    return result;
  }

  BCD round() {
    if (end[0] >= 5) {
      if (sign == true) {
        return ceil();
      }
      return floor();
    }
    if (sign == false) {
      return floor();
    }
    return ceil();
  }
};

std::istream &operator>>(std::istream &is, BCD &x) {
  std::string input;
  is >> input;
  try {
    x = BCD(input);
  } catch (int e) {
    x = BCD();
    std::cout << "Число слишком большое\n  НЕ было создано!\n";
  }
  return is;
}

std::ostream &operator<<(std::ostream &os, BCD &x) {
  for (int i = 0; i < x.begin.size(); ++i) {
    os << static_cast<char>(x.begin[i] + '0');
  }
  os << '.';
  for (int i = 0; i < x.end.size(); ++i) {
    os << static_cast<char>(x.end[i] + '0');
  }
  return os;
}

bool operator==(const BCD &x, const BCD &y) {
  if (x.begin.size() != y.begin.size() || x.end.size() != y.end.size()) {
    return false;
  }
  for (int i = 0; i < x.begin.size(); ++i) {
    if (x.begin[i] != y.begin[i]) {
      return false;
    }
  }
  for (int i = 0; i < x.end.size(); ++i) {
    if (x.end[i] != y.end[i]) {
      return false;
    }
  }
  return true;
}

bool pom(const BCD &x, const BCD &y) {
  int tx = x.begin.size();
  int ty = y.begin.size();
  if (tx > ty) {
    return true;
  }
  if (tx < ty) {
    return false;
  }
  for (int i = 0; i < tx; ++i) {
    if (x.begin[i] > y.begin[i]) {
      return true;
    }
    if (x.begin[i] < y.begin[i]) {
      return false;
    }
  }
  for (int i = 0; i < static_cast<int>(std::min(x.end.size(), y.end.size()));
       ++i) {
    if (x.end[i] > y.end[i]) {
      return true;
    }
    if (x.end[i] < y.end[i]) {
      return false;
    }
  }
  if (x.end.size() > y.end.size()) {
    return true;
  }
  return false;
}

bool operator>(const BCD &x, const BCD &y) {
  if (x.sign == false && y.sign == true) {
    return false;
  }
  if (x.sign == true && y.sign == false) {
    return true;
  }
  if (x.sign == y.sign && x.sign == true) {
    return pom(x, y);
  }
  if (x == y) {
    return false;
  }
  return !pom(x, y);
}

bool operator<(const BCD &x, const BCD &y) {
  if (x.sign == false && y.sign == true) {
    return true;
  }
  if (x.sign == true && y.sign == false) {
    return false;
  }
  if (x.sign == y.sign && x.sign == true) {
    if (x == y) {
      return false;
    }
    return !pom(x, y);
  }
  return pom(x, y);
}

bool operator<=(const BCD &x, const BCD &y) {
  if (x < y || x == y) {
    return true;
  }
  return false;
}

bool operator>=(const BCD &x, const BCD &y) {
  if (x > y || x == y) {
    return true;
  }
  return false;
}

std::string Pom_Sum(const BCD &x, const BCD &y, std::string& stroka) {
  int otl = 0;
  int t = std::min(x.end.size(), y.end.size());
  for (int i = t - 1; i >= 0; --i) {
    int x_val = x.end[i];
    int y_val = y.end[i];
    int sum = x_val + y_val + otl;
    stroka = std::to_string(sum % 10) + stroka;
    otl = sum / 10;
  }
  stroka = "." + stroka;
  t = std::max(x.begin.size(), y.begin.size());
  for (int i = t - 1; i >= 0; --i) {
    int x_val = (i < x.begin.size()) ? x.begin[i] : 0;
    int y_val = (i < y.begin.size()) ? y.begin[i] : 0;
    int sum = x_val + y_val + otl;
    stroka = std::to_string(sum % 10) + stroka;
    otl = sum / 10;
  }
  if (otl > 0) {
    stroka = std::to_string(otl) + stroka;
  }
  return stroka;
}

BCD &operator+=(BCD &x, const BCD &y) {
  std::string stroka = "";
  BCD result(Pom_Sum(x, y, stroka));
  if (x.sign == true && y.sign == true) {
    x = result;
    return x;
  }
  if (x.sign == false && y.sign == false) {
    x = -result;
    return x;
  }
  if (x.sign == false && y.sign == true) {
    if (y >= x) {
      x = result;
      return x;
    }
    x = -result;
    return x;
  }
  if (x >= y) {
    x = result;
    return x;
  }
  x = -result;
  return x;
}

BCD operator+(BCD x, const BCD &y) {
  std::string stroka = "";
  BCD result(Pom_Sum(x, y, stroka));
  if (x.sign == true && y.sign == true) {
    return x;
  }
  if (x.sign == false && y.sign == false) {
    return x;
  }
  if (x.sign == false && y.sign == true) {
    if (y >= x) {
      return x;
    }
    return x;
  }
  if (x >= y) {
    return x;
  }
  return x;
}

BCD operator-(BCD x, BCD &y) {
  BCD y_new(-y);
  return (x + y_new);
}

BCD& operator-=(BCD &x, BCD &y) {
  BCD y_new(-y);
  x += y_new;
  return x;
}

int main() {
  std::cout << "Вводите любое число с точкой! Пример: 1.3, 9.0\n";
  BCD x;
  BCD y;
  std::cin >> x;
  std::cin >> y;
  std::cout << x << '\n';
  x += y;
  std::cout << x << '\n';
  // std::cout << "== " << (x == y) << '\n';;
  // std::cout << "> " << (x > y) << '\n';
  // std::cout << "< " << (x < y) << '\n';
  // std::cout << "<= " << (x <= y) << '\n';
  // std::cout << ">= " << (x >= y) << '\n';
  return 0;
}
