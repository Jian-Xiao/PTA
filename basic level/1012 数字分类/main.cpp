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
    int num = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
    int flag = 1, flag2 = 0, flag3 = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int a = 0;
        scanf("%d", &a);
        int rest = a % 5;
        if (rest == 0 && a % 2 == 0)
        {
            a1 += a;
        }
        else if (rest == 1)
        {
            a2 += flag * a;
            flag *= -1;
            flag2 = 1;
        }
        else if (rest == 2)
        {
            a3++;
        }
        else if (rest == 3)
        {
            a4 += a;
            flag3++;
        }
        else if (rest == 4)
        {
            a5 = a > a5 ? a : a5;
        }
    }
    if (a1)
        printf("%d ", a1);
    else
        printf("N ");
    if (flag2)
        printf("%d ", a2);
    else
        printf("N ");
    if (a3)
        printf("%d ", a3);
    else
        printf("N ");
    if (a4)
        printf("%.1f ", (double)a4 / (double)flag3);
    else
        printf("N ");
    if (a5)
        printf("%d", a5);
    else
        printf("N");

    return 0;
}
