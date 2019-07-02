//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int a[100000];
    int b[100000];
    int c[100000];
    int n;
    int maxn=0;
    int minn=INT_MAX;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i)
            b[i]=b[i-1]>a[i-1]?b[i-1]:a[i-1];
        else
            b[0]=maxn;
    }
    int num=0;
    for(int i=n-1;i>=0;i--){
        if(i<n-1)
            c[i]=c[i+1]<a[i+1]?c[i+1]:a[i+1];
        else
            c[n-1]=minn;
        if(a[i]>=b[i]&&a[i]<=c[i]){
            num++;
        }
    }
    int flag=1;
    printf("%d\n",num);
    for(int i=0;i<n;i++){
        if(a[i]>=b[i]&&a[i]<=c[i]){
            if(flag){
                printf("%d",a[i]);
                flag=0;
                continue;
            }
            printf(" %d",a[i]);
        }
    }
    printf("\n");
    return 0;
}
