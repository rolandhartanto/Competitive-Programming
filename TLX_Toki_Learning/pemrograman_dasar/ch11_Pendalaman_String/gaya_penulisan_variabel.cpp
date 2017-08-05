#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>> str;

	unsigned int snake='_';
	unsigned int maxcamel='Z';
	unsigned int mincamel='A';
	unsigned int maxkcl='z';
	unsigned int minkcl='a';
	
	unsigned int temp;
	int i=0;
	while(i<=str.length()){
		temp=str[i];
		bool snakeTest=false;
		bool camelTest=false;
		if(temp==snake){
			str.erase(i,1);
			snakeTest=true;
			camelTest=false;
		}else if((temp>=mincamel)&&(temp<=maxcamel)){
			camelTest=true;
			snakeTest=false;
			str.insert(i,"_");
		}
		temp=str[i];
		int temp2=str[i+1];
		if(snakeTest){
			if((temp>=minkcl)&&(temp<=maxkcl)){
				str[i]=mincamel+(temp-minkcl);
			}
		}else if(camelTest){
			str[i+1]=minkcl+(temp2-mincamel);
			i=i+1;
		}
		i=i+1;
	}
	
	cout<<str<<endl;
	return 0;
}