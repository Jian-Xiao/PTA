//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    double maxP=0;
    for(int i=0;i<n;i++){
        int a, b;
        scanf("%d %d",&a,&b);
        maxP=max(maxP,sqrt(a*a+b*b));
    }
    printf("%.2lf",maxP);
    return 0;
}
