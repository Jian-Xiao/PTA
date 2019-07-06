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
    int n;
    scanf("%d",&n);
    int * b=new int [n+2]();
    int * beyond=new int [n+2]();
    int d=0;
    for(int i=0;i<n;i++){
        scanf("%d",&d);
        if(d>n+1)
            d=n+1;
        b[d]++;
    }
    for(int i=n;i>=0;i--){
        beyond[i]+=b[i+1]+beyond[i+1];
        if(beyond[i]>=i){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
