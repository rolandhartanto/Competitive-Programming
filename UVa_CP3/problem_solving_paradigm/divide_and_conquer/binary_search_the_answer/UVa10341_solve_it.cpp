//UVa 10341 - Solve It
//Author : Roland Hartanto
#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-9

int main(){
	int p,q,r,s,t,u;
	while(scanf("%d",&p) == 1){
		scanf("%d %d %d %d %d",&q,&r,&s,&t,&u);
		
		if(((p * exp(-1) + q * sin(1) + r * cos(1) + s * tan(1) + t + u) > EPS)||(p + r + u < 0)){
			printf("No solution\n");
			continue;
		}
		
		double lo = 0.0, hi = 1.0, mid = 0.0, ans = 0.0;
		double test;
		for(int i=0;i<30;i++){
			mid = (lo + hi)/2.0;
			test = (p * exp((-1)*mid) + q * sin(mid) + r * cos(mid) + s * tan(mid) + t * mid * mid + u);
			if(fabs(0-test) <= EPS){
				break;
			}else if(test < 0){
				hi = mid;
			}else if(test > 0){
				lo = mid;
			}
		}

		printf("%.4lf\n",mid);
	}
	return 0;
}