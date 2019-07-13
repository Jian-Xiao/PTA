//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <set>
using namespace std;
int main(){
    int m,n;
    set<int> ss;
    scanf("%d %d",&n,&m);
    int stuNum=0,itemNum=0;
    int curNum,curid;
    char name[5];
    for(int i=0;i<m;i++){    
        scanf("%d",&curid);
        ss.insert(curid);
    }
    for(int i=0;i<n;i++){
        scanf("%s %d",name,&curNum);
        int flag=1;
        for(int j=0;j<curNum;j++){
            scanf("%d",&curid);
            if(ss.find(curid)!=ss.end()){
                if(flag){
                    flag--;
                    printf("%s:",name);
                    stuNum++;
                }
                printf(" %04d",curid);
                itemNum++;
            }
            
        }
        if(!flag)
            printf("\n");
    }
    printf("%d %d",stuNum,itemNum);
    return 0;
}
