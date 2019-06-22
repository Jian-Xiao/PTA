//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
bool judge(int a);
int main()
{
    int start = 0, end = 0;
    int num = -1;
    int i = 2;
    scanf("%d %d", &start, &end);
    while (true)
    {
        if (judge(i))
        {
            num++;
            if (num < start - 1)
            {
                i++;
                continue;
            }
            if ((num - start + 1) % 10 == 0)
            {
                printf("%d", i);
            }
            else if ((num - start + 1) % 10 == 9)
            {
                printf(" %d\n", i);
            }
            else
            {
                printf(" %d", i);
            }
            if (num == end - 1)
            {
                break;
            }
        }
        i++;
    }
    return 0;
}

bool judge(int a)
{
    if (a <= 1)
    {
        return false;
    }
    else if (a == 2 || a == 3 || a == 5 || a == 7)
    {
        return true;
    }
    else if (a % 2 == 0 || a % 6 != 1 && a % 6 != 5)
    {
        return false;
    }
    else
    {
        for (int i = 3; i <= sqrt(a); i += 2)
        {
            if (a % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}