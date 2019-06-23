//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <algorithm>
using namespace std;
char maxofThree(int a,int b,int c);
int judge(char a,char b);
int main(){
    int n=0;
    int As=0,Ap=0,Af=0;
    int Bs=0,Bp=0,Bf=0;
    int A[26]={0};
    int B[26]={0};
    char a, b;
    scanf("%d",&n);  
    getchar();
    for(int i=0;i<n;i++){
        scanf("%c %c",&a,&b);
        getchar();
        int result=judge(a,b);
        if(result==1){
            As++;
            Bf++;
            A[a-'A']++;
        }
        else if(result==-1){
            Bs++;
            Af++;
            B[b-'A']++;
        }
        else {
            Ap++;
            Bp++;
        }
    }
    printf("%d %d %d\n%d %d %d\n",As,Ap,Af,Bs,Bp,Bf);
    printf("%c %c\n",maxofThree(A[1],A[2],A[9]),maxofThree(B[1],B[2],B[9]));
    return 0;
}

char maxofThree(int a,int b,int c){
    int maxNum =max(max(a,b),c);
    if(a==maxNum)
        return 'B';
    else if(b==maxNum)
        return 'C';
    else
        return 'J';
}

int judge(char a,char b){
    if(a==b)
        return 0;
    else if(a=='J'&&b=='B')
        return 1;
    else if(a=='B'&&b=='J')
        return -1;
    else
        return a<b?1:-1;
}
