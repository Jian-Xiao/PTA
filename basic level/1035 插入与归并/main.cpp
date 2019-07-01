//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int origin[100];
int origin2[100];
int result[100];
int N;
int flag1=0;
int flag2=1;
bool equal(int *a){
    for(int i=0;i<N;i++){
        if(a[i]!=result[i]){
            return false;
        }
    }
     return true;
}

void mergeSort(int *a,int n){
   int flag =0;
    for(int length=2;length<n;length*=2){
        int base=0;
        while(base<=n-length){
            sort(a+base,a+base+length);
            base+=length; 
        }
        //如果有剩余
        if(base<n&&base>n-length){
            sort(a+base,a+n);
        }
        if(flag){
            printf("Merge Sort%d",a[0]);
            for(int k=1;k<N;k++){
                printf(" %d",a[k]);
            }
            return;
        }
        if(equal(a)){
            flag=1;
        }     
    }       
    sort(a,a+n);
    if(flag){
        printf("Merge Sort\n%d",a[0]);
        for(int k=1;k<N;k++){
            printf(" %d",a[k]);
        }
        return;
    }
}

void insertSort(int *a,int n){
    int flag=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]<=a[j]){
                int tmp =a[i];
                memcpy(a+j+1,a+j,4*(i-j));
                a[j]=tmp;
                break;
            }
        }
        if(flag){
            printf("Insertion Sort\n%d",a[0]);
            for(int k=1;k<N;k++){
                printf(" %d",a[k]);
            }
            return;
        }
        if(equal(a)){
            flag=1;
        }     
    }
}

int main(){
    scanf("%d",&N);
    for(int i =0;i<N;i++){
        scanf("%d",&origin[i]);   
        origin2[i]=origin[i];   
    }
    for(int i =0;i<N;i++){
        scanf("%d",&result[i]);  
    }
    insertSort(origin,N);
    mergeSort(origin2,N);
    return 0;
}


