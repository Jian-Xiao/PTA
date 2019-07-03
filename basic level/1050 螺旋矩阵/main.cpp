//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
int **array2;
int * array1;
int a,b;
int index=0,i=0,j=0;
int cmp(int a,int b);

void goRight();
void goLeft();
void goUp();
void goDown();
int main(){
    int n;
    scanf("%d",&n);
    array1 =new int[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    sort(array1,array1+n,cmp);
    for(int i=sqrt(n);i>0;i--){
        if(n%i==0){
            a=n/i;
            b=i;
            break;
        }
    }
    array2 =new int *[a];
    for(int i=0;i<a;i++){
        array2[i]=new int[b]();       
    }
    goRight();
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(j==0)
                printf("%d",array2[i][j]);
            else
                printf(" %d",array2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int cmp(int a,int b){
    return a>b;
}
void goRight(){
    array2[i][j]=array1[index];
    index++;
    if(j+1<b&&array2[i][j+1]==0){
        j++;
        goRight();
    }
    else{
        if(i+1<a&&array2[i+1][j]==0){
            i++;
            goDown();
        }
        else{
            return;
        }
    }
}
void goLeft(){
    array2[i][j]=array1[index];
    index++;
    if(j-1>=0&&array2[i][j-1]==0){
        j--;
        goLeft();
    }
    else{
        if(i-1>=0&&array2[i-1][j]==0){
            i--;
            goUp();
        }
        else{
            return;
        }
    }
}
void goUp(){
    array2[i][j]=array1[index];
    index++;
    if(i-1>=0&&array2[i-1][j]==0){
        i--;
        goUp();
    }
    else{
        if(j+1<b&&array2[i][j+1]==0){
            j++;
            goRight();
        }
        else{
            return;
        }
    }
}
void goDown(){
    array2[i][j]=array1[index];
    index++;
    if(i+1<a&&array2[i+1][j]==0){
        i++;
        goDown();
    }
    else{
        if(j-1>=0&&array2[i][j-1]==0){
            j--;
            goLeft();
        }
        else{
            return;
        }
    }
}