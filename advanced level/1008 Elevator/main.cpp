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
    int ans=0,fomerF=0,curF;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&curF);
        int bias=curF-fomerF;
        if(bias>0){
            ans+=6*bias;
        }
        else{
            ans+=-4*bias;
        }
        ans+=5;
        fomerF=curF;
    }
    printf("%d",ans);
    return 0;
}
