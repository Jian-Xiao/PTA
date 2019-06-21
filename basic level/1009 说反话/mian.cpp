//
//main.cpp
//index-name
//
//Created by Robert on 2019/3/26.
//Copyright  2019年 Robert. All rights reserved.
//



#include <stdio.h>
int main(){
	int num = 0;
	char str[80][80];
	while(scanf("%s", str[num]) != EOF){
		num++;
	}
	for(int i = num-1; i >= 0; i--){
		printf("%s", str[i]);
		if(i > 0)
			printf(" ");
	}
	return 0;
}