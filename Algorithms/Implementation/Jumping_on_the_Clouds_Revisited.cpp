#include<iostream>
using namespace std;

int main()
{
	int n, k, i, c[25],e=100;
	cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin>>c[i];
    }
	for (i = 0; i < n;)
	{
		i = (i + k) % n;
        if(c[i]==0)
        {
            e=e-1;
        }
        else if(c[i]==1)
        {
        e=e-3;
        }
        if(i==0)
        {
        break;
        }
	}
    cout<<e;
    return 0;
}