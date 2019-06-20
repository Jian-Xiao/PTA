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
    int d;
    int ans=0;
    scanf("%d",&d);
    while(d!=1){
        if(d%2==0){
            d/=2;
        }
        else{
            d=(3*d+1)/2;
        }
        ans++;
    }
    printf("%d",ans);
    return 0;
}
