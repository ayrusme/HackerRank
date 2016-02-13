#include <iostream>
using namespace std;
int main() {
    int n,i;
    long long int b,a[10];
   cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
    }
    b=0;
    for(i=0;i<n;i++)
        {
        b=b+a[i];
    }
    cout<<b;
    exit:
    return 0;
}
