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
    int n;
    scanf("%d",&n);
    map<string,string> mm;
    string a,b,c,e="24:00:00",l="00:00:00";
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(b<e){
            e=b;
        }
        if(c>l){
            l=c;
        }
        mm[b]=a;
        mm[c]=a;
    }
    printf("%s %s",mm[e].c_str(),mm[l].c_str());
    return 0;
}
