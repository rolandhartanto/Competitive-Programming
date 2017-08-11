#include <bits/stdc++.h>
using namespace std;

vector<int> position;

bool isFeasibleK(int x){
	int k = x;
	if(position[0] > k){
		return false;
	}else{
		k = (position[0] == k)? k-1:k;
		for(int i=0;i<position.size()-1;i++){
			int diff = position[i+1] - position[i];
			if(diff > k){
				return false;
			}else{
				if(diff == k){
					if(k == 0){
						return false;
					}else{
						k--;
					}
				}
			}
		}
		return true;
	}
}

int main(){
	int T;
	scanf("%d",&T);
	int i = 1;
	while(T--){
		int n;
		scanf("%d",&n);
		for(int j=0;j<n;j++){
			int x;
			scanf("%d",&x);
			position.push_back(x);
		}
		
		int hi = 10000000, lo = 0, mid, ans;
		while(hi >= lo){
			mid = (hi+lo)/2;
			if(isFeasibleK(mid)){
				hi = mid-1;
				ans = mid;
			}else{
				lo = mid+1;
			}
		}
		printf("Case %d: %d\n",i,ans);
		position.clear();
		i++;
	}
	return 0;
}