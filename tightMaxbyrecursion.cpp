
#include <iostream>
using namespace std;


void leftmax(int a[], int n) {

    
    if (n == 0)
        return;
    
        
        int m = *max_element(a, a + n);

        a[n-1] = m;
    
    leftmax(a, n - 1);



}
int main()
{
    int  n;
    cin >> n;
    int a[1000];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    reverse(a, a + n);
    leftmax(a, n);
    reverse(a, a + n);

    for (int i = 0;i < n;i++) {

        cout << a[i] << " ";
    }







}

