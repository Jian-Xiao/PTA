//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
void decimalToXBaseSystem(int num,int x,char * num2){
    char ans[33];//整数的二进制也只有32位
    int i=0;   
    do{
        int rest= num%x;
        if(rest<=9&&rest>=0)
            ans[i++]=rest+'0';
        else
            ans[i++]=rest-10+'a';
        num/=x;    
    }while(num);
    ans[i]='\0';
    reverse(ans,ans+i);
    strcpy(num2,ans);
}

int main(){
    int a,b,d;
    scanf("%d %d %d",&a,&b,&d);
    int c =a+b;
    char num2[33];
    decimalToXBaseSystem(c,d,num2);
    printf("%s",num2);
    return 0;
}

