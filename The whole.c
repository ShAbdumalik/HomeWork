#include <stdio.h>
int main(){
    int a, b;
    int c = 0;
    printf("Enter number a:\n");
    scanf("%d", &a);
    printf("Enter number b:\n");
    scanf("%d", &b);
    if(b==0){
        printf("ERROR!!!");
        }
    if(abs(a) >= abs(b)){
        if(a < 0 || b < 0){
                if( a < 0 && b < 0){
                    while(abs(a)>=abs(b)){
                        a = abs(a);
                        b = abs(b);
                        a-=b;
                        c++;
                    }printf("The whole is %d", c);
                }else{
                    while(abs(a)>=abs(b)){
                    a = abs(a);
                    b = abs(b);
                    a-=b;
                    c++;
                    }printf("The whole is %d", -c);
                }
        }else{
            while(abs(a)>=abs(b)){
                a = abs(a);
                b = abs(b);
                a-=b;
                c++;
            }printf("The whole is %d", c);
        }
    }else{
        printf("Number a is less than b!! Please, enter other numbers!!");
    }
}







