#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) {

  for(int i = 1; i <= 15; i++)
  {
    for(int k = 1; k <= 15; k++)
      cout << setw(4) << i * k;
    cout << endl;

  }
  return 0;
}
