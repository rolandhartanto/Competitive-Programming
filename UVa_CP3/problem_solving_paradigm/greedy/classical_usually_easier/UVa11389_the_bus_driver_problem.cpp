//UVa 11389 - The Bus Driver Problem
//Author : Roland Hartanto
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	vector<ll> morning;
	vector<ll> evening;
	ll n, d, r;
	scanf("%lld %lld %lld", &n, &d, &r);
	while((n!=0)&&(d!=0)&&(r!=0)){
		for(ll i=0;i<n;i++){
			ll x;
			scanf("%lld",&x);
			morning.push_back(x);
		}
		sort(morning.begin(),morning.end());
		for(ll i=0;i<n;i++){
			ll x;
			scanf("%lld",&x);
			evening.push_back(x);
		}
		sort(evening.begin(),evening.end());
		ll j = n-1;
		ll overhour = 0;
		for(ll i=0;i<n;i++){
			if(morning[i]+evening[j] > d){
				overhour += (morning[i]+evening[j]-d);
			}
			j--;
		}
		printf("%lld\n",overhour*r);
		morning.clear();
		evening.clear();
		scanf("%d %d %d", &n, &d, &r);
	}

	return 0;
}