//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int id1,id2;
    double maxl=0,minl=200;
    int id,x,y;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&id,&x,&y);
        double l =sqrt(x*x+y*y);
        if(l<minl){
            id2=id;
            minl=l;
        }
        if(l>maxl){
            id1=id;
            maxl=l;
        }
    }
    printf("%04d %04d",id2,id1);
    return 0;
}
