#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    long long sum = 0;
    long long x;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%lld",&x);
        sum+=x;
    }
    printf("%lld\n",sum);
    return 0;
}
