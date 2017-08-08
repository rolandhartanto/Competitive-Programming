//UVa 00927 - Integer Sequences from Addition of Terms
//Author : Roland Hartanto

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll power(ll a, ll b){
	if(b == 0){
		return 1;
	}else if(b == 1){
		return a;
	}else{	
		ll p = power(a,b/2);
		ll result = p*p;
		if(b%2 == 1){
			result *= a;
		}
		return result;
	}
}

int main(){
	ll C;
	scanf("%d",&C);
	
	while(C--){
		ll deg;
		ll d, k;
		vector<ll> coeficient;
		scanf("%d",&deg);
		for(ll i=0;i<=deg;i++){
			ll x;
			scanf("%lld",&x);
			coeficient.push_back(x);
		}
		scanf("%lld",&d);
		scanf("%lld",&k);
	
		ll it = 0, cnt = 0, inc = d;
		while(it < k){
			it+=d;
			d+=inc;
			cnt++;
		}
		
		ll ans = 0;
		for(ll i=0;i<coeficient.size();i++){
			ans += coeficient[i] * power(cnt,i);
		}
		
		printf("%lld\n",ans);
		coeficient.clear();
	}
	return 0;
}