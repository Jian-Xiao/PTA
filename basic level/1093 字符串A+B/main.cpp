//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <map>
#include <string.h>
using namespace std;
int main(){
    map<char,int> mm;
    char a[1000001],b[1000001];
    char ans[97];
    cin.getline(a,1000001);
    cin.getline(b,1000001);
    int size=0,la=strlen(a),lb=strlen(b);
    for(int i=0;i<la;i++){
        if(size==96){
            break;
        }
        char cur =a[i];
        if(mm[cur]){
            continue;
        }
        else{
            mm[cur]++;
            ans[size++]=cur;
        }
    }
    for(int i=0;i<lb;i++){
        if(size==96){
            break;
        }
        char cur =b[i];
        if(mm[cur]){
            continue;
        }
        else{
            mm[cur]++;
            ans[size++]=cur;
        }
    }
    ans[size]='\0';
    printf("%s",ans);
    return 0;
}
