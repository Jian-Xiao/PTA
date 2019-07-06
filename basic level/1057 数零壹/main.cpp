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
void cal(int sum,int &n1,int &n2);
int main(){
    char a[100001];
    cin.getline(a,100001);
    int sum=0;
    int i=0;
    while(a[i]!='\0'){
        if(a[i]<='z'&&a[i]>='a'){
            sum+=a[i]-'a'+1;
        }
        else if(a[i]<='Z'&&a[i]>='A'){
            sum+=a[i]-'A'+1;
        }
        i++;
    }
    int n1=0,n2=0;
    cal(sum,n1,n2);
    printf("%d %d",n1,n2);
    return 0;
}

void cal(int sum,int &n1,int &n2){
    while(sum){
        if(sum%2==1){
            n2++;
        }
        else{
            n1++;
        }
        sum/=2;
    }
}