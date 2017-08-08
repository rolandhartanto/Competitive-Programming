//Teman Dekat
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int pangkat(int Z, int pa){
	int k, h=1;
	for(k=1;k<=pa;k++){
		h=h*Z;
	}
	return h;
}
int relasi(int x, int y, int x2, int y2, int p){
	int T, Xt, Yt;
	Xt = abs(x2-x);
	Yt = abs(y2-y);
	
	T = pangkat(Xt,p)+pangkat(Yt,p);
	return T;
}

int main(){
	int N, D;
	scanf("%d %d",&N,&D);
	
	int i;
	int A[1001],B[1001];
	for(i=1;i<=N;i++){
		scanf("%d %d",&A[i],&B[i]);
	}
	
	int j, hsl[1000001], l=1;
	for(i=1;i<N;i++){
		for(j=i+1;j<=N;j++){
			hsl[l]=relasi(A[i],B[i],A[j],B[j],D);
			l++;
		}
	}
	int max = hsl[1],min = hsl[1];
	for(i=2;i<(l-1);i++){
		if(hsl[i]>max){
			max= hsl[i];
		}
		if(hsl[i]<min){
			min=hsl[i];
		}
	}
	
	printf("%d %d\n",min,max);
	return 0;
}
