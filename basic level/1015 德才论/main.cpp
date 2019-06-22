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

int num=0,l=0,h=0;
struct student{
    char id[9];
    int de;
    int cai;
    int level;
};

bool cmp(student a,student b){
    if(a.level!=b.level)
        return a.level>b.level;
	else{
        if(a.de+a.cai!=b.de+b.cai)
            return a.de+a.cai>b.de+b.cai;
        else if(a.de!=b.de)
            return a.de>b.de;
        else 
            return strcmp(a.id,b.id)<0;
    }
	//str1小于str2返回负数 
}
int getLevel(student a){
    if(a.de<l||a.cai<l){
        num++;
        return 0;
    }
    else if(a.de>=h&&a.cai>=h){
        return 4;
    }
    else if(a.de>=h){
        return 3;
    }
    else if(a.de>=a.cai){
        return 2;
    }
    else {
        return 1;
    }

}


int main(){
    int n=0;
    scanf("%d %d %d",&n,&l,&h);
    student * arrays =new student[n];
    for(int i=0;i<n;i++){  
        scanf("%s %d %d",arrays[i].id, &arrays[i].de,&arrays[i].cai);
        arrays[i].level=getLevel(arrays[i]);
    }
    sort(arrays,arrays+n,cmp);
    printf("%d\n",n-num);
    for(int i=0;i<n-num;i++){
        printf("%s %d %d\n",arrays[i].id, arrays[i].de,arrays[i].cai);
    }
    return 0;
}
