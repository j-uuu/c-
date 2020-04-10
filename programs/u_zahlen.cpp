#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double zahl1;
  double zahl2;
  double zahl3;

  // erste Zahle einlesen
  cout  << "Erste Zahl eingeben: ";
  cin   >> zahl1;
  cout  << "Die erste Zahl ist " << zahl1 << endl;

  // zweite Zahle ausgeben
  cout  << "Zweite Zahl eingeben: ";
  cin   >> zahl2;
  cout  << "Die zweite Zahl ist " << zahl2 << endl;

  // dritte Zahle ausgeben
  cout  << "Dritte Zahl eingeben: ";
  cin   >> zahl3;
  cout  << "Die dritte Zahl ist " << zahl3 << endl;

  double summe;
  double mittelwert;

  //Summe berechnen
  summe = zahl1 + zahl2 +zahl3;

  // Mittelwert berechnen
  mittelwert = summe / 3;

  //ausgeben auf 3 Kommastellen
  cout << fixed << setprecision(3);
  cout << "Summe: " << summe << endl << "Mittelwert: " << mittelwert << endl;

  return 0;
}
