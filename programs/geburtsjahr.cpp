#include <string>
#include <iostream>
#include <sstream>

int main() {
  std::string name;
  std::string year;
  std::string answer;
  std::string alter;


  std::cout << "\nWie heißt du ?" << '\n';
  std::cin >> name;
  std::cout << "\nHallo " << name << '!' << '\n';
  std::cout << "\nWelches Jahr haben wir?" << '\n';
  std::cin >> year;
  std::cout << "\nhattest du diese Jahr schon Geburtstag ?" << '\n';
  std::cin >> answer;
  std::cout << "\nWie alt bist du ?" << '\n';
  std::cin >> alter;

  std::istringstream stream1(year);
  int a;
  stream1 >> a;

  std::istringstream stream2(alter);
  int b;
  stream2 >> b;


  int geburtsjahr;

  if(answer == "ja" || answer == "yes" || answer == "y")
  {
    geburtsjahr = a - b;
  }else if (answer == "nein" || answer == "no" || answer == "n")
  {
    geburtsjahr = a - b - 1;
  }else
  {
    std::cout << "Error" << '\n';
    return 0;
  }

  std::cout << "\nDu bist im Jahr " << geburtsjahr << " geboren." << '\n';
  std::cout << "\nBis zum nächsen Mal.\n" << '\n';

  return 0;
}
