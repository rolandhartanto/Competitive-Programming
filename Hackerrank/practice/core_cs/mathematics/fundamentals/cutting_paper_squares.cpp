//Cutting Paper Squares
//Author : Roland Hartanto

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(ll n, ll m){
    return ((n-1)+(m-1)*n);
}

int main() {
    ll n;
    ll m;
    cin >> n >> m;
    ll result = solve(n, m);
    cout << result << endl;
    return 0;
}
