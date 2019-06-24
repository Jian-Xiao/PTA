//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <algorithm>
using namespace std;
struct Node{
    int exp;
    double coe;
};

int cmp(Node n1,Node n2){
    return n1.exp>n2.exp;
}

int main(){
    int d1,d2;
    Node *nodes1,*nodes2;
    scanf("%d",&d1);
    nodes1 =new Node[d1];
    for(int i=0;i<d1;i++){
        scanf("%d %lf",&nodes1[i].exp,&nodes1[i].coe);
    }
    sort(nodes1,nodes1+d1,cmp);
    scanf("%d",&d2);
    nodes2 =new Node[d2];
    for(int i=0;i<d2;i++){
        scanf("%d %lf",&nodes2[i].exp,&nodes2[i].coe);
    }
    sort(nodes2,nodes2+d2,cmp);
    int i=0,j=0,num=0;
    Node ans[20];
    while(i<d1&&j<d2){
        if(nodes1[i].exp==nodes2[j].exp){
            if(nodes1[i].coe+nodes2[j].coe==0){
                i++;
                j++;
                continue;
            }
            ans[num].exp=nodes1[i].exp;
            ans[num].coe=nodes1[i].coe+nodes2[j].coe;           
            num++;
            i++;
            j++;
        }
        else if(nodes1[i].exp>nodes2[j].exp){
            ans[num].exp=nodes1[i].exp;
            ans[num].coe=nodes1[i].coe;
            num++;
            i++;
        }
        else{
            ans[num].exp=nodes2[j].exp;
            ans[num].coe=nodes2[j].coe;
            num++;
            j++;
        }
    }
    if(i<d1){
        while(i<d1){
            ans[num].exp=nodes1[i].exp;
            ans[num].coe=nodes1[i].coe;
            num++;
            i++;
        }
    }
    else if(j<d2){
        while(j<d2){
            ans[num].exp=nodes2[j].exp;
            ans[num].coe=nodes2[j].coe;
            num++;
            j++;
        }
    }
    printf("%d",num);
    for(int k=0;k<num;k++){
        printf(" %d %.1f",ans[k].exp,ans[k].coe);
    }
    return 0;
}
