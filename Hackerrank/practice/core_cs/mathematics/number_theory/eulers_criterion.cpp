#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
//typedef map<int, int> mii;
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
	ll tc;
	scanf("%lld",&tc);
	
	while(tc--){
		ll A, M;//A is quadratic residue, M is prime 
		scanf("%lld %lld",&A,&M);
		ll test = (A==0)?1:modPow(A,(M-1)/2,M);
		if(test == 1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}