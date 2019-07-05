//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double R1,P1,R2,P2;
    scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
    double R3=R1*R2;
    double P3=P1+P2;
    double A=R3*cos(P3);
    double B=R3*sin(P3);
    if(fabs(A)<0.005)   //A>-0.005&&A<0，就是说A和B在-0.05到0之间应该舍弃为+0，而非-0
        A=0;
    if(fabs(B)<0.005)
        B=0;
    if(B>=0)
        printf("%.2lf+%.2lfi",A,B);
    else if(B<0)
        printf("%.2lf%.2lfi",A,B);
    return 0;
}
