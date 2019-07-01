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
    map<char,int> maps;
    char a[1001];
    char b[1001];
    scanf("%s\n%s",a,b);
    int i=0;
    int ans=0;
    while(a[i]!='\0'){
        ++maps[a[i]];
        i++;
    }
    i=0;
    while(b[i]!='\0'){
       --maps[b[i]];
        if(maps[b[i]]<0){
            ans--;
        }
        i++;
    }
    if(ans<0){
        printf("No %d",(-1)*ans);
    }
    else{
        printf("Yes %d",strlen(a)-strlen(b));
    }
    return 0;
}
