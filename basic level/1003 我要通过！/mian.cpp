//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include<string>
using namespace std;
string judge(string a){
    int num=0,num1=0,num2=0,num3=0;
    bool flag1=true,flag2=true;
    for(char b: a){
        if(b!='P'&&b!='A'&&b!='T'){
            return "NO";
        }
        else if (b=='A'){
            num++;
        }
        else if(b=='P'&&flag1){
            num1=num;
            num=0;
            flag1=false;
        }
        else if(b=='T'&&flag2){
            num2=num;
            num=0;
            flag2=false;
        }
        else{
            return "NO";
        }
    }
    num3=num;
    return num3==num2*num1&&num2!=0?"YES":"NO";
}
int main(){
    int m;
    cin>>m;
    string *a = new string[m];
    getline(cin,a[0]);
    for(int i=0;i<m;i++){
       getline(cin,a[i]);
       a[i]=judge(a[i]);
    }
      for(int i=0;i<m;i++){
       cout<<a[i]<<endl;
    }
    return 0;
}

