#include <iostream>

using namespace std;

class bubble{
    private:
    int temp;
   // int y;
    
    public:
    void sort(int *);
};

void bubble::sort(int *a){
   // temp=0;
 for (int i=0;i<5;i++){
     for(int j=0;j<4;j++){
        
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
   bubble obj;
   
    int a[5]={4,2,5,1,7};

    for(int i=0;i<5;i++){
    std::cout << a[i] <<"\t" ;
        
    }

   obj.sort(a);//pass by reference
   cout<<endl<<"Sorted Array is"<<endl;

    for(int i=0;i<5;i++){
    std::cout << a[i] <<"\t" ;
    }

    return 0;
}


