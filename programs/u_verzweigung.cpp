#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  double zahlEins;
  double zahlZwei;

  cout << "Gib die erste Zahl ein: ";
  cin >> zahlEins;
  cout << "Gib die zweite Zahl ein: ";
  cin >> zahlZwei;

  cout << "ihre Zahlen : \n";

  bool x = zahlEins > zahlZwei;
  if(x == 1)
    cout << zahlEins << endl << zahlZwei << endl;
  else
    cout << zahlZwei << endl << zahlEins << endl;

  return 0;
}
