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
    int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[12]="10X98765432";
    int n,flag=1;
    char id[19];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int sum=0;
        int j=0;
        cin>>id;
        for(j=0;j<17;j++){
            if(id[j]>'9'||id[j]<'0'){
                printf("%s\n",id);
                flag=0;
                break;
            }
            sum+=((int)id[j]-'0')*weight[j];
        }
        if(j<17)
            continue;
        int rest =sum%11;
        if(M[rest]!=id[17]){
            flag=0;
            printf("%s\n",id);
        }
    }
    if(flag){
        printf("All passed");
    }
    return 0;
}
