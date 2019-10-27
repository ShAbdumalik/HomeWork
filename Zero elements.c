#include <stdio.h>
int main() {
    int a, b, c = 0;
    printf ("Enter the amount of elements in the array:\n");
    scanf ("%d", &b);
    printf ("Enter elements of the array:\n");
    int e[b];
    for (a=0; a < b; a++) {
        scanf("%d", &e[a]);
        if ((e[a]) == 0) {
        c++;
        }
    } printf ("Amount of zero elements: %d\n", c);
return 0;
}







