/*
Compare The Triplets
Author : Roland Hartanto
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int compare(int a,int b){
    if(a>b){
        return 1;
    }else if(a==b){
        return 0;
    }else{
        return -1;
    }
}

int main(){
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    int al=0,bo=0;
    if(compare(a0,b0)==1){
        al++;
    }else if(compare(a0,b0)==-1){
        bo++;
    }
    if(compare(a1,b1)==1){
        al++;
    }else if(compare(a1,b1)==-1){
        bo++;
    }   
    if(compare(a2,b2)==1){
        al++;
    }else if(compare(a2,b2)==-1){
        bo++;
    }   
    printf("%d %d\n",al,bo);
    return 0;
}
