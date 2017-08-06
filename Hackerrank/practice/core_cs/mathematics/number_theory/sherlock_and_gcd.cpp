#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return (b==0) ? a:gcd(b,a%b);
}

int main() {
    int tc,n;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++){
        int one = true;
        scanf("%d",&n);
        int b = 0;
        for(int j=0;j<n;j++){
            int x;
            scanf("%d",&x);
            if(x!=1){one=false;};
            b = gcd(x,b);
        }
        if((b==1)&&(!one)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}