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
    string psw;
    int count;
    string input;
    string end="#";
    cin>>psw>>count;
    getchar();
    getline(cin,input);
    while(input!=end){
        
        if(input==psw){
            printf("Welcome in\n");
            break;
        }
        else{
             printf("Wrong password: %s\n",input.c_str());
        }
        getline(cin,input);
        count--;
        if(count==0){
            printf("Account locked\n");
            break;
        }
    }

    return 0;
}
