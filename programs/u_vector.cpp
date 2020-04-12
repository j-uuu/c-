#include <iostream>
#include <vector>
using namespace std;

void eingabe(vector<double> &);
void ausgabe(const vector<double> &);

int main() {

  vector<double> v;

  eingabe(v);
  ausgabe(v);
  return 0;
}

void eingabe(vector<double> &v)
{

  int weiter = 1 ;
  int nr = 1;
  cout << endl;

  while(weiter == 1)
  {
      cout << nr << ". Zahl eingeben: ";
      double p;
      cin >> p;
      v.push_back(p);
      cout << "Noch einen Zahl ? ja = 1  oder nein = 0  : ";
      cin >> weiter;
      nr++;
  }
  cout << endl;
}

void ausgabe(const vector<double> &v)
{
  for(int i = v.size() - 1; i >= 0; i--)
    cout << v.at(i) << " ";
  cout << endl;
}
