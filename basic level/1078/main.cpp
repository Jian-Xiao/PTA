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
char qus[1001];
char ans[100000];
int start=0;
void compress(){
    char a,b;
    int num=1,index=0;
    b=qus[start++];
    while(b!='\0'){
        a=b;
        b=qus[start++];
        if(a==b){
            num++;
        }
        else{
            if(num==1){
                ans[index++]=a;
            }
            else{
                if(num>=1000){
                    ans[index++]=num/1000+'0';
                    ans[index++]=(num/100)%10+'0';
                    ans[index++]=(num/10)%10+'0';
                    ans[index++]=num%10+'0';
                }
                else if(num>=100){
                    ans[index++]=num/100+'0';
                    ans[index++]=(num/10)%10+'0';
                    ans[index++]=num%10+'0';
                }
                else if(num>=10){
                    ans[index++]=num/10+'0';
                    ans[index++]=num%10+'0';
                }
                else{
                    ans[index++]=num+'0';
                } 
                ans[index++]=a;
                num=1;
            }
        }
    }
    ans[index]='\0';
}
void deCompress(){
    char a,b;
    int num=0,index=0;
    b=qus[start++];
    while(b!='\0'){
        a=b;
        b=qus[start++];
        if(a<='9'&&a>='0'){
            num=num*10+a-'0';
        }
        else{
            num=num==0?1:num;
            fill(ans+index,ans+index+num,a);
            index+=num;
            num=0;
        }
    }
    ans[index]='\0';
}
int main(){
    char c,buf[10];
    printf("input:\n");
    scanf("%c",&c);
    getchar();
    cin.getline(buf,10);


    printf("output:\n");
    printf("%s",buf);
    return 0;
}
