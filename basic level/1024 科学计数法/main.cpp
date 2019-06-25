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
int main(){
    char c1,c2;
    char n1[60000];
    fill(n1,n1+60000,'0');
    int n2;
    int bias=30000;
    scanf("%c%[^E]s",&c1,n1+bias);
    scanf("E%c%d",&c2,&n2);
    int len=strlen(n1+bias);
    if(c2=='+'&&n2){
        if(n2<len-2){
            for(int i=0;i<n2;i++){
                n1[bias+1+i]=n1[bias+2+i];
            }
            n1[bias+1+n2]='.';
        } 
        else{  
            n1[bias+len]='0'; 
            for(int i=0;i<n2;i++){
                n1[bias+1+i]=n1[bias+2+i];
            }
            n1[bias+1+n2]='\0';    
        }
        printf("%s%s",c1=='+'?"":"-",n1+bias); 
    }
    else if(n2){
        n1[bias+1]=n1[bias];
        n1[bias]='0';
        n1[bias+1-n2]='.';
        printf("%s%s",c1=='+'?"":"-",n1+bias-n2);
    }
    else{
        printf("%s%s",c1=='+'?"":"-",n1+bias);
    }
    return 0;
}
