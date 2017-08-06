#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int sum = 0;
    int x;
    //vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       //cin >> arr[arr_i];
       cin>>x;
       sum = sum+x;
    }
    cout<<sum<<endl;
    return 0;
}
