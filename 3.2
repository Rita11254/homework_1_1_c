#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
// фактически сделали класс без полей
// чтобы не лапками смотреть вход и выход из метода или функции
// при входе в функцию создаю эл-т этого класса

std::vector<std::string> stack;
// в случае многопоточности лучше делать отдельное поле внутри класса
// и тогда его иницилизирую при входе в функцию, а в деструкторе
// перед тем как удалить - сначала выведу

class Tracer {
 public:
  Tracer(const std::string& s) {
    std::cout << "Я зашел в функцию " << s << " в ";
    stack.push_back(s);
    std::chrono::time_point d = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(d);
    std::cout << std::put_time(std::localtime(&time), "%F %T\n");
  };

  ~Tracer() {
    std::string s = stack.back();
    std::cout << "Я вышел из функции " << s << " в ";
    stack.pop_back();
    std::chrono::time_point d = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(d);
    std::cout << std::put_time(std::localtime(&time), "%F %T\n");
  }

  // вывести сообщение от польователя (в тч время)
  // воспринимаю как функцию - поэтому вывожу куда зашел, когда и тд
  static void Output(const std::string& messeng) {
    Tracer a("Output");
    std::chrono::time_point d = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(d);
    std::cout << messeng << " ["
              << std::put_time(std::localtime(&time), "%F %T]\n");
  }

  // хочу посмотреть на стек вызовов
  static void StackOutput() {
    Tracer a("StackOutput");
    for (int i = 0; i < stack.size(); ++i) {
      std::cout << stack[i] << '\n';
    }
  }
};

int main() {
  Tracer::Output("мяу");
  Tracer::StackOutput();
  return 0;
}
