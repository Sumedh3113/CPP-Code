#include <iostream>

using namespace std;

int count=1;

void print(){
    
    std::cout << "Hello "<<count++ << std::endl;
    
}

void print2(){
    
    std::cout << "Hello2 " <<std::endl;
    
}

int main()
{
    int x=0;
    
    for(int i=0;i<=5;i++)
  {
      if(i==1 || i==3 || i==5)
  
  {
    print();
  }
  
  if(i==2 || i==4)
  {
      print2();
  }
}
    return 0;
}

/*
Output is
Hello 1
Hello2
Hello 2
Hello2
Hello 3

that means when lower function get called it is not like the 
only part below that function will execute after the function returns it 
will check for the stack and then return the values so function above the 
function can also get called otherwise function print() would not have been 
called for the value i==3
This is how multiple recurence works
*/
