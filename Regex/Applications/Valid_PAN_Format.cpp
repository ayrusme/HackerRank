#include <iostream>
#include <regex>
#include<string>
using namespace std;


int main() {
    regex pan ("[A-Z][A-Z][A-Z][A-Z][A-Z][[:digit:]][[:digit:]][[:digit:]][[:digit:]][A-Z]");
    string s;
    int n;
    bool pa;
    cin>>n;
    for(int i=0;i<n;i++)
        {s="\0";
    cin>>s;
    pa=regex_match(s,pan);
    if(pa==true)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
    return 0;
}
