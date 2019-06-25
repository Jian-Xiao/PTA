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
    char buf[1001];
    int ans[10]={};
    scanf("%s",buf);
    for(int i=0;i<strlen(buf);i++){
        ans[(int)buf[i]-'0']++;
    }
    for(int i=0;i<10;i++){
        if(ans[i]!=0)
            printf("%d:%d\n",i,ans[i]);
    }
    return 0;
}
