//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    map <int,int>mm;
    map <int,int>mm2;
    map <int,int>::iterator it;
    int n;
    vector<int> single;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        mm[a]=b;
        mm[b]=a;
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int d;
        scanf("%d",&d);
        mm2[d]=1;
    }
    for( it=mm2.begin();it!=mm2.end();it++){
        int curID=it->first;
         if(mm.find(curID)==mm.end()||mm2.find(mm[curID])==mm2.end()){
            single.push_back(curID);
        }
    }
    printf("%d\n",single.size());
    int first=1;
    for(int i:single){
        if(first){
            printf("%05d",i);
            first--;
        }
        else
            printf(" %05d",i);
    }
    return 0;
}