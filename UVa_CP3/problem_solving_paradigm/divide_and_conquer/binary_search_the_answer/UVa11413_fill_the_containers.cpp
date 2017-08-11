#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool feasibleForAllVessel(int x, int nContainers, const vector<int> &v){
	int containerIdx = 1;
	int sumOfVessel = 0;
	for(int i=0;i<v.size();i++){
		if(v[i] > x){
			return false;
		}else{
			sumOfVessel+= v[i];
			if(sumOfVessel > x){
				if(containerIdx == nContainers){
					return false;
				}
				containerIdx++;
				sumOfVessel = v[i];
			}
		}
	}
	return true;
}

int main(){
	int n,m;
	vector<int> vessel;
	while(scanf("%d %d",&n,&m)==2){
		for(int i=0;i<n;i++){
			int x;
			scanf("%d",&x);
			vessel.push_back(x);
		}
		
		int hi = 1000000000, lo = 0, mid, ans;
		while(hi>=lo){
			mid = (hi+lo)/2;
			//cout << mid << endl;
			if(feasibleForAllVessel(mid,m,vessel)){
				ans = mid;
				hi = mid-1;
			}else{
				lo = mid+1;
			}
		}
		printf("%d\n",ans);
		vessel.clear();
	}
	return 0;
}