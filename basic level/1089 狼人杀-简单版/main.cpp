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
    int n;
    scanf("%d",&n);
    int * people = new int [n+1];
    int *word=new int [n+1];
    for(int i=1;i<=n;i++){
        cin>>word[i];
        people[i]=1;
        getchar();
    }
    for(int i=1;i<=n;i++){
        people[i]=-1;
        for(int j=i+1;j<=n;j++){
            people[j]=-1;
            int l0=0,l1=0;
            for(int k=1;k<=n;k++){
                if(people[abs(word[k])]*word[k]<0){
                    if(k==i||k==j)
                        l1++;
                    else
                        l0++;
                }
            }
            if(l0==1&&l1==1){
                printf("%d %d",i,j);
                return 0;
            }
            people[j]=1;
        }
        people[i]=1;
    }
    printf("No Solution");
    return 0;
}
