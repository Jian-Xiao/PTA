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
    long long a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>0&&b>0&&a+b<0)
            printf("Case #%d: true\n",i+1);
        else if(a<0&&b<0&&a+b>0)
            printf("Case #%d: false\n",i+1);
        else if(a+b>c)
            printf("Case #%d: true\n",i+1);
        else
            printf("Case #%d: false\n",i+1);
    }
    return 0;
}
