//Tower 3 Coloring
//Author : Roland Hartanto

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

//(a^b) mod c
ll modPow(ll a, ll b, ll c){
	if(b==0){
		return 1;
	}else{
		if(b%2 == 0){
			ll ans = modPow(a,b/2,c);
			return (((ans%c)*(ans%c))%c);
		}else{
			return (((a%c)*(modPow(a,b-1,c)%c))%c);
		}
	}
}

int main(){
	ll n;
	scanf("%lld",&n);
	
	printf("%lld",(modPow(3,modPow(3,n,1000000006),1000000007)));
	return 0;
}
