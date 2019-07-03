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
    int k=0;
    int m1,m2,n1,n2;
    int a=0,b=0;
    scanf("%d\n",&k);
    for(int i=0;i<k;i++){
        scanf("%d %d %d %d",&m1,&m2,&n1,&n2);
        int sum =n1+m1;
        if(m2==sum&&n2!=sum){
            b++;
        }
        else if(m2!=sum&&n2==sum){
            a++;
        }
    }
    printf("%d %d\n",a,b);
    return 0;
}
