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
    char a[1001];
    int b[256]={};
    cin.getline(a,1001);
    int i=0;
    while(a[i]!='\0'){
        b[a[i]]++;
        i++;
    }
    char maxW;
    int maxT=0;
    for(int i='a';i<='z';i++){
        int sum=b[i]+b[i-'a'+'A'];
        if(maxT<sum){
            maxT=sum;
            maxW=(char)i;
        }
    }
    printf("%c %d",maxW,maxT);
    return 0;
}
