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
using namespace std;
int main(){
    int n,m;
    scanf("%d %d\n",&n,&m);
    for(int i=0;i<n;i++){
        int g1=0;
        double g2=0;
        int g2max=0,g2min=m;
        scanf("%d",&g1);
        int curG2,num=0;
        for(int j=1;j<n;j++){
            scanf("%d",&curG2);
            if(curG2>=0&&curG2<=m){
                g2+=curG2;
                g2min=min(g2min,curG2);
                g2max=max(g2max,curG2);
                num++;
            }
        }
        g2=(g2-(g2min+g2max))/(num-2);
        printf("%d\n",(int)round((g1+g2)/2));
    }
    return 0;
}
