#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string A;
    cin >> A;
    ll B;
    cin >> B;
    int digit=0;
    ll ans = 0;
    ll pengali = 1;
    for(int i=A.length()-1;i>=0;i--){
        ll ansDigit = A[i]-'0';
        
        ansDigit = (ansDigit*pengali)%B;
        pengali = (pengali*10)%B;
        ans = (ans%B + ansDigit%B)%B;
        digit++;
    }
    cout << ans<< endl;
    return 0;
}
