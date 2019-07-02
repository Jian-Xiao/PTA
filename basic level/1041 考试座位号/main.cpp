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
struct {
    char id[17];
    int num;
}s[1001];
int main(){
    int n;
    scanf("%d",&n);
    int seq ,num;
    char id[17];
    for(int i=0;i<n;i++){
        scanf("%s %d %d",id,&seq,&num);
        s[seq].num=num;
        strcpy(s[seq].id,id);
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&seq);
        printf("%s %d\n",s[seq].id,s[seq].num);
    }
    return 0;
}
