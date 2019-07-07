//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int cal(int a);
int main(){
    int n;
    scanf("%d",&n);
    map<int,int> mm;
    vector<int> fsum;
    int d,index=0;
    for(int i=0;i<n;i++){
        scanf("%d",&d);
        int sum=cal(d);
        if(mm[sum]==0){
            fsum.push_back(sum);
            mm[sum]++;
        }
    }
    sort(fsum.begin(),fsum.end());
    printf("%d\n",fsum.size());
    int first=1;
    for(int i:fsum){
        if(first){
            printf("%d",i);
            first=0;
        }
        else
            printf(" %d",i);
    }
    return 0;
}
int cal(int a){
    int sum=0;
    while (a){
        sum+=a%10;
        a/=10;
    }
    return sum;
}
