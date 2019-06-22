//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>

using namespace std;


bool judgeLittleChar(char a){
    if(97<=a&&a<=122)
        return true;
    return false;
}
bool judgeBigChar(char a){
    if(65<=a&&a<=90)
        return true;
    return false;
}
bool judgeDigit(char a){
    if(48<=a&&a<=57)
        return true;
    return false;
}
bool judgeChar(char a){
    return judgeBigChar(a)||judgeLittleChar(a);
}
int main(){
    char DAY[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    char s1[61],s2[61],s3[61],s4[61];
    scanf("%s\n%s\n%s\n%s",s1,s2,s3,s4);
    int i=0;
    bool flag1=true;
    while(s1[i]!='\0'&&s2[i]!='\0'){
        if(flag1&&judgeBigChar(s1[i])&&judgeBigChar(s2[i])&&s1[i]==s2[i]){
            printf("%s ",DAY[s1[i]-65]);
            flag1=false;
        }
        else if(!flag1&&judgeBigChar(s1[i])&&judgeBigChar(s2[i])&&s1[i]==s2[i]){
            printf("%d:",s1[i]-55);
            break;
        }
        else if(!flag1&&judgeDigit(s1[i])&&judgeDigit(s2[i])&&s1[i]==s2[i]){
            printf("%d:",s1[i]-48);
            break;
        }
        i++;
    }
    i=0;
    while(s3[i]!='\0'&&s4[i]!='\0'){
        if((judgeChar(s3[i])&&judgeChar(s4[i])&&s3[i]==s4[i])){
            if(i<10)
                printf("0%d",i);
            else
                printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}

