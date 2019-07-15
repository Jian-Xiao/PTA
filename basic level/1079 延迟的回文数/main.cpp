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

void add1(char *a,char*b,int &n){
    int flag=0,i=0;
    for(i=0;i<n;i++){
        int sum=a[i]+b[i]+flag-2*'0';
        a[i]=(sum)%10+'0';
        if(sum>=10){
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag){
        a[i]='1';
        a[i+1]='\0';
        n++;
    }
    reverse(a,a+n);
}
bool isAns(char* a,int n){
    int i=0,j=n-1;
    while(i<j){
        if(a[i++]!=a[j--]){
            return false;
        }
    }
    return true;
}

int main(){
    char a[1024];
    char b[1024];
    int n=0;
    char d;
    scanf("%c",&d);
    while(d!='\n'){
        a[n++]=d;
        scanf("%c",&d);
    }
    a[n]='\0';
    int time=0;
    while(true){
        if(isAns(a,n)){
            printf("%s is a palindromic number.\n",a);
            break;
        }
        else if(time==10){
            printf("Not found in 10 iterations.\n");
            break;
        }
        else{
            strcpy(b,a);
            reverse(a,a+n);
            printf("%s + %s = ",b,a);
            add1(a,b,n);
            printf("%s\n",a);
            time++;
        }
    }
    return 0;
}