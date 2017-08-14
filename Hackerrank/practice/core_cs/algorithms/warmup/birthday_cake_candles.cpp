#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector <int> ar) {
    int max = -1;
    int cntMax = 0;
    for(int i=0;i<(int)ar.size();i++){
        if(ar[i] > max){
            cntMax = 1;
            max = ar[i];
        }else if(ar[i] == max){
            cntMax++;
        }
    }
    return cntMax;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(ar);
    cout << result << endl;
    return 0;
}