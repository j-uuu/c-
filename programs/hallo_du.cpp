#include <iostream>
#include <string>


int main() {
  std::string name;
  std::cout << "Wie heißt du ?" << '\n';
  std::cin >> name;
  std::cout << "\nHallo " << name << '!' << '\n';
  return 0;
}
