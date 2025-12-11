// считаю что один IP - адрес больше другого (находится строго между двумя) если у них номер сети совпадает, 
// а хосты разные (номер хоста больше одного и меньше другого)
// то есть запрос корректен, когда первые 3 числа совпадают, и надо вывести се варианты последнего числа
#include <iostream>
#include <string>

int Preobr(char c) {
  switch (c) {
    case '0':
      return 0;
    case '1':
      return 1;
    case '2':
      return 2;
    case '3':
      return 3;
    case '4':
      return 4;
    case '5':
      return 5;
    case '6':
      return 6;
    case '7':
      return 7;
    case '8':
      return 8;
    default:
      return 9;
  }
}

class IP {
 public:
  std::string s;
  int x1;
  int x2;
  int x3;
  int x4;
};

std::ostream& operator<<(std::ostream& os, const IP& id) {
  os << id.x1 << "." << id.x2 << "." << id.x3 << "." << id.x4;
  return os;
  // чтобы работало std::cout << r1 << r2;
};

std::istream& operator>>(std::istream& is, IP& id) {
  is >> id.s;
  int i = 0;
  int k = 1;
  int x = 0;
  while (i < id.s.size()) {
    char c = id.s[i];
    if (c == '.') {
      switch (k) {
        case 1:
          id.x1 = x;
          break;
        case 2:
          id.x2 = x;
          break;
        case 3:
          id.x3 = x;
          break;
        default:
          id.x4 = x;
      }
      x = 0;
      ++k;
    } else {
      x = 10 * x + Preobr(c);
    }
    ++i;
  }
  id.x4 = x;
  return is;
}

void Beetwen() {
  IP id1, id2;
  std::cin >> id1 >> id2;
  if (id1.x1 == id2.x1 && id1.x2 == id2.x2 && id1.x3 == id2.x3) {
    IP id;
    id.x1 = id1.x1;
    id.x2 = id1.x2;
    id.x3 = id1.x3;
    for (int i = std::min(id1.x4, id2.x4) + 1; i < std::max(id1.x4, id2.x4); ++i) {
      id.x4 = i;
      std::cout << id << '\n';
    }
    return;
  }
  std::cout << "Запрос некорректен\n";
}

int main() {
  // std::string ip;
  // std::cin >> ip;
  // IP id(ip);
  IP id;
  std::cin >> id;
  std::cout << id << '\n';
  Beetwen();
  return 0;
}
