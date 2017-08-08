//Army Game
//Author : Roland Hartanto

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    int ans;
    int sisab = 0, sisak = 0;
    if(n>=2){
        ans = n/2; 
        sisab = n%2;
    }else{
        ans = 1;
    }
    
    if(m>=2){
        ans *= m/2;
        sisak = m%2;
    }else{
        ans *= 1;
    }
    
    ans += (m>=2)?sisab*(m/2):sisab;
    ans += (n>=2)?sisak*(n/2):sisak;
    ans += sisab*sisak;
    cout << ans << endl;
    
    return 0;
}
