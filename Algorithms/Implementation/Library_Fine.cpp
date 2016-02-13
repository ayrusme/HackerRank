#include<iostream>
using namespace std;
int main()
{
	int d1, m1, y1, d2, m2, y2, fine;
	cin >> d1 >> m1 >> y1;
	cin >> d2 >> m2 >> y2;
	if ((m1 == m2) && (y1 == y2))
	{
		if (d1 <= d2)
		{
			fine = 0;
		}
		else if (d1>d2)
		{
			fine = (d1 - d2) * 15;
		}
	}
	if ((m1 != m2) && (y1 == y2))
	{
		fine = (m1 - m2) * 500;
	}
	if (y1 != y2)
	{
		fine = 10000;
	}
	cout<<fine;
exit:
	return 0;
}