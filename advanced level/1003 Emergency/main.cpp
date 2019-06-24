#include <iostream>
#include <climits>
#include <algorithm>
#include <string.h>
using namespace std;

#define INF 0x3f3f3f3f
int n,m,c1,c2;
int ** roads;
int * record;
int * ans;

void Dijkstra(){
    int start=0;
    memset(ans,INF,4*n);   
    ans[c1]=0;
    //外层循环，1 每一层更新一次中转点，并用record标记，2 更新最短路径
    for(int i=0;i<n-1;i++){ 
        //选择最短路径，并将对应点作为中转点，用record记录
        int minDistance=INF;
        for(int j=0;j<n;j++){
            if(record[j]==0&&minDistance>=ans[j]){
                minDistance=ans[j];
                start=j;
            }
        }
        record[start]=1;
        //以该点为中转点，更新最短路径
        for(int j=0;j<n;j++){     
            ans[j]=min(ans[j],ans[start]+roads[start][j]);
        }
    }
}

int main(){
    scanf("%d %d %d %d",&n,&m,&c1,&c2);
    record = new int[n]();
    ans=new int [n];
    roads = new int* [n];
    //邻接矩阵初始化
    for(int i=0;i<n;i++){
        roads[i]= new int[n];
        memset(roads[i],INF,4*n);
    }
    //更新邻接矩阵
    for(int i=0;i<m;i++){
        int j,k,l;
        scanf("%d %d %d",&j,&k,&l);
        roads[j][k]=l;
        roads[k][j]=l;//有向图去掉这一句即可
    }
    
    Dijkstra();
    printf("%d",ans[c2]);
    return 0;
}

