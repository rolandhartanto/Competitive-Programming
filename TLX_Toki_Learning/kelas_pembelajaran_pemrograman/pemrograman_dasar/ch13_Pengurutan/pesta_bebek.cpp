//Pesta Bebek
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;
int noUrut=1;

void urut(string teks[],int a, int no){
	int j;
	string temp;
	temp = teks[a];
	j=a-1;
	
	while((temp<teks[j])&&(j>1)){
		teks[j+1] = teks[j];
		j--;
	}
	if(temp>=teks[j]){
		teks[j+1] = temp;
		no = j+1;
	}
	else{
		teks[j+1]= teks[j];
		teks[j]=temp;
		no = j;
	}
	noUrut = no;
}

int main(){
	int N;
	scanf("%d",&N);
	
	int i;
	string Nama[1001];

	for(i=1;i<=N;i++){
		cin>>Nama[i];
		urut(Nama,i,noUrut);
		cout<<noUrut<<endl;		
	}
	return 0;
}
