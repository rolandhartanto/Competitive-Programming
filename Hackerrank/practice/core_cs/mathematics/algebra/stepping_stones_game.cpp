#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll seqNumberN(ll n){
    return (n*(1+n)/2);
}

ll blockIdx(ll num){
    return ((sqrt(num*8+1) - 1)/2);
}

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll test = blockIdx(n);
        if(seqNumberN(test) == n){
            cout << "Go On Bob " << test << endl;
        }else{
            cout << "Better Luck Next Time" << endl;
        }
    }
    return 0;
}