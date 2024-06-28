
#include <iostream>
using namespace std;
int sum = 0;
int suffixsum(int a[], int n,int r,int k) {
    

    if (r==(n-k)) 

        return sum;

    sum += a[r];

 return suffixsum(a, n,r-1,k);



}
int main()
{
    int  n,k;
    cin >> n>>k;
    int r = n;
    int a[1000];
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }

   cout<< suffixsum(a, n,r,k);









}

