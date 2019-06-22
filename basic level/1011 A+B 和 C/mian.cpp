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
    int num=0;
    long long a,b,c;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("Case #%d: %s\n",i+1,a+b>c?"true":"false");
    }
    return 0;
}
