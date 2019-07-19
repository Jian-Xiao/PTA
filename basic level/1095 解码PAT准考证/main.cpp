
//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <map>
using namespace std;
struct stu{
    char id[14];
    int grade=0;
};


vector<stu> va,vb,vt;
map<int ,int> mc;
map<int ,int> mn;
map<int ,map<int,int>> md;
map<int,int> ::iterator it;
bool cmp(stu a,stu b){
    if(a.grade==b.grade){
        return strcmp(a.id,b.id)<0;
    }
    else{
        return a.grade>b.grade;
    }   
}
bool cmp2(const pair<int, int>& a, const pair<int, int>& b) {
    if(a.second!=b.second)
        return a.second > b.second;
    else
    
        return a.first<b.first;
      
}
void printStu(char *a){
    int i=0;
    if(a[1]!='\0'){
        printf("NA\n");
        return;
    }
    switch (a[0]){
    case 'A':
        for(;i<va.size();i++){
            printf("%s %d\n",va[i].id,va[i].grade);
        }
        break;
    case 'B':
        for(;i<vb.size();i++){
            printf("%s %d\n",vb[i].id,vb[i].grade);
        }
        break;
    case 'T':
        for(;i<vt.size();i++){
            printf("%s %d\n",vt[i].id,vt[i].grade);
        }
        break;
    default:
        break;
    }
    if(i==0)
        printf("NA\n");
}

void printCls(int num){
    if(mn.find(num)!=mn.end())
        printf("%d %d\n",mn[num],mc[num]);
    else
        printf("NA\n");
}

void printd(int num){
    if(md.find(num)!=md.end()){
        vector<pair<int, int>> vec(md[num].begin(), md[num].end());
        //对线性的vector进行排序
        sort(vec.begin(), vec.end(), cmp2);
        for (int i = 0; i < vec.size(); ++i)
            printf("%d %d\n",vec[i].first,vec[i].second);
        }
    else
        printf("NA\n");
}

int main(){
    int n,m; 
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        stu a;
        scanf("%s %d",a.id,&a.grade);
        switch (a.id[0])
        {
        case 'T':
            vt.push_back(a);
            break;
        case 'A':
            va.push_back(a);
            break;
        case 'B':
            vb.push_back(a);
            break;
        default:
            break;
        }
        char cls[4],date[7];
        strncpy(cls,a.id+1,3);
        int clsid,clsdate;
        strncpy(date,a.id+4,6);
        sscanf(cls,"%d",&clsid);
        sscanf(date,"%d",&clsdate);
        mc[clsid]+=a.grade;
        mn[clsid]++;
        md[clsdate][clsid]++;
    }
    sort(va.begin(),va.end(),cmp);
    sort(vb.begin(),vb.end(),cmp);
    sort(vt.begin(),vt.end(),cmp);
    
    
    for(int j=0;j<m;j++){
        char level[20];
        int index,num;
        scanf("%d",&index);
        switch (index)
        {
        case 1:
            scanf("%s",level);
            printf("Case %d: %d %s\n",j+1,index,level);
            printStu(level);
            break;
        case 2:
            scanf("%d",&num);
            printf("Case %d: %d %03d\n",j+1,index,num);
            printCls(num);
            break;
        case 3:
            scanf("%d",&num);
            printf("Case %d: %d %06d\n",j+1,index,num);
            printd(num);
            break;
        default:
            break;
        }
    }
    return 0;
}
