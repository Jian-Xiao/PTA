//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
struct P{
    int id;
    int score;
    int nl;
    int nr;
    char ra[10];
    int wt;
};
bool cmp(P a,P b){
    return a.wt>b.wt;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int * stuGrades =new int [n]();
    P * ps=new P[m];
    for(int i=0;i<m;i++){
        scanf("%d %d %d %[^\n]",&ps[i].score,&ps[i].nl,&ps[i].nr,ps[i].ra);
        ps[i].id=i+1;
    }
    for(int i=0;i<n;i++){
        int a;
        char sa[10];
        for(int j=0;j<m;j++){
            scanf("%*c%*c%d %[^)]%*c",&a,sa);
            if(strcmp(ps[j].ra,sa)){
                ps[j].wt++;
            }
            else{
                stuGrades[i]+=ps[j].score;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",stuGrades[i]);
    }
    sort(ps,ps+m,cmp);
    if(ps[0].wt){
        printf("%d %d",ps[0].wt,ps[0].id);
        int i=1;
        while(i<m&&ps[i].wt==ps[0].wt){
            printf(" %d",ps[i].id);
            i++;
        }
    }
    else{
        printf("Too simple\n");
    }
    return 0;
}
