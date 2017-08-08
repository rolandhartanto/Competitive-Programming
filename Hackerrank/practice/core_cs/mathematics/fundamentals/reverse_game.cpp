//Reverse Game
//Author : Roland Hartanto

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        
        int a = n-1, b = 0;
        for(int i=0;i<n;i++){
            if(i%2 == 0){
                arr[i] = a;
                a--;
            }else{
                arr[i] = b;
                b++;
            }
            if(arr[i] == k){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
