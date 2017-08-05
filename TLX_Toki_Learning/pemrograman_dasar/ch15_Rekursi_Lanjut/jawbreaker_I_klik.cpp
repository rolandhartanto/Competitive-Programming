#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define VISITED -9999

vector<vi> numMap;
int score = 0;

void floodfill(int x, int y, int maxX, int maxY, int color){
	if(numMap[x][y] == color){
		//cout << x << " "<<y << endl;
		numMap[x][y] = VISITED;
		score++;
		if(x-1 >= 0){
			floodfill(x-1,y,maxX,maxY,color);
		}
		if(x+1 <= maxX){
			floodfill(x+1,y,maxX,maxY,color);
		}
		if(y-1 >= 0){
			floodfill(x,y-1,maxX,maxY,color);
		}
		if(y+1 <= maxY){
			floodfill(x,y+1,maxX,maxY,color);
		}
	}
}

int main(){
	int M, N, B, K;
	cin >> M >> N;
	numMap.assign(M,vi());
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			int x;
			cin >> x;
			numMap[i].push_back(x);
		}
	}
	//start point
	cin >> B >> K;
	floodfill(B,K,M-1,N-1,numMap[B][K]);
	cout << score*(score-1) << endl;
	
	
	return 0;
}
