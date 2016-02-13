#include <iostream>
using namespace std;

int main() {
    int t,i,ht=1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        switch(n)
            {
            case 0:
            cout<<"1\n";
            break;
            case 1:
            cout<<"2\n";
            break;
            default:
            for(i=1;i<=n;i++)
                {
                if(i%2)
                    {
                    ht=ht*2;
                }
                else
                    {
                    ht+=1;
                }
            }
             cout<<ht<<"\n";
             break;
        }
        ht=1;
    }
    return 0;
}