//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>

using namespace std;
int getP(int x,int Dx);
int main(){
    int a=0,b=0,Da=0,Db=0;
    int pa=0,pb=0;
    scanf("%d %d %d %d",&a,&Da,&b,&Db);
    printf("%d",getP(a,Da)+getP(b,Db));
    return 0;
}

int getP(int x,int Dx){
    int Px=0;
    while(x){     
        if(x%10==Dx){
            Px=Px*10+Dx;
        }
        x/=10;
    }
    return Px;
}
