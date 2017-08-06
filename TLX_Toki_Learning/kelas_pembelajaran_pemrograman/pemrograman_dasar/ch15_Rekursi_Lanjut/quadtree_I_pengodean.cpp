#include <bits/stdc++.h>
using namespace std;

int arr[128][128];
int dimension;
vector<string> code;

void checkMatrix(string pos, int sr, int er, int sc, int ec){
	//cout << pos << endl;
	bool homogen = true;
	for(int i=sr;i<=er;i++){
		//cout << "tes" << endl;
		for(int j=sc;j<=ec;j++){
			//cout << arr[i][j] << arr[sr][sc] << endl;
			if(arr[i][j] != arr[sr][sc]){
				//cout << "tes2" << endl;
				homogen = false;
				break;
			}
		}
		if(!homogen){
			break;
		}
	}
	if(homogen){
		if(arr[sr][sc] == 1){
			code.push_back("1" + pos);
		}
	}else{
		checkMatrix(pos+"0",sr,sr+((er-sr+1)/2)-1,sc,sc+((ec-sc+1)/2)-1);
		checkMatrix(pos+"1",sr,sr+((er-sr+1)/2)-1,sc+((ec-sc+1)/2),ec);
		checkMatrix(pos+"2",sr+((er-sr+1)/2),er,sc,sc+((ec-sc+1)/2)-1);
		checkMatrix(pos+"3",sr+((er-sr+1)/2),er,sc+((ec-sc+1)/2),ec);
	}
	
}

int main(){
	int R,C;
	scanf("%d %d",&R,&C);
	
	int tempDimension = (R > C)? R:C;
	int divisor = 1;
	while(divisor < tempDimension){
		divisor *= 2;
	}
	
	dimension = divisor;
	for(int i=0;i<divisor;i++){
		for(int j=0;j<divisor;j++){
			arr[i][j] = 0;
		}
	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	checkMatrix("",0,divisor-1,0,divisor-1);
	
	cout << code.size() << endl;
	for(int i=0;i<code.size();i++){
		cout << code[i] << endl;
	}
	return 0;
}