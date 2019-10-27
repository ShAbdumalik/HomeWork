#include<stdio.h>

int main() {
    int InputNumber,count,flag,CountTwo;
	printf ("Enter number:\n ") ;
    scanf ("%d",&InputNumber);
	printf ("Prime numbers from 2 to %d:\n",InputNumber);
 		for (count=2;count<=InputNumber;count++) {
			flag=1;
			for(CountTwo=2;CountTwo<count;CountTwo++) {
				if (count==CountTwo) continue;
                if (count%CountTwo==0) {flag=0; break;
				}
            }if(flag) printf("%d\n",count);

        }
}
