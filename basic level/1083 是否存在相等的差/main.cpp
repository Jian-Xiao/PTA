//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <map>
#include<algorithm>
using namespace std;
int main(){
    map<int,int >mm;
    int arr[10000];
    int n,index=0;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        int d;
        scanf("%d",&d);
        d=abs(d-i);
        mm[d]++;
        if(mm[d]==1){
            arr[index++]=d;
        }
    }
    sort(arr,arr+index);
    for(int i=index-1;i>=0;i--){
        if(mm[arr[i]]>1)
            printf("%d %d\n",arr[i],mm[arr[i]]);
    }
    return 0;
}
