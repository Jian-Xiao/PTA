//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n,maxGrade=-1,minGrade=101,curGrade=0;
    char maxName[11],maxNum[11],minName[11],minNum[11];
    char curName[11],curNum[11];
    scanf("%d",&n);
    for(int i =0; i<n;i++){
        scanf("%s",curName);
        scanf("%s",curNum);
        scanf("%d",&curGrade);
        if(curGrade>=maxGrade){
            strcpy(maxName,curName);
            maxGrade=curGrade;
             strcpy(maxNum,curNum);
        }
        if(curGrade<=minGrade){
             strcpy(minName,curName);
            minGrade=curGrade;
             strcpy(minNum,curNum);
        }
    }
    printf("%s %s\n%s %s",maxName,maxNum,minName,minNum);
    return 0;
}
