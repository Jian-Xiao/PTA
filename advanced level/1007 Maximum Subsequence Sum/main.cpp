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
    int n;
    scanf("%d",&n);
    int maxSum=0,maxf=0,maxe=0,maxl=0,first=0;
    int curSum=0,curNum=0,flag=0,curfirst=0;
    scanf("%d",&curNum);
    curfirst=curNum;
    first =curNum;
    for(int i=0;i<n;i++){
        curSum+=curNum;
        if(curNum>=0) 
            flag=1;
        if(curSum>maxSum){
            maxSum=curSum;
            maxf=curfirst;
            maxe=curNum;
        }   

        if(i!=n-1) 
            scanf("%d",&curNum);
        if(curSum<=0){
            curfirst=curNum;
            curSum=0;
        }    
    }
    if(flag)
        printf("%d %d %d",maxSum,maxf,maxe);
    else
        printf("0 %d %d",first,curNum);
    return 0;
}
