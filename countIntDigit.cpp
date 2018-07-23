#include <iostream>
using namespace std;

int main()
{   
   cout << "n: " << endl;
   int n;
   cin >> n;

int digits = 0; do { n/= 10; digits++; } while (n != 0);

cout <<"digts"<< digits;

return 0;
}