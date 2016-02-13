#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, a[100];
	float x = 0.0, b = 0.0, c = 0.0;
	float pos = 0.0, neg = 0.0, zero = 0.0;
	cin >> n;
	if (n<0 || n>100)
	{
		goto exit;
	}
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i<n; i++)
	{
		if (a[i]>0)
		{
			x++;
		}
		else if (a[i]<0)
		{
			b++;
		}
		else if (a[i] == 0)
		{
			c++;
		}
	}
	pos = x/n; 
	neg = b / n; 
	zero = c / n;
	cout << pos << "\n" << neg << "\n" << zero;

exit:
	return 0;
}