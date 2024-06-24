
#include <iostream>
using namespace std;


void accumulation(int a[], int n) {


    if (n == 0)
        return;

    int r = n;
    for (int i = 1;i <r;i++) {

        a[n] += a[i];

    }

    accumulation(a, n - 1);



}
int main()
{
    int  n;
    cin >> n;
    int a[1000];
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    accumulation(a, n);

    for (int i = 1;i <= n;i++) {

        cout << a[i] << " ";
    }







}

