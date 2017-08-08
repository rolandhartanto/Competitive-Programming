//Permutasi Zig Zag
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;
int N;
bool pernah[10];
int catat[10]={0};

void permutasi(int dalam, int x){
	int i,j;
	bool periksa=true;

	if(dalam>x){
		if(x>2){
			for(j=2;j<x;j++){
				if(((catat[j]>catat[j-1])&&(catat[j]>catat[j+1]))||((catat[j]<catat[j-1])&&(catat[j]<catat[j+1]))){
					periksa=true;
				}else{
					periksa=false;
				}
				if(periksa==false){
					break;
				}
			}
		}
		
		if((periksa==true)||(x<=2)){
			for(i=1;i<=x;i++){
				cout<<catat[i];
			}
			cout<<endl;
		}
	}
	else{
		for(i=1;i<=x;i++){
			if(pernah[i]==false){
				pernah[i]=true;
				catat[dalam]=i;
				
				permutasi(dalam+1,x);
				pernah[i]=false;
			}
		}
	}
}

int main(){
	int k;
	scanf("%d",&N);
	for(k=1;k<=N;k++){
		pernah[k]= false;
	}
	
	permutasi(1,N);
	return 0;
}
