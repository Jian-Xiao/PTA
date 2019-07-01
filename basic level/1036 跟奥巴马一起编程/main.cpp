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
    int width;
    char a;
    char b[19]="                  ";
    scanf("%d %c",&width,&a);
    int n =(int)round((double)width/2);
    for(int i=0;i<n;i++){
        if(i!=0&&i!=n-1){
            printf("%c",a);
            printf("%s",b+(20-width));
            printf("%c\n",a);
        }
        else{
            for(int j=0;j<width;j++){
                printf("%c",a);
            }
            printf("\n");
        }
    }
    return 0;
}
