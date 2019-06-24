//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <vector>
using namespace std;
int nums,nonLeafNums;
vector<int> tree[120];
int result[100];
int maxLevel=0;
void dfs(int node,int level){
    maxLevel=maxLevel<level?level:maxLevel;
    if(tree[node].size()==0)
        result[level]++;
    else{
        for(int i=0;i<tree[node].size();i++){
            dfs(tree[node][i],level+1);
        }
    }
}

int main(){
    scanf("%d %d",&nums,&nonLeafNums);
    for(int i=0;i<nonLeafNums;i++){
        int id,kidnum;
        scanf("%d %d",&id,&kidnum);
        for(int j=0;j<kidnum;j++){
            int d;
            scanf("%d",&d);
            tree[id-1].push_back(d);
        }
    }
    dfs(0,0);
    printf("%d",result[0]);
    for(int i=1;i<=maxLevel;i++){
        printf(" %d",result[i]);
    }
    return 0;
}
