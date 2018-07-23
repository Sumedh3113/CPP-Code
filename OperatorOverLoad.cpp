#include <stdio.h>
#include <iostream>
using namespace std;

class overload1{
    
  public:
    void setArray(int []);
    //int getsum();
    friend ostream &operator << (ostream &c, const overload1 &d);
    overload1();
    int x; 
    int g[];
  
    private:
    int y;
    //int g[];

 
};
overload1::overload1(){
    x=0;
    y=0;
}

 ostream& operator<<(ostream &out, const overload1 &object)
{
    for(int i=0;i<object.x;i++){
        out<<object.g[i];
   }    
    return out;
}

void overload1::setArray(int b[]){  
    for(int i=0;i<x;i++){
        b[i]=2*i;
      //  cout<<b[i];
    }
}

int main()
{
    overload1 obj;   
    obj.x=6;
   // int a[obj.x]={0};
    obj.setArray(obj.g);
    //int n;
    //cin>>n;
    //int a[n];
    
    //func(a,n);
   
    cout<<obj;

    return 0;
}


