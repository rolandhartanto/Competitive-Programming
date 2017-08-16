//UVa 11242 - Tour de France
//Author : Roland Hartanto
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<double> front;
	vector<double> rear;
	vector<double> ratio;
	int f, r;
	scanf("%d",&f);
	while(f > 0){
		scanf("%d",&r);
		for(int i=0;i<f;i++){
			double x;
			scanf("%lf",&x);
			front.push_back(x);
		}
		for(int i=0;i<r;i++){
			double x;
			scanf("%lf",&x);
			rear.push_back(x);
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<f;j++){
				ratio.push_back(rear[i]/front[j]);
			}
		}
		
		sort(ratio.begin(),ratio.end());
		double max = 0.0;
		for(int i=0;i<(int)ratio.size()-1;i++){
			max = ((ratio[i+1]/ratio[i]) > max)? (ratio[i+1]/ratio[i]):max;
		}
		printf("%.2lf\n",max);
		front.clear();
		rear.clear();
		ratio.clear();
		scanf("%d",&f);
	}

	return 0;
}