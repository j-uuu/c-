#include <iostream>
using namespace std;


double addiere(double&, double&);

int main(int argc, char const *argv[])
{
  double zahl1, zahl2, summe;
  for(int i = 0; i < 3; i++)
  {
    cout << "Erste Zahl: ";
    cin >> zahl1;
    cout << "Zweite Zahl: ";
    cin >> zahl2;
    summe = addiere(zahl1, zahl2);
    cout << zahl1 << " + " << zahl2 << " = " << summe << endl;
  }

  return 0;
}


double addiere(double &x, double &y){
  return x + y ;
}
