
#include <iostream>
using namespace std;


void increment(int a[], int n) {
    

    if (n == 0)
        return ;
        
    a[n - 1] +=  n - 1;

    increment(a, n - 1);
    


}
int main()
{
    int  n;
    cin >> n;
    int a[1000];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
     increment(a, n);

     for (int i = 0;i < n;i++) {

         cout << a[i]<<" ";
     }







}

