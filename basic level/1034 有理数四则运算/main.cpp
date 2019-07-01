//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
struct Node
{
    int k = 0;
    int a = 0;
    int b = 0;
    int ca = 0;
    int cb = 0;
} n1, n2, n3, n4, n5, n6;
int GreatestCommonDivisor(long long  a, long long b)
{
    long long t;
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return (int)a;
}

int LeastCommonMultiple(int a, int b)
{
    int t = a * b / GreatestCommonDivisor(a, b);
    return t;
}
void sum()
{
    long long c = (long long)n1.a * n2.b + (long long)n2.a * n1.b;
    long long d = (long long)n1.b * n2.b;
    int n = GreatestCommonDivisor(fabs(c), d);
    c /= n;
    d /= n;
    n3.k = c / d;
    n3.ca = c % d;
    n3.cb = d;
}
void minus1()
{
    long long c = (long long)n1.a * n2.b - (long long)n2.a * n1.b;
    long long d = (long long)n1.b * n2.b;
    int n = GreatestCommonDivisor(abs(c), d);
    c /= n;
    d /= n;
    n4.k = c / d;
    n4.ca = c % d;
    n4.cb = d;
}

void multiple()
{
    long long c = (long long)n1.a * n2.a;
    long long d = (long long)n1.b * n2.b;
    int n = GreatestCommonDivisor(abs(c), d);
    if(d==0){
        return;
    }
    c /= n;
    d /= n;
    n5.k = c / d;
    n5.ca = c % d;
    n5.cb = d;
}

void divide()
{
    long long c = (long long)n1.a * n2.b;
    long long d = (long long)n1.b * n2.a;
    int n = GreatestCommonDivisor(abs(c), abs(d));   
    if (d < 0){
        d *= -1;
        c *= -1;
    }
    else if(d==0){
        n6.cb=-1;
        return;
    }
    c /= n;
    d /= n;
    n6.k = c / d;
    n6.ca = c % d;
    n6.cb = d;
}

void print(Node node)
{
    if(node.cb<0){
        printf("Inf");
        return;
    }
    if (node.ca == 0)
    {

        if (node.k < 0)
        {
            printf("(%d)", node.k);
        }
        else
        {
            printf("%d", node.k);
        }
    }
    else
    {
        if (node.k < 0)
        {
            printf("(%d %d/%d)", node.k, abs(node.ca), node.cb);
        }
        else if (node.k > 0)
        {
            printf("%d %d/%d", node.k, abs(node.ca), node.cb);
        }
        else
        {
            if (node.ca > 0)
                printf("%d/%d", node.ca, node.cb);
            else if (node.ca < 0)
                printf("(%d/%d)", node.ca, node.cb);
        }
    }
}
int main()
{
    int a1, b1, a2, b2;
    scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
    n1.a = a1;
    n1.b = b1;
    n2.a = a2;
    n2.b = b2;
    n1.k = a1 / b1;
    n2.k = a2 / b2;
    int c = GreatestCommonDivisor(fabs(a1), fabs(b1));
    n1.ca = (a1 % b1) / c;
    n1.cb = b1 / c;
    c = GreatestCommonDivisor(fabs(a2), fabs(b2));
    n2.ca = (a2 % b2) / c;
    n2.cb = b2 / c;
    sum();
    minus1();
    multiple();
    divide();
    print(n1);
    printf(" + ");
    print(n2);
    printf(" = ");
    print(n3);
    printf("\n");
    print(n1);
    printf(" - ");
    print(n2);
    printf(" = ");
    print(n4);
    printf("\n");
    print(n1);
    printf(" * ");
    print(n2);
    printf(" = ");
    print(n5);
    printf("\n");
    print(n1);
    printf(" / ");
    print(n2);
    printf(" = ");
    print(n6);
    printf("\n");
    return 0;
}
