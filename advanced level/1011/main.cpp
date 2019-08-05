//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>

using namespace std;
int main(){
    double a[3]={},d,ans=0;
    int b[3]={};
    char s[3]={'W','T','L'};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%lf",&d);
            if(d>a[i]){
                a[i]=d;
                b[i]=j;
            }
        }
    }
    ans=(a[0]*a[1]*a[2]*0.65-1)*2;
    printf("%c %c %c %.2lf",s[b[0]],s[b[1]],s[b[2]],ans);
    return 0;
}
