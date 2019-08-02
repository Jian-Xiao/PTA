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
int main(){
    int * dis,total=0,distance;
    int n,m;
    scanf("%d",&n);
    dis= new int [n+1]();
    for(int i=1;i<=n;i++){
        scanf("%d",&distance);
        total+=distance;
        dis[i]=total;
    }
    
    scanf("%d",&m);
    int a,b;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",min(total-abs(dis[a-1]-dis[b-1]),abs(dis[a-1]-dis[b-1])));
    }
    return 0;
}
