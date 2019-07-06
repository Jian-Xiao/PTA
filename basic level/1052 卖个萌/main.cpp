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
    string a[3][10];
    char d;
    char e[5];
    int k=0;
    int length[3];
    for(int i=0;i<3;i++){
        while(true){
            d=getchar();
            if(d=='\n'){
                length[i]=k;
                k=0;
                break;
            }
            else if(d=='['){
                scanf("%[^]]",e);
                a[i][k++]=e;
            }
        }
    }
    int n,c1,c2,c3,c4,c5;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d %d",&c1,&c2,&c3,&c4,&c5);
        if(c1>length[0]||c5>length[0]||c2>length[1]||c4>length[1]||c3>length[2]||c1<=0||c2<=0||c3<=0||c4<=0||c5<=0){
            printf("Are you kidding me? @\\/@\n");
        }
        else{
            cout<<a[0][c1-1]<<"("<<a[1][c2-1]<<a[2][c3-1]<<a[1][c4-1]<<")"<<a[0][c5-1]<<endl;
        }
    }
    return 0;
}
