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
    char a[81];
    char b[81];
    scanf("%s\n%s",a,b);
    int i=0,j=0;
    int ans[256]={};
    while(a[i]!='\0'||b[j]!='\0'){
        if(a[i]==b[j]){
            i++;
            j++;
            continue;
        }
        else{
            char c=  a[i]>='a'?a[i]-'a'+'A':a[i];
            if(ans[c]==0){
                ans[c]=1;
                printf("%c",c);  
            }
            i++;
        }   
    }
   
    return 0;
}
