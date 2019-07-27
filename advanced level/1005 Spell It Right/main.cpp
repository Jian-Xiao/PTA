//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
    string digit[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char num[101];
    scanf("%s",&num);
    int ans=0,n=strlen(num);
    for(int i=0;i<n;i++){
        ans+=num[i]-'0';
    }
    char num2[4];
    sprintf(num2,"%d",ans);
    n=strlen(num2);
    printf("%s",digit[num2[0]-'0'].c_str());
    for(int i=1;i<n;i++){
        printf(" %s",digit[num2[i]-'0'].c_str());
    }
    return 0;
}
