//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char a[101],b[101];
    scanf("%s %s",a,b);
    int i=strlen(a)-1,j=strlen(b)-1;
    int bias=1;
    while(i>=0&&j>=0){
        if(bias%2==0){
            b[j]=b[j]-a[i]+'0';
            if(b[j]<'0')
                b[j]+=10;
        }
        else{
            int sum =(b[j]+a[i]-2*'0')%13;
            if(sum<10){
                b[j]=sum+'0';
            }
            else if(sum==10)
                b[j]='J';
            else if(sum==11)
                b[j]='Q';
            else 
                b[j]='K';
        }      
        i--;
        j--;
        bias++;
    }
    a[i+1]='\0';
    while(i>=0){
        if(bias%2==0){
            if(a[i]!='0')
                a[i]=10-(a[i]-'0')+'0';
        }
        bias++;
        i--;
    }
    if(a[0]!='\0')
        printf("%s",a);
    printf("%s",b);
    return 0;
}
