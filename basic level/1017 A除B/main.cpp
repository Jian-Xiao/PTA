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
void divide(char * A, int B, char *Q, int &R);
int main(){
    char A[1001],Q[1001];
    int B=0,R=0;
    scanf("%s %d",&A,&B);
    divide(A,B,Q,R);
    printf("%s %d",Q,R);
    return 0;
}
void divide(char * A, int B, char *Q, int &R){
    int i=0;
    int curQ=0,curR=0,curNum=0;
    int flag=0,bias=0;
    char MQ[1001];
    //排除2/7这种一位数除法且小于1的情况。
    if(A[1]=='\0'&&(int)(A[0]-48)<B){
        Q[0]='0';
        Q[1]='\0';
        R=(int)A[0]-48;
        return;
    }
    while(A[i]!='\0'){
        curNum=curNum*10+(int)(A[i]-48);
        if(curNum>=B){
            curQ=curNum/B;
            curR=curNum%B;
            curNum=curR;
            MQ[i]=curQ+'0';
            flag=1;
        }
        else{
            if(flag){
                MQ[i]='0';
                flag=1;
            }
            else{
                bias=1;
            }
            
        }
        i++;
    }
    MQ[i]='\0';
    strcpy(Q,MQ+bias);
    R=curR;
}