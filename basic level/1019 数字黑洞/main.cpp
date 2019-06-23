//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
void calculate(char* a);
int change2(char* a);
int change1(char* a);
void change3(int ans,char *a);
int main(){
    int d;
    scanf("%d",&d);
    char a[5];
    change3(d,a);
    if(a[0]==a[1]&&a[1]==a[2]&&a[3]==a[2])
        printf("%s - %s = 0000",a,a);
    else
        calculate(a);
    return 0;
}

void calculate(char* a){
    int ans=change1(a)-change2(a); 
    change3(ans,a);
    printf("%s\n",a);
    if(ans!=6174)
        calculate(a);
    else{
        return;
    }
}

int change2(char* a){
    sort(a,a+4);
    int a2= ((int)a[0]-48)*1000+((int)a[1]-48)*100+((int)a[2]-48)*10+(int)a[3]-48;
    printf("%s = ",a);
    return a2;
}
int change1(char* a){
    sort(a,a+4);
    int a1= ((int)a[0]-48)+((int)a[1]-48)*10+((int)a[2]-48)*100+((int)a[3]-48)*1000;
    printf("%d - ",a1);
    return a1;
}

void change3(int ans,char *a){
    char tmp[5]="0000";
    int i=3;
    while(ans){
        tmp[i--]=ans%10+'0';
        ans/=10;
    }
    strcpy(a,tmp);
}