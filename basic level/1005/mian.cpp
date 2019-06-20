//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include<set>
using namespace std;

void calculate(int d, set<int> &set){
    while(d!=1){
        if(d%2==0){
            d/=2;         
        }
        else{
            d=(3*d+1)/2;
        }
        set.insert(d);
    }
}

void findKey(set<int> *s,int n,int * array){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            if(s[j].find(array[i])!=s[j].end()){
                array[i]=0;
                break;
            }
        }
    }
}
void swap(int &a,int &b){
    int c = a;   
    a=b;
    b=c;
}
void sort(int * array,int length){
    for(int i=0;i<length;i++){
        for(int j=0;j<length-1;j++){
            if(array[j]<array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
}


int main(){
    int n;
    scanf("%d",&n);
    int *array = new int [n];
    set<int> *s= new set<int> [n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        calculate(array[i],s[i]);
    } 
    findKey(s,n,array);
    sort(array,n);
    bool first=true;
    for(int i=0;i<n;i++){
        if(array[i]!=0&&first){
             printf("%d",array[i]);
             first=false;
        }
        else if(array[i]!=0){
            printf(" %d",array[i]);
        }
    } 
    return 0;
}
