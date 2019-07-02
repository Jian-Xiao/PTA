//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string.h>
#include <string>
#include <map>
using namespace std;
map<string,int> mmap;
char lowbit[13][5]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
char highbit[13][4]={"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int htod(char *a){
    int d=strlen(a);
    char highC[4];
    char lowC[5];
    if(d>4){
        strncpy(highC,a,3);
        highC[3]='\0';
        strcpy(lowC,a+4);
        d=mmap[highC]+mmap[lowC];
    }
    else{
        strcpy(lowC,a);
        d=mmap[lowC];
    }
    return d;
}
void dtoh(char *a){
    int d;
    sscanf(a,"%d",&d);
    int lb=d%13;
    int hb=d/13;
    int bias=0;
    if(hb>0){
        strcpy(a,highbit[hb]);
        
        bias=4;
        if(lb!=0){
            strcpy(a+3," ");
            strcpy(a+bias,lowbit[lb]);
        }
    }
    else{
        strcpy(a+bias,lowbit[lb]);
    }
}

int main(){
    int n=0;
    
    for(int i=0;i<13;i++){
        mmap[lowbit[i]]=i;
    }
    for(int i=1;i<13;i++){
        mmap[highbit[i]]=i*13;
    }
    scanf("%d\n",&n);
    char a[9];
    for(int i=0;i<n;i++){
        cin.getline(a,9);
        if(a[0]>='a'){
            printf("%d\n",htod(a));
        }
        else{
            dtoh(a);
            printf("%s\n",a);
        }
    }
    return 0;
}
