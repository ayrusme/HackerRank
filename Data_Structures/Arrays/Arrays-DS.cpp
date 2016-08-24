#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int n, arr_i;
    cin >> n;
    vector<int> arr(n);
    for(arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(arr_i = n-1;arr_i >= 0;arr_i--){
       cout << arr[arr_i]<<" ";
    }
    
    return 0;
}
