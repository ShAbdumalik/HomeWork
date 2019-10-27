#include <stdio.h>
int main() {
    int ticket, ticket2, number1, number2, number3, number4, number5, number6, three, threelast;
    printf("Enter number of the ticket:\n");
    scanf("%d", &ticket);

    ticket2 = ticket / 1000;
    number3 = ticket2 % 10;
    number2 = (ticket2 % 100 - number3)/10;
    number1 = ticket / 100000;
    number6 = ticket % 10;
    number5 = (ticket % 100 - number6) / 10;
    number4 = (ticket % 1000 -number5 - number6) / 100;
    three = number1 + number2 + number3;
    threelast = number4 + number5 + number6;

    if (ticket>=100000 && ticket<=999999)
        if (three==threelast)
            printf(" Congratulation you are the winner!!!");
        else
            printf("I'm so sorry, but your are not the winner(. Try your luck next time!!");
    else
        printf("Unknown number of the ticket! Try to enter another one!");
}
