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
    char ans[101];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        char a,b;
        for(int j=0;j<4;j++){
            scanf("%c-%c",&a,&b);
            getchar();
            if(b=='T'){
                ans[i]=a-'A'+'1';
            }
        }
    }
    ans[n]='\0';
    printf("%s",ans);
    return 0;
}
