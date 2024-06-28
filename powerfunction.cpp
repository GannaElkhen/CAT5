

#include <iostream>
using namespace std;
int r=1;
int p(int v, int n) {
    
    
    if (n == 0)
        return 1;
    else {
        r *= v;
        n--;
        p(v, n);
        return r ;

     
      
        

    }
    
    
        
    
    


}

int main()
{
    int v,n;
    cin >> v>>n;
   cout<< p(v, n);
    
}

