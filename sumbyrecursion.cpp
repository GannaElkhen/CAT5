
#include <iostream>
using namespace std;



int sum = 0;
int Sum(int a[], int n) {
    if (n == 0)
        return sum;
    
    sum += a[n];
    n--;
    Sum(a, n);
        return sum;
   
    
}
int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    cout<<Sum(a, n);
    




}

