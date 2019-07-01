//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    int a1, b1, c1, a2, b2, c2;
    scanf("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
    int c, d, e;
    int flag = 0;
    int ischanged = 0;
    if (a1 > a2 || a1 == a2 && (b1 > b2 || b1 == b2 && c1 > c2))
    {
        int tmp = a1;
        a1 = a2;
        a2 = tmp;
        tmp = b1;
        b1 = b2;
        b2 = tmp;
        tmp = c1;
        c1 = c2;
        c2 = tmp;
        ischanged=1;
    }
    e = c2 - c1;
    if (e < 0)
    {
        e += 29;
        flag = 1;
    }
    d = flag ? b2 - 1 - b1 : b2 - b1;
    if (d < 0)
    {
        d += 17;
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    c = flag ? a2 - a1 - 1 : a2 - a1;
    printf("%d.%d.%d", ischanged?c*(-1):c, d, e);
    return 0;
}
