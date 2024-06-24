
#include <iostream>
using namespace std;


int m = 0;
double sum = 0.0;
double avarage(double a[], int n) {
    
    if (n == 0)
        return sum/m;

    sum += a[n];
    n--;
    m++;
    avarage(a, n);
    return sum/m;


}
int main()
{
    int  n;
    cin >> n;
    double a[1000];
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    cout << avarage(a, n);





}

