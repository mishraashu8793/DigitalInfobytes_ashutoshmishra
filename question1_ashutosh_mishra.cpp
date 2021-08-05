#include <iostream>
using namespace std;
 

void result(int N)
{    
    
    int count =0;
    for (int num = 0; num < N; num++)
    {    
        
        if (num % 3 == 0)
            count++;
            
    }
    cout<<count;
}
 

int main()
{    
    
    int N;
    cin>>N;
     
    
    result(N);
    return 0;
}
