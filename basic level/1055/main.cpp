//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
struct Student{
    string name;
    int height;
}students[10000];
int cmp(Student a,Student b){
    if(a.height!=b.height)
        return a.height>b.height;
    else
        return strcmp(a.name.c_str(),b.name.c_str());
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int width=n/k;
    int maxWidth=n-width*k+width;
    int mid=width/2;
    int maxMid=maxWidth/2;
    vector<vector<string>> ans;
    ans.resize(k);
    for(int i=0;i<n;i++){
        cin >>students[i].name;
        cin >>students[i].height;
    }
    sort(students,students+n,cmp);
    int index=0;  
    for(int i=0;i<k;i++){
        int k=0;
        int left=1;
        if(i==0){
            ans[i].resize(maxWidth);
            k=maxMid;
            for(int j=0;j<maxWidth;j++){
                ans[i][k]=students[index++].name;
                if(left){
                    k=maxMid-j/2-1;
                    left=0;
                }
                else{
                   k=maxMid+j/2+1;
                   left=1;
                }      
            }
        }
        else{
            ans[i].resize(width);
            k=mid;
            for(int j=0;j<width;j++){
                ans[i][k]=students[index++].name;
                if(left){
                    k=mid-j/2-1;
                    left=0;
                }
                else{
                   k=mid+j/2+1;
                   left=1;
                }      
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0];
        for(int j=1;j<ans[i].size();j++){
            cout<<" "<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}
