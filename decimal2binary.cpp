/*work on some logic segmentation fault*/
#include <iostream>

using namespace std;

int main(){
int x=0;
int y[20]={0};
int counter=0;
cout<<"Enter a decimal number";
cin>>x;

while(x!=0){
    int j=0;
    for(int i=x;i>0;i=i/2)
     {
    y[j] = i%2;
    j++;
    counter++;

  
     }
   x=x/2; 
   }
   
//else{
//cout<<"0";
//}
for(int i=counter-1;i>0;i++)
  
   {cout<<y[i];}
     cout<<endl;
   
} 