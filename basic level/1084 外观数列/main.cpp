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
    char pro[100000];
    char ans[100000];
    int t,time=1;
    scanf("%s %d",ans,&t); 
    strcpy(pro,ans);
    for(int i=1;i<t;i++){
        int j=0,k=0;
        while(pro[j]!='\0'){
            if(pro[j]==pro[j+1]){
                time++;            
            }
            else{
                ans[k++]=pro[j];
                ans[k++]=time+'0';
                time=1;
            }
            j++;
        }
        ans[k]='\0';
        strcpy(pro,ans);
    }
    printf("%s",ans);
    return 0;
}
