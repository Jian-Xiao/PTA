//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>

using namespace std;
int main(){
    int n;
    int school[100001]={};
    int maxID=0,maxGrade=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int id,grade;
        scanf("%d %d",&id,&grade);
        school[id]+=grade;
        if(school[id]>maxGrade){
            maxID=id;
            maxGrade=school[id];
        }
    }
    printf("%d %d",maxID,maxGrade);
    return 0;
}
