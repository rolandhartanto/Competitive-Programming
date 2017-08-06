#include<bits/stdc++.h>
using namespace std;

int main(){
	//SoE 
	bool A[1000001];
	int B[100000];
	int i;
	for(i=1;i<=1000000;i++){
		A[i]=true;
	}
	for(i=1;i<100000;i++){
		B[i]=0;
	}
	int j;
	
	A[1]=false;
	for(i=2;i<=sqrt(1000000);i++){
		if(A[i]==true){
			for(j=(i*i);j<=1000000;j+=i){
				A[j]=false;
			}
		}
	}
	j=1;
	for(i=2;i<=1000000;i++){
		if(A[i]==true){
			B[j]=i;
			j++;
		}
	}
	
	int T,K;
	cin>>T;
	for(i=1;i<=T;i++){
		cin>>K;
		cout<<B[K]<<endl;
	}
	return 0;
}
