#include <bits/stdc++.h>
using namespace std;


int main() {
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int p1,p2,q1,q2;
        scanf("%d %d %d %d",&p1,&p2,&q1,&q2);
        int r1 = q1+(q1-p1);
        int r2 = q2+(q2-p2);
        printf("%d %d\n",r1,r2);
    }
    return 0;
}