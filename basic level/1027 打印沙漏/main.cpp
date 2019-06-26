//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a;
    char x;
    scanf("%d %c",&a,&x);
    int maxLevel = (int)sqrt((a+1)/2);   
    int restNum = a-2*maxLevel*maxLevel+1;
    int maxWidth = 2*maxLevel-1;
    for(int i=maxLevel;i>0;i--){
        int nums =2*i-1;
        char * c1= new char[maxLevel-i+1];
        c1[maxLevel-i]='\0';
        fill(c1,c1+maxLevel-i,' ');
        char * c2 = new char[nums+1];
        c2[nums]='\0';
        fill(c2,c2+nums,x);
        printf("%s%s\n",c1,c2);
    }
    for(int i=2;i<=maxLevel;i++){
        int nums =2*i-1;
        char * c1= new char[maxLevel-i+1];
        c1[maxLevel-i]='\0';
        fill(c1,c1+maxLevel-i,' ');
        char * c2 = new char[nums+1];
        c2[nums]='\0';
        fill(c2,c2+nums,x);
        printf("%s%s\n",c1,c2);
    }
    printf("%d",restNum);
    return 0;
}

