//Seleksi Olimpiade
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

struct peserta{
	string ID;
	int sesi1;
	int sesi2;
	int sesi3;
};

int main(){
	int X;
	int N,M;
	peserta tes;
	peserta Data[81];
	scanf("%d",&X);
	int i,j;
	for(i=1;i<=X;i++){
		
		scanf("%d %d",&N,&M);
		cin>>tes.ID;
		
		for(j=1;j<=N;j++){
			cin>>Data[j].ID;
			cin>>Data[j].sesi1;
			cin>>Data[j].sesi2;
			cin>>Data[j].sesi3;
			if(Data[j].ID == tes.ID){
				tes.sesi1 = Data[j].sesi1;
				tes.sesi2 = Data[j].sesi2;
				tes.sesi3 = Data[j].sesi3;
			}
		}
		
		int urutan = 1;
		
		for(j=1;j<=N;j++){
			if(tes.sesi3<Data[j].sesi3){
				urutan = urutan +1;
			}
		}
		
		for(j=1;j<=N;j++){
			if(tes.sesi3 == Data[j].sesi3){
				if(tes.sesi2 < Data[j].sesi2){
					urutan = urutan +1;
				}
			}
		}
		
		for(j=1;j<=N;j++){
			if(tes.sesi2 == Data[j].sesi2){
				if(tes.sesi1 < Data[j].sesi1){
					urutan = urutan +1;
				}
			}
		}

		if(urutan>M){
			cout<<"TIDAK"<<endl;
		}else{
			cout<<"YA"<<endl;
		}
	}
	
	return 0;
}
