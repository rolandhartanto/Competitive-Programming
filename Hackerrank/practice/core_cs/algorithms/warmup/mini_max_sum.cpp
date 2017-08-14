//Mini-Max Sum
//Author : Roland Hartanto
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<long long> arr(5);
    long long sum = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
       sum+=arr[arr_i];
    }
    long long temp;
    long long max = -1, min = 99999999999;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       temp = sum;
       temp -= arr[arr_i];
       max = (max < temp)? temp: max;
       min = (min > temp)? temp: min;
    }
    cout << min << " " << max << endl;
    return 0;
}