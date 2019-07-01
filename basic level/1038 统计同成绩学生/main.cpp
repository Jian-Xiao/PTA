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
    int n;
    map <int,int>mapGrade;
    scanf("%d",&n);
    int grade;
    for(int i=0;i<n;i++){
        scanf("%d",&grade);
        ++mapGrade[grade];
    }
    scanf("%d",&n);
    scanf("%d",&grade);
    printf("%d",mapGrade[grade]);
    for(int i=1;i<n;i++){
        scanf("%d",&grade);
        printf(" %d",mapGrade[grade]);
    }
    return 0;
}
