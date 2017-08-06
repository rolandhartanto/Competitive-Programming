#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	scanf("%d",&N);
	
	int R[1001];
	
	int i, a, m=0;
	for(i=1;i<=1000;i++){
		R[i]=0;
	}
	for(i=1;i<=N;i++){
		scanf("%d",&a);
		R[a]=R[a]+1;
		
		if (a>m){
			m=a;
		}
	}
	int max=R[1000], p=m;
	for(i=m;i>=1;i--){
		if(R[i]>max){
			max=R[i];
			p=i;
		}
	}
	
	printf("%d\n",p);
	return 0;	
}