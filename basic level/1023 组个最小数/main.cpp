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
    int nums[10];
    int flag=0;
    for(int i=0;i<10;i++){
        scanf("%d",&nums[i]);
        if(i!=0&&flag==0&&nums[i]!=0){
            flag=i;
        }
    }
    char ans[51];
    fill(ans,ans+1,flag+'0');
    int bias =1;
    for(int i=0;i<10;i++){
        if(i==flag){
            fill(ans+bias,ans+bias+nums[i]-1,i+'0');
            bias+=nums[i]-1;
        }
        else if(i!=flag){
            fill(ans+bias,ans+bias+nums[i],i+'0');
            bias+=nums[i];
        }
    }
    ans[bias]='\0';
    printf("%s",ans);
    return 0;
}
