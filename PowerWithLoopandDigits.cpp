#include <iostream>

using namespace std;

int main()
{   
   cout << "n: " << endl;
   int n;
   cin >> n;

int digits = 0; do { n/= 10; digits++; } while (n != 0);

cout <<"digts \n"<< digits ;

int j=10;

for(int i=1;i<digits;i++)
{



j*=10;

}
cout<<"\n"  <<j;
return 0;
}