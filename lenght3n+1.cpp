

#include <iostream>
using namespace std;
int c = 0;
int f(int n) {
    c++;
    
    if (n == 1) {
        cout << c;
        return 0;
    }
    
    if (n % 2 == 0)
        f(n / 2);
    else
        f(3*n + 1);


}



int main()
{

    int n;
    cin >> n;
    f(n);
    
    
}

