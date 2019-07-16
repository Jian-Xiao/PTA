//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//


#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
struct School{
    int rank=1;
    double grade=0;
    int num=0;
    string name;
    // bool operator < (const School &b) const{
    //     if(grade!=b.grade)
    //         return grade>b.grade;
    //     else{
    //         if(num!=b.num)
    //             return num<b.num;
    //         else 
    //             return name<b.name;
    //     }
    // } 
};
bool cmp(School a,School b){
    if((int)a.grade!=(int)b.grade)
        return (int)a.grade>(int)b.grade;
    else{
        if(a.num!=b.num)
            return a.num<b.num;
        else 
            return a.name<b.name;
    }

}
int main(){
    int n;
    map<string,struct School> mm;
    map<string,struct School>::iterator it;
    scanf("%d\n",&n);
    string name;
    string rank;
    int grade;
    for(int i=0;i<n;i++){
        cin>>rank;
        cin>>grade;
        cin>>name;      
        getchar();
        transform(name.begin(),name.end(),name.begin(),::tolower);
        if(rank[0]=='A'){
            mm[name].grade+=grade;
        }
        else if (rank[0]=='B'){
            mm[name].grade+=(double)grade/1.5;
        }
        else{
            mm[name].grade+=(double)grade*1.5;
        }
        mm[name].num++;
        mm[name].name = name;
    }
    int size=mm.size();
    School * ss=new School [size];
    int i=0;
    it =mm.begin();
    while(it!=mm.end()){
        ss[i++]=it->second;
        it++;
    }
    sort(ss,ss+size,cmp);
    printf("%d\n",size);
    for(int i=0;i<size;i++){
        if(i){
            if((int)ss[i].grade==(int)ss[i-1].grade)
                ss[i].rank=ss[i-1].rank;
            else
                ss[i].rank=i+1;
            
        }
        printf("%d %s %d %d\n",ss[i].rank,ss[i].name.c_str(),(int)ss[i].grade,ss[i].num);
    }
    return 0;
}
