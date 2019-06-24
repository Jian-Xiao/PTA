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
void change1(int a,char *ans1){
    char ans[4]="000";
    int  i=2;
    while(a){
        ans[i--]=a%10+'0';
        a/=10;
    }
    strcpy(ans1,ans);
}
int main(){
    int a,b;
    char result[11]="-2,000,000";
    scanf("%d %d",&a,&b);
    int ans=a+b;
    if(fabs(ans)<1000)
        printf("%d",ans);
    else if(fabs(ans)<1000000){
        char s1[4]={};
        change1(fabs(ans%1000),s1);
        printf("%d,%s",ans/1000,s1);
    }
    else{
        int d1=ans/1000000;
        int d2=ans/1000-d1*1000;
        char s3[4]={};
        char s2[4]={};
        int d3=ans%1000;
        change1(fabs(d2),s2);
        change1(fabs(d3),s3);
        printf("%d,%s,%s",d1,s2,s3);
    }
    return 0;
}
