//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
    int n;
    string a="";
    double sum=0;
    int num=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        cin>>a;
        double b=atof(a.c_str());
        int position=a.find(".");
        if(b<-1000||b>1000||b==0&&(strcmp(a.c_str(),"0"))||(position!=-1&&a.length()-position-1>2))
            printf("ERROR: %s is not a legal number\n",a.c_str());
        else{
            sum+=b;
            num++;
        }
    }
    if(num==1)
        printf("The average of %d number is %.2lf\n",num,sum/num);   
    else if(num>1)
        printf("The average of %d numbers is %.2lf\n",num,sum/num);   
    else
        printf("The average of %d numbers is Undefined\n",num);   
    return 0;
}
