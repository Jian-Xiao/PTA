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
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a=a*b;
    char c[100];
    sprintf(c,"%d",a);
    reverse(c,c+strlen(c));
    sscanf(c,"%d",&a);
    printf("%d",a);
    return 0;
}
