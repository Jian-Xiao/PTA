//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
void changeFormat(int seconds,char * result);
int main(){
    int CLK_TCK=100;
    int c1,c2;
    scanf("%d %d",&c1,&c2);
    int a =(int)round((double)(c2-c1)/CLK_TCK);
    char result[9];
    changeFormat(a,result);
    printf("%s",result);
    return 0;
}

void changeFormat(int seconds,char * result){
    char ans[9]="00:00:00";
    if(seconds>=3600){
        sprintf(ans,"%02d",seconds/3600);
        seconds=seconds%3600;
        ans[2]=':';
    }
    if(seconds>=60){
        sprintf(ans+3,"%02d",seconds/60);
        seconds=seconds%60;
        ans[5]=':';
    }
    sprintf(ans+6,"%02d",seconds);
    strcpy(result,ans);
}