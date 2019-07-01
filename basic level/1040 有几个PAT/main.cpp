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
    char str[100001];
    scanf("%s",&str);
    int i=0;
    int p=0,pa=0,pat=0;
    while(str[i]!='\0'){
        switch (str[i++])         
        {
        case 'P':
            p++;
            break;
        case 'A':
            pa+=p;
            break;
        case 'T':
            pat=(pat+pa)%1000000007;
        default:
            break;
        }
    }
    printf("%d",pat);
    return 0;
}
