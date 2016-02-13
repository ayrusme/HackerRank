#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n,b=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
        {cin>>b;
        sum+=b;
    }
    cout<<sum;
    return 0;
}
