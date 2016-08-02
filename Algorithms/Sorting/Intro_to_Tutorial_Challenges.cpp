#include <iostream>
using namespace std;


int main() {
    int i,b,n,k;
    cin>>k;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>b;
        if(b==k)
            {
            cout<<i;
            break;
            }
        }
    return 0;
}