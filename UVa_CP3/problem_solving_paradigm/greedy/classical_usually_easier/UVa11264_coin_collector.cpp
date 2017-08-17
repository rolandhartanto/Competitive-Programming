//UVa 11264 - Coin Collector
//Author : Roland Hartanto
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int tc;
	vector<ll> coins;
	scanf("%d",&tc);
	while(tc--){
		int n;
		ll sum = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			ll x;
			scanf("%lld",&x);
			coins.push_back(x);
		}
		sum += coins[0];
		int count = 2;
		for(int i=1;i<n-1;i++){
			if(sum+coins[i] < coins[i+1]){
				count++;
				sum+=coins[i];
			}
		}
		printf("%d\n",count);
		coins.clear();
	}

	return 0;
}