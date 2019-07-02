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
    char a[10001];
    cin.getline(a,10001);
    int i=0,P=0,A=0,T=0,e=0,s=0,t=0;
    while(a[i]!='\0'){
        switch (a[i++])
        {
        case 'P':
            P++;
            break;
        case 'A':
            A++;
            break; 
        case 'T':
            T++;
            break; 
        case 'e':
            e++;
            break; 
        case 's':
            s++;
            break; 
        case 't':
            t++;
            break; 
        default:
            break;
        }
    }
   
   while(P||A||T||e||s||t){
        if(P){
            putchar('P');P--;}
        if(A){
            putchar('A');A--;}
        if(T){
            putchar('T');T--;}
        if(e){
            putchar('e');e--;}
        if(s){
            putchar('s');s--;}
        if(t){
            putchar('t');t--;}
   }
    return 0;
}
