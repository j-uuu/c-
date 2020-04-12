#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[]) {
  array<double, 5> feld;

  for(double &p:feld)
  {
    static int i = 1;
    cout << i << ". Zahl eingeben: ";
    cin >> p;
    i++;
  }
  cout << "ihre Zahlen: " << endl << endl;
  for(int i = 4; i >= 0; i-- )
    cout << feld.at(i) << " ";
  cout << endl;
}
