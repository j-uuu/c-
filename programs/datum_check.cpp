#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  cout << endl << endl << "Datum check by JustusKarr®\n\n\n";

  //Werte eingebn
  int tag, monat, jahr;
  cout << "Tag eingeben: ";
  cin >> tag;
  cout << "Monat eingeben: ";
  cin >> monat;
  cout << "Jahr eingeben: ";
  cin >> jahr;

  if(jahr < 1582)
  {
    cout << "\nDer gregorianische Kalender gilt erst seit 1582. \n";
    return 0;
  }

  //Schaltjahr?
  bool sjahr;
  if((jahr % 4 == 0 && jahr % 100 == !0) || jahr % 400 == 0)
    sjahr = true;
  else
    sjahr = false;

  //Monat prüfen und max Tage veststellen
  int maxTage = 0;
  if(monat == 2)
  {
    if(sjahr == true)
      maxTage = 29;
    else
      maxTage = 28;
  }
  else if(monat == 4 || monat == 6 || monat == 9 || monat == 11)
    maxTage = 30;
  else if(monat > 0 && monat < 13)
    maxTage = 31;
  else
  {
    cout << endl << monat << " ist kein Monat!\n";
    return 0;
  }

  //Tag prüfen
  if( tag > 0 && tag <= maxTage)
    cout << "\nDatum ist richtig. \n";
  else if (tag < 0 || tag > 31)
    cout << "\nTage gehen von 1 - 31. \n";
  else
    cout << "\nDatum ist falsch. \n";

  return 0;
}
