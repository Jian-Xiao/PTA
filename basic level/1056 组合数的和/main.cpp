//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
    int n=0;
    scanf("%d",&n);
    int sum =0;
    int a=0;
    for( int i=0;i<n;i++){
        scanf("%d",&a);
        sum+=(n-1)*a*11;
    }
    printf("%d",sum);
    return 0;
}
