//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
bool isAns(int a){
    if(a<=1)
        return false;
    else if(a==2||a==3||a==5||a==7)
        return true;
    else if(a%2==0||a%6!=1&&a%6!=5)
        return false;
    else{
        for(int i=3;i<=sqrt(a);i+=2){
            if(a%i==0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    int l,k;
    scanf("%d %d",&l,&k);
    char* pro =new char[l+1];
    char * cur =new char[k+1];
    scanf("%s",pro);
    int i=0,j=k-1,end=0;
    while(j<l){
        int a;
        strncpy(cur,pro+i,k);
        cur[k]='\0';
        sscanf(cur,"%d",&a);
        if(isAns(a)){
            printf("%s\n",cur);
            end =1;
            break;
        }
        i++;
        j++;
    }
    if(!end){
        printf("404\n");
    }
    return 0;
}
