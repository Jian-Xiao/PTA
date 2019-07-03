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
    int n=0;
    double num=0;
    scanf("%d",&n);
    double sum=0;
    for(int i=0;i<n;i++){
        scanf("%lf",&num);
        sum+=(long long)(n-i)*(i+1)*num;//第一次为int运算可能超出范围所以转换成大的
        //sum += a[i] * (N - i) * (i + 1);三次double运算
    }
     printf("%.2lf",sum);
    return 0;
}
