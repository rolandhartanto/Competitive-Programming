#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n,k;
	vector<bool> garden;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		scanf("%d %d",&n,&k);
		
		int num = 1;
		int dry = n-k;
		for(int i=0;i<n;i++){
			garden.push_back(false);
		}
		
		for(int i=0;i<k;i++){
			int x;
			scanf("%d",&x);
			garden[x-1] = true;
		}
		
		int counter = 0;
		int max = -1;
		bool awal = true;
		for(int i=0;i<n;i++){
			if(garden[i]){
				if(awal){
					max = counter;
					awal = false;
				}else{
					if(counter%2 == 0){
						max = (counter/2 > max)? counter/2:max;
					}else{
						max = (((counter/2)+1) > max)? (counter/2)+1:max;
					}
				}
				counter = 0;
			}else{
				counter++;
			}
		}
		max = (counter > max)? counter:max;

		printf("%d\n",num+max);
		garden.clear();
	}
	return 0;
}