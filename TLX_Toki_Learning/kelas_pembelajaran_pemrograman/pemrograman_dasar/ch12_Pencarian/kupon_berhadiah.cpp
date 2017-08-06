#include<bits/stdc++.h>
using namespace std;

struct Data{
	int kode;
	int selisih;
};

int main(){
	Data tiket[1001]={0};
	int N, X;
	
	scanf("%d %d",&N,&X);
	
	int i;
	int minselisih=400001;
	int mintiket=200000;
	for(i=1;i<=N;i++){
		scanf("%d",&tiket[i].kode);
		tiket[i].selisih = X - tiket[i].kode;
		
		if(tiket[i].selisih < 0){
			tiket[i].selisih = -(tiket[i].selisih);
		}
		
		if(tiket[i].selisih < minselisih){
			minselisih = tiket[i].selisih;
		}
	}
	
	for(i=1;i<=N;i++){
		if(tiket[i].selisih == minselisih){
			if(tiket[i].kode < mintiket){
				mintiket = tiket[i].kode;
			}
		}
	}
	printf("%d\n",mintiket);
	
	return 0;
}