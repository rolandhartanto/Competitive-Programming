//Wartel
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

struct BkTlp{
	string nama;
	string nomorTlp;
};

int main(){
	BkTlp daftar[100001];
	int N,Q;
	
	cin>>N;
	cin>>Q;
	
	int i;
	for(i=1;i<=N;i++){
		cin>>daftar[i].nama;
		cin>>daftar[i].nomorTlp;
	}
	
	string X;
	for(i=1;i<=Q;i++){
		cin>>X;
		int hasil=0;
		int kiri=1, kanan=N;
		int tengah;
		while((kiri<=kanan)&&(hasil==0)){
			tengah = (kiri+kanan)/2;
			
			if(X<daftar[tengah].nama){
				kanan=tengah-1;
			}else if(X>daftar[tengah].nama){
				kiri=tengah+1;
			}else{
				hasil=tengah;
			}
		}
		if(hasil==0){
			cout<<"NIHIL"<<endl;
		}else{
			cout<<daftar[hasil].nomorTlp<<endl;
		}
	}
	return 0;
}
