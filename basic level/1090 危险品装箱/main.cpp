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
    int n,m;
    scanf("%d %d",&n,&m);
    map<int ,map<int,int > >mm1;
    map<int,int > ::iterator it;
    for(int i=0;i<n;i++){
        int d1,d2;
        scanf("%d %d",&d1,&d2);
        mm1[d1][d2]=1;
        mm1[d2][d1]=1;
    }
    for(int i=0;i<m;i++){
        map<int,int>mm2;
        int d,id,flag=0;
        scanf("%d",&d);
        for(int j=0;j<d;j++){
            scanf("%d",&id);
            mm2[id]=1;
            if(!flag&&mm1.find(id)!=mm1.end()){
                it=mm1[id].begin();
                while(it!=mm1[id].end()){
                    if(mm2.find(it->first)!=mm2.end()){
                        flag++;
                        break;
                    }
                    it++;
                }
                if(flag){
                    printf("No\n");
                }   
            }     
        }
        if(!flag){
            printf("Yes\n");
        }
    }
    return 0;
}
