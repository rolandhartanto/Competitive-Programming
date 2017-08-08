//Wildcard
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int main(){
	string sample;
	cin>>sample;
	int i, N, count,j;
	string data;
	string depan="", belakang="";
	cin>>N;
	
	if(sample=="*"){
	
		for(i=1;i<=N;i++){
			cin>>data;
			cout<<data<<endl;
		}
	}else{
		int k=0;
		int asterix;
		for(j=0;j<sample.length();j++){
			if(sample[j]=='*'){
				asterix=j;
			}
		}
		depan= sample.substr(0,asterix);
		belakang= sample.substr(asterix+1);
	
		for(i=1;i<=N;i++){
			count=0;
			cin>>data;
			if(data.length()<(sample.length()-1)){
				count=0;
			}else{
				if(!(depan=="")){
					for(j=0;j<depan.length();j++){
						if(data[j]==depan[j]){
							count++;
						}
					}
				}
				k=data.length()-1;
				if(!(belakang=="")){
					for(j=belakang.length()-1;j>=0;j--){
						if(belakang[j]==data[k]){
							count++;
						}	
						k--;
					}
				}
			}
			if(count==sample.length()-1){
				cout<<data<<endl;
			}
		}
		
	}

	return 0;
}
