//Restaurant
//Author : Roland Hartanto

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){return (b == 0)? a:gcd(b,a%b);}

int main() {
    int T;
    cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;
        int div = gcd(a,b);
        cout << (a/div) * (b/div) << endl;
    }   
    return 0;
}
