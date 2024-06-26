

#include <iostream>
using namespace std;
int sum = 0;
bool isprefix(string m, string p, int n) {

	int r =p.length() ;
	if (r == 0)
		return true;
	else if (n  == r) {
		if (sum == r)
			return true;
		else
			return false;
	}
	if (m[n] == p[n])
		sum++;

	return isprefix(m, p, n + 1);
}
int main()
{
	
	int n = 0;
	string m, p;
	cin >> m >> p;

	cout << isprefix(m, p, n);











}

