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
    int v,x,y;
    scanf("%d %d %d",&v,&x,&y);
    for(int i=99;i>=9;i--){
        if(i==9){
            printf("No Solution\n");
            break;
        }
        else{
            int b=i/10+(i%10)*10;
            double c=(double)b/y;
            if(fabs(i-b)!=x*c){
                continue;
            }
            else{
                printf("%d ",i);
                if(v>i)
                    printf("Gai ");
                else if(v==i)
                    printf("Ping ");
                else 
                    printf("Cong ");
                if(v>b)
                    printf("Gai ");
                else if(v==b)
                    printf("Ping ");
                else 
                    printf("Cong ");
                if(v>c)
                    printf("Gai\n");
                else if(v==c)
                    printf("Ping\n");
                else 
                    printf("Cong\n");
                break;
            }
        }
    }
    return 0;
}
