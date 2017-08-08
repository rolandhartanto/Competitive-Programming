//Terpendek ke-K
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int N, K;

void urut(int A[]){
	int temp;
	int i,j;
	for(i=1;i<=N;i++){
		temp = A[i];
		j=i-1;
		while((temp<(A[j]))&&(j>1)){
			A[j+1] = A[j];
			j--;
		}
		if(temp>=A[j]){
			A[j+1] = temp;
		}else{
			A[j+1] = A[j];
			A[j] = temp;
		}
	}
}

int main(){
	scanf("%d %d",&N,&K);
	int berat[1001];
	int i;
	for(i=1;i<=N;i++){
		scanf("%d",&berat[i]);
	}

	urut(berat);
	
	printf("%d\n",berat[K]);
	return 0;
}
