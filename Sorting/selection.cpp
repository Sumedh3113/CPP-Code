#include <iostream>

using namespace std;

class selection{
    private:
    int temp;
   //int y;
    
    public:
    void sort(int *, int);
};

void selection::sort(int *a, int y){
    
 for (int i=0;i<y-1;i++){
     //cout<<"hi";
     for(int j=i+1;j<y;j++){
        
         if(a[i]>a[j]){
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }//if
         
         
     }
     
 }   
    //return a;
}

int main()
{
   // int a[5];
   selection obj;
   
    int a[]={4,2,5,1,7,0,9};
    
    
    int x=  sizeof(a)/sizeof(a[0]);
   
  // int y=  sizeof(a[0]);//sizeof(a)/sizeof(a[0]);
   
//   cout<<x<<endl;
   //cout<<y<<endl;
 cout<<endl<<"Actual Array is"<<endl;
    for(int i=0;i<x;i++){
    std::cout << a[i] <<"\t" ;
        
    }

   obj.sort(a,x);//pass by reference
   cout<<endl<<"Sorted Array is"<<endl;

    for(int i=0;i<x;i++){
    std::cout << a[i] <<"\t" ;
    }

    return 0;
}


