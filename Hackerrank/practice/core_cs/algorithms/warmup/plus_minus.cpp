#include <cmath>
#include <iostream>
using namespace std;

int main(){
    float n;
    scanf("%f",&n);
  
    float cntZero = 0;
    float cntPositive = 0;
    float cntNegative = 0;
    for(int i = 0;i < n;i++){
        int x;
        scanf("%d",&x);
        if(x == 0){
            cntZero+=1.0;
        }else if(x > 0){
            cntPositive+=1.0;
        }else{
            cntNegative+=1.0;
        }
    }
    
    printf("%.6f\n",(cntPositive/n));
    printf("%.6f\n",(cntNegative/n));
    printf("%.6f\n",(cntZero/n));
    return 0;
}