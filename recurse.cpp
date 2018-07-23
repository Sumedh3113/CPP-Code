/*
Here recurse function is called 3 times first to push the values then to pop them

Not really when second recurse is called the first recurse will alse be executed

value of n is 3 it will be the first value to be stored in the stack the  value of n-1


for previous value it will again call back to all the values till that value 
eg for 4 it will print 3,2 in 3 it will print 2 in 2 it will print 2 times

*/

#include <iostream>
using namespace std;

void recurse(int n){
    if(n<1){
        return;
    }
    
    std::cout <<"Push: "<< n << std::endl;
    //first recurse
	recurse(n-1);
    cout<<"Pop: "<<n<<endl;
    //second recurse
	recurse(n-1);
    
    
    
}

int main()
{
    recurse(3);
    return 0;
}
