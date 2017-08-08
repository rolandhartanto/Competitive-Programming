//Quadtree II: Penerjemahan
//Author : Roland Hartanto

#include <bits/stdc++.h>
using namespace std;

int arr[128][128];
int dimension;
vector<string> code;

void writeMatrix(int el, int sr, int er, int sc, int ec){
	for(int i=sr;i<=er;i++){
		for(int j=sc;j<=ec;j++){
			arr[i][j] = el;
		}
	}
}

int main(){
	int N;
	int R,C;
	string x;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> x;
		code.push_back(x);
	}
	scanf("%d %d",&R,&C);
	
	int tempDimension = (R > C)? R:C;
	int divisor = 1;
	while(divisor < tempDimension){
		divisor *= 2;
	}
	
	dimension = divisor;
	for(int i=0;i<dimension;i++){
		for(int j=0;j<dimension;j++){
			arr[i][j] = 0;
		}
	}
	
	for(int i=0;i<N;i++){
		int sr=0,er=dimension-1,sc=0,ec=dimension-1;
		int element = (code[i][0] == '1')? 1:0;
		int j=1;
		while(j<code[i].length()){
			if(code[i][j] == '0'){
				er = sr+((er-sr+1)/2)-1;
				ec = sc+((ec-sc+1)/2)-1;
			}else if(code[i][j] == '1'){
				er = sr+((er-sr+1)/2)-1;
				sc = sc+((ec-sc+1)/2);
			}else if(code[i][j] == '2'){
				sr = sr+((er-sr+1)/2);
				ec = sc+((ec-sc+1)/2)-1;
			}else if(code[i][j] == '3'){
				sc = sc+((ec-sc+1)/2);
				sr = sr+((er-sr+1)/2);
			}
			j++;
		}
		writeMatrix(element,sr,er,sc,ec);
	}
	//checkMatrix("",0,divisor-1,0,divisor-1);
	
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout << arr[i][j];
			if(j<C-1){
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
