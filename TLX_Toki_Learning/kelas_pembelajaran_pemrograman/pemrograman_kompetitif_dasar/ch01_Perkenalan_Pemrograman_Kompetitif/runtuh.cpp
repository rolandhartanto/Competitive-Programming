//Runtuh
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int Rmax, Cmax;
string ar[21];

int main(){
	scanf("%d %d",&Rmax,&Cmax);
	
	bool statRuntuh;
	int i,j,runtuh,mulai=0;
	int count1[21]={0};
	for(i=1;i<=Rmax;i++){
		cin>>ar[i];
		for(j=0;j<Cmax;j++){
			if(ar[i][j]=='1'){
				count1[i]++;
			}
		}
		if((mulai==0)&&(count1[i]>0)){
			mulai=i;
		}
		if(count1[i]==Cmax){
			for(j=0;j<Cmax;j++){
				ar[i][j]='0';
			}
			runtuh=i;
		}
	}
	
	do{
		
		statRuntuh=false;
		int a;
		for(i=runtuh;i>=mulai;i--){
			for(j=0;j<Cmax;j++){
				if(ar[i][j]=='1'){
					a=i+1;
					while((ar[a][j]=='0')&&(!(a>Rmax))){
						ar[a][j]=ar[a-1][j];
						ar[a-1][j]='0';
						a++;
					}
				}
			}	
		}
		
		mulai=0;
		for(i=1;i<=Rmax;i++){
			count1[i]=0;
		}
		for(i=mulai;i<=Rmax;i++){
			for(j=0;j<=Cmax;j++){
				if(ar[i][j]=='1'){
					count1[i]++;
				}
			}
			if((mulai==0)&&(count1[i]>0)){
				mulai=i;
			}
			if(count1[i]==Cmax){
				for(j=0;j<Cmax;j++){
					ar[i][j]='0';
				}
				runtuh=i;
				statRuntuh=true;
			}
		}	
	
	}while(statRuntuh==true);
	
	
	for(i=1;i<=Rmax;i++){
		cout<<ar[i]<<endl;
	}
	
	return 0;
}
