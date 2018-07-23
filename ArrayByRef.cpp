#include <stdio.h>
#include <iostream>

using namespace std;
void func(int b[],int n){
    
    for(int i=0;i<n;i++){
        b[i]=2*i;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    func(a,n);
    for(int i=0;i<n;i++){
        
        cout<<a[i];
    }
    return 0;
}


