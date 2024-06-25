
#include <iostream>
using namespace std;
int sum = 0;
int ispalindrom(int a[], int n,int r) {


    if (n == 0) {
        if (sum == r-1)
            cout << "yes";
        else
            cout << "no";

        return 0;
    }

    else if (a[n] == a[r])
        sum++;
    
    
    ispalindrom(a, n-1, r + 1);

    
    


}
int main()
{
    int  n;
    cin >> n ;
    int r = 1;
    int a[1000];
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        
    }
    

    cout << ispalindrom(a,n,r);









}

