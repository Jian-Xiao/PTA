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
    int m,n;
    scanf("%d %d",&m,&n);
    int *arr =new int [m]();
    int maxm=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int d;
            scanf("%d",&d);
            arr[j]+=d;
            maxm=maxm>arr[j]?maxm:arr[j];
        }
    }
    printf("%d\n",maxm);
    int first =1;
    for(int i=0;i<m;i++){
        if(arr[i]==maxm){
            if(first){
                first=0;
                printf("%d",i+1);
            }
            else
                printf(" %d",i+1);
        }
    }
    return 0;
}
