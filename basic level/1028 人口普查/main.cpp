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
struct person{
    char name[6];
    int year;
    int month;
    int day;
};
int main(){
    int nums;
    int curY =2014,curM=9,curD=6;
    person * maxP;
    person * minP;
    vector<person>ps(100000);
    scanf("%d",&nums);
    int flag =1;
    int num=0;
    for(int i=0;i<nums;i++){
        person a;
        scanf("%s %d/%d/%d",a.name,&a.year,&a.month,&a.day);
        if(a.year>curY||a.year==curY&&(a.month>curM||a.month==curM&&a.day>curD)){
            continue;
        }
        else if(a.year<curY-200||a.year==curY-200&&(a.month<curM||a.month==curM&&a.day<curD)){
            continue;
        }
        else{
            ps[num]=a;
            if(flag){
                flag=0;
                maxP=&ps[0];
                minP=&ps[0];
                num++; 
                continue;
            }
            if(a.year<maxP->year||a.year==maxP->year&&(a.month<maxP->month||a.month==maxP->month&&a.day<maxP->day)){
                maxP=&ps[num];
            }
            if(a.year>minP->year||a.year==minP->year&&(a.month>minP->month||a.month==minP->month&&a.day>minP->day)){
                minP=&ps[num];
            }
            num++;       
        }
    }
    if(num!=0)
        printf("%d %s %s",num,maxP->name,minP->name);
    else
        printf("0");
    return 0;
}
