//Hapus Satu Saja
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int main(){
	string A,B;
	
	cin>>A;
	cin>>B;
	
	int lA = A.length(),lB = B.length();
	int count=0;
	int i = 0, j = lB-1;

	
	if((lA-lB)==1){
		
		if(A[0]==B[0]){
			do{
				i++;
				count++;
				
			}while(A[i]==B[i]);
		}
		
		if((A[lA-1]==B[lB-1])&&(count<lB)){
			i=lA-1;
			do{
				i--;
				j--;
				count++;		
			}while((A[i]==B[j])&&(count<lB));
		}
		
		if(count==lB){
			cout<<"Tentu saja bisa!"<<endl;
		}else{
			cout<<"Wah, tidak bisa :("<<endl;
		}
	}else{
		cout<<"Wah, tidak bisa :("<<endl;
	}
	return 0;
}
