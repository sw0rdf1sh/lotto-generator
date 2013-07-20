#include <stdio.h>
#include "stdlib.h"


int main(int argc, const char * argv[])
{
    int a,b,c,d,e,f;
    int myArray[5];
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    int num1;
    int num2;
    int counter; 

        a = arc4random() % 49 + 1;      //
        
            myArray[0] = a;
        
        do {
            b=arc4random() % 49 +1;
        } while (b==a);
            myArray[1] = b;
 
    do {
        c=arc4random() % 49 + 1;
    } while (c==b || c==a);
        myArray[2] = c;

    do {
        d=arc4random() % 49 + 1;
    } while (d==a || d==b || d==c);
        myArray[3] = d;
    
    do {
        e=arc4random() % 49 + 1;
    } while (e==a || e==b || e==c || e==d);
        myArray[4] = e;
    
    do {
        f=arc4random() % 49 + 1;
    } while (f==a || f==b || f==c || f==d || f==e);
        myArray[5] = f;

start:
        if (counter < 6)    {   // counter needs to be 6 as there needs to be 5 iterations in the for loop.
            goto begin;

        }   else {
                goto end;
        }
begin:
            for (int i = 0; i < 5; i++) {
        
            if (myArray[i] > myArray[i+1])
            {
                ptr1 = &myArray[i];    // pointer to memory address of e.g myArray[0]
                ptr2 = &myArray[(i + 1)];

                    num1 = *ptr1;
                    num2 = *ptr2;

                    *ptr1 = num2;
                    *ptr2 = num1;
            }       
                }
                counter++;
                goto start;

end:
            
            printf("Lotto generator v1.0 by sw0rdf1sh\n");
            printf("Your winning numbers... \n");
                    for (int i = 0; i < 6; i++)
        {
            printf("%d\t", myArray[i]);
        }
          printf("\n"); 
    }

