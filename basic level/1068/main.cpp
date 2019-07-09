#include <iostream>
using namespace std;
 
int x[11] = {0, 1, 1, 1, 0, -1, -1, -1};
int y[11] = {1, 1, 0, -1, -1, -1, 0, 1};
int col[1111][1111];
int num[1 << 24] = {0};
 
int main() {
    int N, M, TOL;
    scanf("%d%d%d", &N, &M, &TOL);
 
    for(int i = 1; i <= M; i ++){
        for(int j = 1; j <= N; j ++) {
            scanf("%d", &col[i][j]);
            num[col[i][j]] ++;
        }
    }
 
    int cnt, temp1, temp2, ans;
    bool flag = true;
    cnt = 0;
    for(int i = 1; i <= M; i ++) {
        for(int j = 1; j <= N; j ++) {
            if(num[col[i][j]] != 1)
                continue ;
            else {
                flag = false;
                for(int k = 0; k <= 7; k ++) {
                    if(abs(col[i][j] - col[i + x[k]][j + y[k]]) <= TOL) {
                        flag = true; break;
                    }
                }
                if(!flag) {
                    cnt++;
                    temp1 = i; temp2 = j;
                }
            }
        }
    }
 
    //cout<< cnt <<endl;
    if(cnt > 1) printf("Not Unique\n");
    else if(cnt == 0) printf("Not Exist\n");
    else {
        printf("(%d, %d): %d\n", temp2, temp1, col[temp1][temp2]);
    }
 
    return 0;
}