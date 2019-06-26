//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int nums,p;
    scanf("%d %d",&nums,&p);
    long long N[100000]={};
    for(int i=0;i<nums;i++){
        scanf("%lld",&N[i]);
    }
    sort(N,N+nums);
    int tmax=0;
    int m=0,n=0;
    while(m<=n&&n<nums){
        if(N[m]*p>=N[n]){
            tmax=tmax>n-m+1?tmax:n-m+1;
            n++;
        }
        else{
            m++;
        }
    }
    printf("%d",tmax);
    return 0;
}