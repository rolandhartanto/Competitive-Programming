#include<bits/stdc++.h>
using namespace std;
int N;

int main(){

	int i;
	int ar[100001]={0};
	scanf("%d",&N);
	int artemp[101];
	
	for(i=1;i<=100;i++){
		artemp[i]=0;
	}
	
	for(i=1;i<=N;i++){
		scanf("%d",&ar[i]);
		artemp[(ar[i])]=artemp[(ar[i])]+1;
	}
	
	i=1;
	int j,k;
	for(j=1;j<=100;j++){
		if(artemp[j]>0){
			for(k=1;k<=artemp[j];k++){
				ar[i]=j;
				i++;
			}
		}
	}
	
	
	float median;
	if((N%2)==1){
		median = (float) (ar[(N+1)/2]);	
	}else if((N%2)==0){
		median = (float) (((float)(ar[(N/2)])+(float)(ar[(N/2)+1]))/2);
	}
	
	printf("%.1f\n",median);
	return 0;
}

