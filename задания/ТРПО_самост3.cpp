#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	
	int n, k;
	cout << "Vvedite n: " << endl;
	cin >> n;
	cout << "Vvedite k: " << endl;
	cin >> k;

	int a = 1;
	if (k <= n) {

		while ((n / a) >= 1)
		{
			a *= 10;
		}
		a /= 10;
		while (k >= 1)
		{
			cout << (n / a) % 10;
			a /= 10;
			k--;
		}
	}
	else
	{
		cout << "Error" << endl;
	}
	return 0;
}