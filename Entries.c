#include <stdio.h>
#include <string.h>
#include<stdbool.h>
int main(){
char S[256];
char S1[256];
        printf("Enter S: ");
    gets(S);
        printf("Enter S1: ");
	gets(S1);
int count = 0;
int a = strlen(S) - strlen(S1);
    for (int b=0; b<=a;b++){
    bool find = false;
    int c = 0;
		while ((!find) && (c < strlen(S1))){
			if (S1[c] != S[b + c]){
            find = true;
			}c++;
		}if (!find){
        count++;
		}
	}printf("Number of entries: %d \n", count);
	return 0;
}
