#include <algorithm>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

double min(double x, double y, double z) { return std::min(x, std::min(y, z)); }

double max(double x, double y, double z) { return std::max(x, std::max(y, z)); }

void Vvod(std::vector<std::string>& word) {
  std::string input;
  std::getline(std::cin, input);

  std::string current;

  for (char c : input) {
    if (c == ' ') {
      if (!current.empty()) {
        word.push_back(current);
        current.clear();
      }
    } else {
      current += c;
    }
  }
  if (!current.empty()) {
    word.push_back(current);
  }
}

void Median(std::stack<double>& members) {
  if (members.size() < 3) {
    throw "Не хватает данных при операции median\n";
  }
  double x1 = members.top();
  members.pop();
  double x2 = members.top();
  members.pop();
  double x3 = members.top();
  members.pop();
  members.push(x1 + x2 + x3 - min(x1, x2, x3) - max(x1, x2, x3));
}

void OneOper(std::stack<double>& members, const std::string& s) {
  if (members.size() < 1) {
    throw "Не хватает данных\n";
  }
  double x1 = members.top();
  members.pop();
  if (s == "log" && x1 <= 0) {
    throw "log от отрицательного числа неопределен!\n";
  }
  if (s == "sqrt" && x1 < 0) {
    throw "sqrt от отрицательного числа неопределен!\n";
  }
  if (s == "log" && x1 <= 0) {
    throw "log от отрицательного числа неопределен!\n";
  }
  if (s == "log") {
    double result = std::log2(x1);
    if (std::isnan(result)) {
      throw "Переполнение log\n";
    }
    members.push(result);
    return;
  }
  if (s == "sqrt") {
    double result = std::sqrt(x1);
    if (std::isnan(result)) {
      throw "Переполнение sqrt\n";
    }
    members.push(result);
    return;
  }
  if (s == "exp") {
    double result = std::exp(x1);
    if (std::isnan(result)) {
      throw "Переполнение exp\n";
    }
    members.push(result);
    return;
  }
  if (s == "cos") {
    double result = std::cos(x1);
    if (std::isnan(result)) {
      throw "Переполнение cos\n";
    }
    members.push(result);
    return;
  }
  if (s == "sin") {
    double result = std::sin(x1);
    if (std::isnan(result)) {
      throw "Переполнение sin\n";
    }
    members.push(result);
    return;
  }
  if (s == "tg") {
    double sinx = std::sin(x1);
    double cosx = std::cos(x1);
    if (std::isnan(cosx) || std::isnan(sinx) || cosx == 0) {
      throw "Неопределен tg\n";
    }
    members.push(sinx / cosx);
    return;
  }
  if (s == "ctg") {
    double sinx = std::sin(x1);
    double cosx = std::cos(x1);
    if (std::isnan(cosx) || std::isnan(sinx) || sinx == 0) {
      throw "Неопределен tg\n";
    }
    members.push(cosx / sinx);
    return;
  }
}

void TwoOper(std::stack<double>& members, const std::string& s) {
  if (members.size() < 2) {
    throw "Не хватает данных\n";
  }
  double x2 = members.top();
  members.pop();
  double x1 = members.top();
  members.pop();
  if (s == "/" && x2 == 0) {
    throw "Происходит деление на 0\n";
  }
  if (s == "+") {
    members.push(x1 + x2);
    return;
  }
  if (s == "-") {
    members.push(x1 - x2);
    return;
  }
  if (s == "*") {
    members.push(x1 * x2);
    return;
  }
  if (s == "/") {
    members.push(x1 / x2);
    return;
  }

  if (s == "pow") {
    double result = std::pow(x1, x2);
    if (std::isnan(result)) {
      throw "Некорректное возведение в степень\n";
    }
    members.push(result);
    return;
  }
  if (s == "atan2") {
    double result = std::atan2(x1, x2);
    if (std::isnan(result)) {
      throw "Некорректный atan2\n";
    }
    members.push(result);
    return;
  }
}

double Calculator(std::vector<std::string>& word) {
  std::stack<double> members;
  std::vector<std::string> two_oper = {"+", "-", "*", "/", "pow", "atan2"};
  std::vector<std::string> one_oper = {"sin", "cos", "sqrt", "log",
                                       "exp", "tg",  "ctg"};
  size_t size = word.size();
  for (size_t i = 0; i < size; ++i) {
    if (word[i] == "median") {
      try {
        Median(members);
        continue;
      } catch (const char* s) {
        std::cout << s;
        throw 0;
      }
    }
    if (std::count(two_oper.begin(), two_oper.end(), word[i]) > 0) {
      try {
        TwoOper(members, word[i]);
        continue;
      } catch (const char* s) {
        std::cout << s;
        throw 0;
      }
    }
    if (std::count(one_oper.begin(), one_oper.end(), word[i]) > 0) {
      try {
        OneOper(members, word[i]);
        continue;
      } catch (const char* s) {
        std::cout << s;
        throw 0;
      }
    }
    members.push(std::stod(word[i]));
  }
  if (members.size() == 1) {
    return members.top();
  }
  throw "Остались лишние переменные\n";
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout << "=== КАЛЬКУЛЯТОР В ОБРАТНОЙ ПОЛЬСКОЙ НОТАЦИИ ===\n";
  std::cout << "Инструкция:\n";
  std::cout << "- Вводите числа и операции через пробел\n";
  std::cout << "- Пример: 2 3 + 4 *\n";
  std::cout << "- Пример: 1 2 3 median\n";
  std::cout << "\nПоддерживаемые операции:\n";
  std::cout << "Арифметические: + - * /\n";
  std::cout << "Унарные функции: sin cos tg ctg exp log sqrt\n";
  std::cout << "Бинарные функции: pow atan2\n";
  std::cout << "Тернарные: median\n";
  std::cout << "===============================================\n";
  std::cout << "Введите выражение: ";
  std::cout.flush();
  std::vector<std::string> word;
  Vvod(word);
  try {
    std::cout << Calculator(word) << '\n';
  } catch (const char* s) {
    std::cout << s;
  } catch (int x) {
    std::cout << "Не удалось выполнить корректно\n";
  }
  return 0;
}
