#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
int main() {
    ld L,s1,s2;
    cin >> L >> s1 >> s2;
    int q;
    cin >> q;
    ld A;
    while(q--){
        cin >> A;
        ld d = sqrt(2*A);
        ld vrel = (s2>s1)?s2-s1:s1-s2;
        ld time = (sqrt(L*L+L*L)-d)/vrel;
        printf("%.10Lf\n",time);
    }
    return 0;
}
