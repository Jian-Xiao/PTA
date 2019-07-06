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
    int n,d;
    double e;
    int num1=0,num2=0;
    scanf("%d %lf %d",&n,&e,&d);
    for(int i=0;i<n;i++){
        int t=0;
        int lt=0;
        double ce=0;
        scanf("%d",&t);
        for(int j=0;j<t;j++){
            scanf("%lf",&ce);
            if(ce<e){
                lt++;
            }
        }
        if(lt>t/2){
            if(t>d){
                num2++;
            }
            else{
                num1++;
            }
            
        }
    }
    printf("%.1lf%% %.1lf%%",(double)num1*100/n,(double)num2*100/n);
    return 0;
}
