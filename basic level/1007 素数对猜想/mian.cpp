//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <math.h>
using namespace std;

bool judge(int a){
    if(a==1){
        return false;
    }
    if(a==2||a==3||a==5||a==7){
        return true;
    }
    if(a%2==0||a%6!=5&&a%6!=1){
        return false;
    }
    for(int i=3;i<=sqrt(a);i+=2){     
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a=0,ans=0;
    scanf("%d",&a);
    for(int i=3;i<=a-2;i+=2){
        if(judge(i)&&judge(i+2)){
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
