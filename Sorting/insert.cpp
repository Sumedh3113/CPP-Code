#include <iostream>

using namespace std;

class insert{
    private:
    int temp;
   //int y;
    
    public:
    void sort(int *, int);
};

void insert::sort(int *a, int y){
   
 for (int i=0;i<y-1;i++){
     for(int j=i;j>=0;j--){
        
         if(a[j]>a[j+1]){
             temp=a[j+1];
             a[j+1]=a[j];
             a[j]=temp;
         }//if
         
         
     }
     
 }   
    //return a;
}

int main()
{
   // int a[5];
   insert obj;
   
    int a[]={4,2,5,8,7,9,1,10};
    
    
    int x=  sizeof(a)/sizeof(a[0]);
   
  // int y=  sizeof(a[0]);//sizeof(a)/sizeof(a[0]);
   
//   cout<<x<<endl;
   //cout<<y<<endl;

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


