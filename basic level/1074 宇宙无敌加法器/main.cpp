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
int main(){
    char tb[21], a[101], b[101];
    scanf("%s\n%s\n%s",tb,a,b);
    int lt=strlen(tb),la=strlen(a),lb=strlen(b);
    reverse(tb,tb+lt);
    reverse(a,a+la);
    reverse(b,b+lb);
    int l =max(la,lb);
    char * ans= new char[l+1];
    int flag=0,i=0,zero=0;
    for(;i<l;i++){
        int a1=i>=la?0:a[i]-'0';
        int b1=i>=lb?0:b[i]-'0';
        int t1=i>=lt||tb[i]=='0'?10:tb[i]-'0';
        int result =a1+b1+flag;
        if(result>=t1){
            flag=1;
        }
        else{
            flag=0;
        }
        ans[i]=result%t1+'0';
        if(ans[i]=='0'){
            zero++;
        }
        else{
            zero=0;
        }
    }
    if(flag){
        ans[i++]='1';
        zero=0;
    }
    ans[i]='\0';
    reverse(ans,ans+strlen(ans));
    if(strlen(ans)==zero)
        zero--;
    printf("%s",ans+zero);
    return 0;
}
