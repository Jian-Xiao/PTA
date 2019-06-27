//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string.h>
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

void mergeSort(int *a,int f,int e){
    int mid =(f+e)/2;
    if(mid>1){
        mergeSort(a,f,mid);
        mergeSort(a+mid,mid+1,e);
    }
    int i=0,j=mid;
    int * tmpArray = new int [e-f+1]; 
    int num=0;
    while(i<=mid&&j<=e){
        if(a[i]<=a[j]){
            tmpArray[num++]=a[i++];
        }
        else{
            tmpArray[num++]=a[j++];
        }
    }
    while(i<=mid){
        tmpArray[num++]=a[i++];
    }
    while(j<=e){
        tmpArray[num++]=a[j++];
    }
    for(int m=0;m<e-f+1;m++){
        a[f+m]=tmpArray[m];
    }
    if(flag1&&flag2){
        printf("%d",a[0]);
        for(int k=1;k<N;k++){
            printf(" %d",a[k]);
        }
        flag2=0;
        return;
    }
    if(equal(a)){
        flag1=1;
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
            printf("%d",a[0]);
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
    // insertSort(origin,N);
    mergeSort(origin2,0,N-1);
    return 0;
}


