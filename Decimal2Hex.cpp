#include <iostream>
#include <conio.h>
using namespace std;


int main(int argc, char * argv[]) {
    cout << "enter decimal number: ";
    long dec;
    cin >> dec;
    long value=dec;
string hexa="";
string hex;
    //print_hex(dec);
while(value!=0)
{
  //  if (value == 0)
//        return;

    int rem = value % 16;
   // cout<<rem<<endl;
    value /= 16;
    //cout<<value;
    //print_hex(value); //first execute recurency and print next value

    //after return print the less significant digit
    if (rem < 9)
        {//cout << rem;
        std::string s = std::to_string(rem);
       hexa.append(s);
        }
    else{
    hex = (char)(rem - 10 + 'A');
    hexa.append(hex);
      //cout<<hex<<endl;  
    }

   
}
for(int i=hexa.length()-1;i>=0;i--){
cout<<hexa[i];
}
    cout << endl;
    return 0;
}