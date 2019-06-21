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
    int a,b;
    int flag=1;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(b==0){
            continue;
        }
        if(flag){  //首次输出
            printf("%d %d",a*b,b-1);
            flag=0;
        }
        else{
            printf(" %d %d",a*b,b-1);
        }
    }
    if(flag){ //零多项式
        printf("0 0");
    }
    return 0;
}
