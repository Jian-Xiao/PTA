//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>

using namespace std;
struct Node{
    int add=-1;
    int data;
    int next;
}ns[100000],arr[100000];
int main(){
    int start,total,k,d1,d2,d3;
    int n1=0,n2=0;
    scanf("%d %d %d",&start,&total,&k);
    for(int i=0;i<total;i++){
        scanf("%d %d %d",&d1,&d2,&d3);
        ns[d1].add=d1;
        ns[d1].data=d2;
        ns[d1].next=d3;
        if(d2<0)
            n1++;
        else if(d2<=k)
            n2++;
    }
    int i=0,j=n1,l=n1+n2;
    while(start!=-1){
        if(ns[start].data<0)
            arr[i++]=ns[start];
        else if(ns[start].data<=k)
            arr[j++]=ns[start];
        else
            arr[l++]=ns[start];
        start=ns[start].next;
    }
    int x=0;
    for(;x<l-1;x++){
        if(x<i||x>=n1&&x<j||x>=n1+n2<l){
            printf("%05d %d %05d\n",arr[x].add,arr[x].data,arr[x+1].add);
        }
    }
    printf("%05d %d -1",arr[l].add,arr[l].data);
    return 0;
}
