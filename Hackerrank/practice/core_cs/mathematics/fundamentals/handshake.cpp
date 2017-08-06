#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int N;
        cin >> N;
        if(N>1){
            int comb2 = N*(N-1)/2;
            cout << comb2 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}