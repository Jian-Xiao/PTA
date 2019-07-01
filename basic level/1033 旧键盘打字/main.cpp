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
int main(){
    int allChar[256]={};
    char badChar[42];
    char input[100001];
    char output[100001];
    badChar[0]='\0';
    cin.getline(badChar,42);
    cin.getline(input,100001);
    // scanf("%s\n%s",badChar,input);
    int i=0;
    int flag=0;
    while(badChar[i]!='\0'){
        allChar[(int)badChar[i]]=1;
        if(badChar[i]=='+')
            flag=1;
        if(badChar[i]<='Z'&&badChar[i]>='A')
            allChar[(int)badChar[i]-'A'+'a']=1;
        i++;
    }
    int j=0;
    int k=0;
    while(input[j]!='\0'){
        if(allChar[(int)input[j]]){
            j++;
            continue;
        }
        else if(input[j]<='Z'&&input[j]>='A'&&flag){
            j++;
            continue;
        }
        else{
            output[k]=input[j];
            k++;
            j++;
        }
    }
    output[k]='\0';
    printf("%s",output);
    return 0;
}
