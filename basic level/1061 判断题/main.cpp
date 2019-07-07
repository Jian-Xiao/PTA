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
    int stunum=0,pronum=0;
    scanf("%d %d",&stunum,&pronum);
    int * proScore=new int [pronum];
    int * ans=new int [pronum];
    for(int i=0;i<pronum;i++){
        scanf("%d",&proScore[i]);
    }
    for( int i=0;i<pronum;i++){
        scanf("%d",&ans[i]);
    }
    for(int i=0;i<stunum;i++){
        int score=0;
        int curans;
        for(int j=0;j<pronum;j++){
            scanf("%d",&curans);
            if(curans==ans[j]){
                score+=proScore[j];
            }
        }
        printf("%d\n",score);
    }
    return 0;
}
