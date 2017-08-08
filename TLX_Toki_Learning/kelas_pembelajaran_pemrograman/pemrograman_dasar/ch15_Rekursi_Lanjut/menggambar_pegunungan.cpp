//Menggambar Pegunungan
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

void cetak(int x){
	if(x==1){
		cout<<"*"<<endl;
	}else if(x>1){
		cetak(x-1);
		int i;
		for(i=1;i<=x;i++){
			cout<<"*";	
		}
		cout<<endl;
		cetak(x-1);
	}
}

int main(){
	int N;
	scanf("%d",&N);
	
	cetak(N);
	return 0;
}
