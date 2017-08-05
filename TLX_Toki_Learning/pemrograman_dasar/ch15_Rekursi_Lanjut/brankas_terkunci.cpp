#include<bits/stdc++.h>
using namespace std;
int digit[10];
bool pernah[10];

int N, X;

void cetak(){
	int k;
	for(k=1;k<=X;k++){
		if(k==X){
			cout<<digit[k];
		}else{
			cout<<digit[k]<<" ";
		}
		
	}
	cout<<endl;
}
void kombinasi(int dalam){
	int i;
	
	if(dalam==X){
		for(i=1+digit[dalam-1];i<=N;i++){
			if(pernah[i]==false){
				digit[dalam]=i;
				pernah[i]=true;
				cetak();
				pernah[i]=false;
			}
		}	
	}else{
		for(i=1+digit[dalam-1];i<=N;i++){
			if(pernah[i]==false){
				digit[dalam]=i;
				pernah[i]=true;
				kombinasi(dalam+1);
				pernah[i]=false;
			}	
		}	
	}
}

int main(){
	scanf("%d %d",&N,&X);
	int i;
	for(i=1;i<=9;i++){
		pernah[i]=false;
	
	}
	
	kombinasi(1);
	return 0;
}