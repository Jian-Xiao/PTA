//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
struct STU{
    string name;
    int G;
    int G1 =-1;
    int G2 =-1;
    int G3 =-1;
}stus[30000];
int index=0;
bool cmp( STU a,STU b){
    if(a.G!=b.G){
        return a.G>b.G;
    }
    else
    {
        return a.name<b.name;
    }
    
}
int main(){
    int p,m,n;
    map<string,int> mm1;
    map<string,int> mm2;
    map<string,int> mm3;
    string name;
    int grade;
    scanf("%d %d %d",&p,&m,&n);
    getchar();
    for(int i=0;i<p;i++){
        cin>>name>>grade;
        getchar();
        mm1[name]=grade;
        stus[index++].name=name;
    }
    for(int i=0;i<m;i++){
        cin>>name>>grade;
        getchar();
        mm2[name]=grade;
        if(mm1.find(name)==mm1.end()){
            stus[index++].name=name;
        }
    }
    for(int i=0;i<n;i++){
        cin>>name>>grade;
        getchar();
        mm3[name]=grade;
        if(mm1.find(name)==mm1.end()&&mm2.find(name)==mm2.end()){
            stus[index++].name=name;
        }
    }
    
    for(int i=0;i<index;i++){
        string name =stus[i].name;
        stus[i].G1=mm1.find(name)==mm1.end()?-1:mm1[name];
        stus[i].G2=mm2.find(name)==mm2.end()?-1:mm2[name];
        stus[i].G3=mm3.find(name)==mm3.end()?-1:mm3[name];
        stus[i].G = stus[i].G2>stus[i].G3?(int)round((double)stus[i].G2*0.4+stus[i].G3*0.6):stus[i].G3;
    }
    sort(stus,stus+index,cmp);
    for(int i=0;i<index;i++){
        if(stus[i].G1>=200&&stus[i].G>=60)
            printf("%s %d %d %d %d\n",stus[i].name.c_str(),stus[i].G1,stus[i].G2,stus[i].G3,stus[i].G);
    }
    return 0;
}
