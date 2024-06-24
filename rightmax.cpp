
#include <iostream>
using namespace std;

//عذااااااااااااااااااااااب عشان اوصل للحل دا دووووووخت بس عااااااااش
void rightmax(int a[],int n, int d) {


    if (d == n)
        return;
    
  

    int m = *max_element(a + d, a + n);

    a[d] = m;
    

    rightmax(a,n, d+1);



}
int main()
{
    int  n;
    cin >> n;
    int a[1000];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    rightmax(a,n,0);


    for (int i = 0;i < n;i++) {

        cout << a[i] << " ";
    }







}

