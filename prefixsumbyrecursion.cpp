
#include <iostream>
using namespace std;
int sum = 0;
int suffixsum(int a[], int n, int r, int k) {


    if (r >k)

        return sum;

    sum += a[r];

    suffixsum(a, n, r + 1, k);



}
int main()
{
    int  n, k;
    cin >> n >> k;
    int r = 1;
    int a[1000];
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }

    cout << suffixsum(a, n, r, k);









}

