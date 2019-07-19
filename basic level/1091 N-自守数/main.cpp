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
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int d,flag=1;
        scanf("%d",&d);
        for(int j=1;j<10;j++){
            int sum =j*d*d;
            if(d<10)
                flag=10; 
            else if(d<100)
                flag=100;  
            else if(d<1000)
                flag=1000; 
            else
                flag=10000;
            if((sum-d)%flag==0){
                printf("%d %d\n",j,sum);
                break;
            }
            else if(j==9){
                printf("No\n");
            }
        }
    }
    return 0;
}
