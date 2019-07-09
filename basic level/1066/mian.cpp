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
    int m,n,a,b,c;
    int pixel;
    scanf("%d %d %d %d %d",&m,&n,&a,&b,&c);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&pixel);
            if(pixel<a||pixel>b){
                printf("%03d",pixel);
            }
            else{
                printf("%03d",c);
            }
            if(j!=n-1){
                printf(" ");
            }
            else{
                 printf("\n");
            }
        }
    }
    return 0;
}
