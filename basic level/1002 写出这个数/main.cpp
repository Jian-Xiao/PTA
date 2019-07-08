//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string>
using namespace std;
int main(){
    char * a =new char[102];
    string pinyin[10] ={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int pointer=0, sum=0;
     scanf("%s",a);
    while(a[pointer]!='\0'){
        sum+=a[pointer++]-48;
    }
    pointer=0;
    while(sum){
        a[pointer++] = sum%10;
        sum/=10;
    }
    while(--pointer){
        cout<<pinyin[(int)a[pointer]]<<" ";
    }
        cout<<pinyin[(int)a[0]];
    return 0;
}
