//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>

using namespace std;
int maxCommon(int a,int b){
    int temp;
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    while(b){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int minCommon(int a,int b){
    return a*b/maxCommon(a,b);
}
int main(){
    int a1,a2,b1,b2,d;
    scanf("%d/%d %d/%d %d",&a1,&a2,&b1,&b2,&d);
    if(a1*b2>a2*b1){
        int tmp =a1;
        a1=b1;
        b1=tmp;
        tmp=a2;
        a2=b2;
        b2=tmp;
    }
    int first=1;
    for(int i=1;;i++){
        if(maxCommon(d,i)==1&&i*a2>a1*d&&i*b2<b1*d){
            if(first){
                printf("%d/%d",i,d);
                first=0;
            }
            else{
                printf(" %d/%d",i,d);
            }
            
        }
        else if(i*b2>=b1*d){
            break;
        }
    }
    return 0;
}

