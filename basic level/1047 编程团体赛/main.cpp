//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>

using namespace std;
int main(){
    int n;
    int teams[1001]={};
    int curT,curP,grade;
    int maxT=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d-%d %d",&curT,&curP,&grade);
        teams[curT]+=grade;
        if(teams[curT]>teams[maxT]){
            maxT=curT;
        }
    }
    printf("%d %d",maxT,teams[maxT]);
    return 0;
}
