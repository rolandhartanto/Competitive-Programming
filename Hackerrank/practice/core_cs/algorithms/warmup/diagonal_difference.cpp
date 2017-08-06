#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum1 = 0, sum2 = 0;
    int k = n-1;
    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
           int x;
           cin >> x;
           if(i == j){
               sum1 += x;
           }
           if(k == j){
               sum2 += x;
               k--;
           }
       }
    }
    cout << abs(sum1 - sum2) << endl;
    
    return 0;
}