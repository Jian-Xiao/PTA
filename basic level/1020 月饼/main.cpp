//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <algorithm>
using namespace std;

struct Cookie{
    double weight;
    double totalPrice;
};

int cmp(Cookie a,Cookie b){
    double t1=a.totalPrice/a.weight;
    double t2=b.totalPrice/b.weight;
    return t1>t2;
}

int main(){
    double ans=0;
    int types=0,need=0;
    scanf("%d %d",&types,&need);
    Cookie* cookies=new Cookie[types];
    for(int i=0;i<types;i++){
        scanf("%lf",&cookies[i].weight);
    }
     for(int i=0;i<types;i++){
        scanf("%lf",&cookies[i].totalPrice);
    }
    sort(cookies,cookies+types,cmp);
    for(int i=0;i<types;i++){
        if(need>cookies[i].weight){
            ans+=cookies[i].totalPrice;
            need-=cookies[i].weight;
        }
        else if(need==cookies[i].weight){
            ans+=cookies[i].totalPrice;
            need-=cookies[i].weight;
            break;
        }
        else{
            ans+=((double)need)*(cookies[i].totalPrice/cookies[i].weight);
            break;
        }
    }
    printf("%.2f",ans);
    return 0;
}
