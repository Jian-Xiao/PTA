//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string>
using namespace std;
int main(){
    int arr[55],arr2[55],cArr[55],n;
    char c5[5]={'S','H','C','D','J'};
    scanf("%d",&n);
    for(int i=1;i<=54;i++){
        arr[i]=i;
        scanf("%d",&cArr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<55;j++){
            arr2[cArr[j]]=arr[j];
        }
        swap(arr,arr2);
       
    }
    for(int j=1;j<55;j++){
        int start=(arr[j]-1)/13;
        int end =(arr[j]-1)%13+1;   
        if(j==1){
            printf("%c%d",c5[start],end);
        }
        else{
            printf(" %c%d",c5[start],end);
        }
    }
    return 0;
}
