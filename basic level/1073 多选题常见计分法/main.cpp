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
struct problem{
    int id;
    int score;
    int tNum;
    int rNum;
    int ans[5]={};
    int wrongTime[5]={};
}*ps;

int main(){
    int n,m;
    char a;
    int maxWT=0;
    scanf("%d %d",&n,&m);
    ps =new problem[m];
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&ps[i].score,&ps[i].tNum,&ps[i].rNum);
        ps[i].id=i+1;
        for(int j=0;j<ps[i].rNum;j++){
            scanf(" %c",&a);
            ps[i].ans[a-'a']=1;
        }
    }
  
    for(int i=0;i<n;i++){
        double curScore=0;
        for(int j=0;j<m;j++){ 
            int num;
            scanf("%*[^(](%d",&num);   
            
            int flag1=0;
            for(int k=0;k<num;k++){
                
                char a;
                scanf(" %c",&a);      
                int u =a-'a';
                if(ps[j].ans[u]==0){
                    ps[j].wrongTime[u]++;
                    flag1=1;
                    maxWT=max(maxWT, ps[j].wrongTime[u]);
                }
                else{
                    ps[j].wrongTime[u]--;
                }       
            }
            for(int x=0;x<ps[j].tNum;x++){
                if(ps[j].ans[x]){
                      ps[j].wrongTime[x]++;
                      maxWT=max(maxWT, ps[j].wrongTime[x]);
                }
            }
            if(!flag1){
                    if(num==ps[j].rNum){
                        curScore+=ps[j].score;
                    }
                    else{
                        curScore+=(double)ps[j].score/2;
                    }
                }
        }
        printf("%.1lf\n",curScore);
    }
    if(maxWT==0){
        printf("Too simple");
    }
    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<ps[i].tNum;j++){
                if(ps[i].wrongTime[j]==maxWT){
                    printf("%d %d-%c\n",maxWT,i+1,j+'a');
                }
            }
        }
    }
    return 0;
}
