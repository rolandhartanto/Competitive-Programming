//Points on a Line
//Author : Roland Hartanto

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double x,y,x2,y2;
    cin >> x >> y;
    cin >> x2 >> y2;
    n-=2;
    
    while(((x==x2)&&(y==y2))&&(n>0)){
        cin >> x2 >> y2;    
        n--;
    }
    bool vertical;
    bool oneLine = true;
    if(x2==x){
        vertical = true;
    }else if(y==y2){
        vertical = false;
    }
    if((x!=x2)&&(y!=y2)){
        oneLine = false;
    }
    
    while(n>0){
        cin >> x2 >> y2;
        
        if(vertical){
            if(x2!=x){
                oneLine = false;
            }       
        }else{
            if(y2!=y){
                oneLine = false;
            }
        }
        n--;
    }
    if(oneLine){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
