#include<iostream>
using namespace std;
int main()
{
	int t;
	long long n, max, c;
	cin >> t;
	for(int j=1;j<=t;j++)
	{
		cin >> n;
		cin >> max;
		for (int i = 1; i < n; i++)
		{
			cin >> c;
			if (c > max)
				max = c;
		}
		cout << "Case " << j << ": " << max << endl;
	}

	return 0;
}