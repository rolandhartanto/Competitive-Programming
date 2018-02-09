#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ll n, k;
	set<int> myset;
	scanf("%lld %lld",&n, &k);
	
	if(k >= 43){//LCM 1 .. 43 is large
		printf("No\n");
	}else{
		//brute force for small k to check if all the remainings are different
		for(ll i = 1; i <= k; i++){
			myset.insert(n%i);
		}
		if(myset.size() == k){// all diff
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}