//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string.h>
using namespace std;
bool isWord(char a){
    return a>='a'&&a<='z'||a>='A'&&a<='Z';
}
bool isDigit(char a){
    return a>='0'&&a<='9';
}
int isLegal(char *psw){
    int n=strlen(psw);
    int flagw=1,flagd=1;
    for(int i=0;i<n;i++){
        char a= psw[i];
        if(isWord(a)){
            flagw=0;
        }
        else if(isDigit(a)){
            flagd=0;
        }
        else if(a!='.'){
            return -1;
        }
    }
    if(flagd){
        return 2;
    }
    
    else if(flagw){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    char psw[81];
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        cin.getline(psw,81);
        if(strlen(psw)<6){
            printf("Your password is tai duan le.\n");
        }
        else {
            switch(isLegal(psw)){
                case 0:
                    printf("Your password is wan mei.\n");
                    break;
                case -1:
                    printf("Your password is tai luan le.\n");
                    break;
                case 1:
                    printf("Your password needs zi mu.\n");
                    break;
                case 2:
                    printf("Your password needs shu zi.\n");
                    break;
            }
        }
    }
    return 0;
}
