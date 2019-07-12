//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    int m,n,s;
    string curname;
    map<string,int> mm;
    scanf("%d %d %d",&m,&n,&s);
    if(m<s){
        printf("Keep going...\n");
    }
    else{
        for(int i=1;i<=m;i++){
            cin>>curname;
            if(i>=s&&(i-s)%n==0){
                if(mm[curname]){
                    i--;
                    m--;
                }
                else{
                    mm[curname]++;
                    printf("%s\n",curname.c_str());
                }
            }
        }
    }
    return 0;
}
