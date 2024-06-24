
#include <iostream>
using namespace std;




    int MAX(int a[], int n){
        if (n == 1)
            return a[n];
        
        else if (a[n] > MAX(a, n - 1))
            return a[n];
        else
            return MAX(a, n - 1);

}
int main()
{
    int n;
    cin>> n;
    int a[1000];
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    cout<< MAX(a, n);
    



}

