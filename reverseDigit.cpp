#include <iostream>


using namespace std;



int main()
{


cout << "n: " << endl;


 int n;

 cin >> n;


 cout << "d: " << endl;

 int d;


 cin >> d;

int x=d;
int digits = 0;
do {
        x=x/10;
        digits++;
    }
while (x!= 0);

//cout <<"\n digits "<< digits ;

int j=10;

for(int i=1;i<digits;i++)
{



j*=10;

}


//cout<<endl<<j<<endl;

 int result = 0;

 int rev;

int intgr=0;

int intrev=0;

while(n>0)

 {

 rev= n%10;

    n=n/10;
 intgr=intgr*10+rev;


    //intgr=rev%10;
    //rev=rev/10;
//intrev=intrev*j+intgr;
   // while(d>0){
    //intrev=d%10;
//d=d/10;
//intgr=intgr*10+intrev;

/*
    if(d == rev){

     result++;

            }
*/
  }
cout<<endl<<intgr<<endl;

 //cout<<endl<<rev<<endl;


 //}
/*
 while (intgr>0){

intrev = intgr%j;
intgr=intgr/j;
 if(d == intrev){

     result++;

            }

 }*/


// cout << "Count: " << result << endl;



return 0;
}
