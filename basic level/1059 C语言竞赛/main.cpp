//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <map>
#include <math.h>
using namespace std;
bool verify(int a);
int main(){
    int n;
    scanf("%d",&n);
    map<int,int> mm;
    for(int i=0;i<n;i++){
        int d;
        scanf("%d\n",&d);
        mm[d]=i+1;
    } 
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        int d;
        scanf("%d",&d);
        if(mm.find(d)!=mm.end()){
            int rank =mm[d];
            mm[d]=-1;
            if(rank==-1){
                printf("%04d: Checked\n",d);
            }
            else if(rank==1){
                printf("%04d: Mystery Award\n",d);
            }
            else if(verify(rank)){
                printf("%04d: Minion\n",d);
            }
            else{
                printf("%04d: Chocolate\n",d);
            }
        }
        else{
            printf("%04d: Are you kidding?\n",d);
        }
    } 
    return 0;
}
bool verify(int a){
    if(a<=1)
        return false;
    else if(a==2||a==3||a==5||a==7)
        return true;
    else if(a%2==0||a%6!=1&&a%6!=5)
        return false;
    else{
        for(int i=3;i<=sqrt(a);i+=2){
            if(a%i==0)
                return false;
        }
        return true;
    }
    
}
