#include<bits/stdc++.h>
using namespace std;

int FPB(int x,int y){
	int t;
	while(y!=0){
		t=y;
		y=x%y;
		x=t;
	}
	return x;
}

int KPK(int x, int y){
	return ((x/FPB(x,y))*y);
}

int main(){
	int N;
	int i, hslKPK;
	int z;
	int total=1;
	cin>>N;
	for(i=1;i<=N;i++){
		cin>>z;
		total=total*z;
		if(i>1){
			hslKPK = KPK(hslKPK,z);
		}else{
			hslKPK = z;
		}
	} 
	cout<<hslKPK<<endl;
	return 0;
}
