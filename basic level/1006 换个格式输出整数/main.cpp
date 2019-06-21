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
    int num=0;
    scanf("%d",&num);
    char array1[10][10]={"","1","12","123","1234","12345","123456","1234567","12345678","123456789"};
    char array2[10][10]={"","S","SS","SSS","SSSS","SSSSS","SSSSSS","SSSSSSS","SSSSSSSS","SSSSSSSSS"};
    char array3[10][10]={"","B","BB","BBB","BBBB","BBBBB","BBBBBB","BBBBBBB","BBBBBBBB","BBBBBBBBB"};
    char *p[10];
    for(int i=0;i<10;i++){
        p[i]="32323";
        printf("%s",p[i]);
    }
    int num1=num%10;
    num/=10;
    int num2=num%10;
    int num3=num/10;
    printf("%s%s%s",array3[num3],array2[num2],array1[num1]);
    return 0;
}
