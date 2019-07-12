//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int * a,n;
    scanf("%d",&n);
    a= new int [n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    sort(a,a+n);
    double sum=a[0];
    for(int i=1;i<n;i++){
        sum=(sum+a[i])/2;
    }   
    printf("%d",(int)sum);
    return 0;
}


