#include<bits/stdc++.h>
using namespace std;

struct Nama{
	string Name;
	int jmlchar;
};
int main(){
	int N;
	scanf("%d",&N);
	
	Nama Data[501];
	int i;
	

	for(i=1;i<=N;i++){
		cin>>Data[i].Name;
		Data[i].jmlchar = Data[i].Name.length();
	}
	
	int j;
	string temp1;
	int temp2;
	for(i=1;i<=N;i++){
		temp1 = Data[i].Name;
		temp2 = Data[i].jmlchar;
		j=i-1;
		while((temp1<Data[j].Name)&&(j>1)){
			Data[j+1].Name=Data[j].Name;
			Data[j+1].jmlchar=Data[j].jmlchar;
			j--;
		}
		if(temp1>=Data[j].Name){
			Data[j+1].Name = temp1;
			Data[j+1].jmlchar = temp2;
		}else{
			Data[j+1].Name = Data[j].Name;
			Data[j].Name = temp1;
			Data[j+1].jmlchar = Data[j].jmlchar;
			Data[j].jmlchar = temp2;
		}
	}
	
	
	for(i=1;i<=N;i++){
		temp2 = Data[i].jmlchar;
		temp1 = Data[i].Name;
		j=i-1;
		while((temp2<Data[j].jmlchar)&&(j>1)){
			Data[j+1].jmlchar=Data[j].jmlchar;
			Data[j+1].Name=Data[j].Name;
			j--;
		}
		if(temp2>=Data[j].jmlchar){
			Data[j+1].jmlchar = temp2;
			Data[j+1].Name = temp1;
		}else{
			Data[j+1].jmlchar = Data[j].jmlchar;
			Data[j].jmlchar = temp2;
			Data[j+1].Name = Data[j].Name;
			Data[j].Name = temp1;
		}
	}
	
	for(i=1;i<=N;i++){
		cout<<Data[i].Name<<endl;
	}
	return 0;
}