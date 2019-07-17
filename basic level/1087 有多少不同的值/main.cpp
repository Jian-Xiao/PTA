//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    map<int ,int> mm;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int d=i/2+i/3+i/5;
        mm[d]++;
    }
    printf("%d",mm.size());
    return 0;
}
