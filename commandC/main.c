//
//  main.c
//  commandC
//
//  Created by chendw on 14-7-16.
//  Copyright (c) 2014年 CHENDW. All rights reserved.
//

/*******************************
 *
 *    2014/07/18
 *
 *******************************/

/*
#include <stdio.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    printf("hello world chendw\n");
    return 0;
}
*/

/*
#include <stdio.h>
int main() {
    printf("a letter grade of %c\n", 'B');
    printf("a test score of %d\n", 45);
    printf("a class average of %.1f\n", 34.9);
}
*/

/*
#include <stdio.h>
int main() {
    printf("a letter grade of %c\n", 'B');
    printf("a test score of %d\n", 23);
    printf("a class average of %.2f\n", 23.456); //2 为浮点数的位数

}
*/

/*
 this function will compute three numbers and get the average number of them
 written by chendw, 7/16/2014
 */

/*
#include <stdio.h>
int main() {
    float grade1,grade2,grade3;
    float avg;
    printf("what grade did the first student get?\a");
    scanf("%f", &grade1);
    printf("what grade did the second student get?");
    scanf("%f", &grade2);
    printf("what grade did the third student get?");
    scanf("%f", &grade3);
    avg = (grade1 + grade2 + grade3)/3.0;
    printf("the average grade of these three students is %.1f", avg);
    return 0;
}
*/

/*
#include <stdio.h>
int main() {
    printf("this is a tab command\t\t\t\t");
    printf("this is a alarm command\a");
    printf("this is a \"");
    printf("this is a \\\n");
    printf("%d roses cost %f,%s\n", 20, 223.456, "fuck off");
}
*/

/*
#include <stdio.h>
#include <string.h>
int main() {
    char month[10] = "Septerber";
    strcpy(month, "fuck off");
    printf("The month is %s\n", month);
}
*/


/*
#include <stdio.h>
int main() {
    int age;
    float weight;
    char first[15], last[15];
    
    printf("\nwhat is your first name?");
    scanf(" %s", first);
    
    printf("\nwhat is your last name?");
    scanf(" %s", last);
    
    printf("\nHow old are you?");
    scanf(" %d", &age);
    
    printf("\nHow much do you weight?");
    scanf("%f", &weight);
    
    printf("\nHere is the information you entered:\n");
    printf("first name: %s ;last name: %s", first, last);
    printf("age:%d; weight:%.1f \n", age, weight);
    return 0;

}
*/

/*
#include <stdio.h>
int main() {
    int count;
    float price, beforeTax, netSale;
    #define RATE 0.07;
    
    printf("how many tires do you want?\n");
    scanf(" %d", &count);
    
    printf("what is the price for each tire?\n");
    scanf(" %f", &price);
    
    beforeTax = price * count;
    printf("the total prices before tax is: %.2f\n", beforeTax);
    netSale = beforeTax + beforeTax * RATE;
    printf("the total prices is: %.2f\n", netSale);

}
*/

/*
#include <stdio.h>
int main() {
    int count = 0;
    count = count + 1;
    printf("count value is : %d\n", count);
    count = count + 1;
    printf("count value is : %d\n", count);
    count = count + 1;
    printf("count value is : %d\n", count);
}
 */

/*
#include <stdio.h>
int main() {
    float dogAge;
    int age;
    printf("how old are you?\n");
    scanf(" %d", &age);
    dogAge = (float)age / 7;
    printf("if you are a dog, you will be %.1f\n", dogAge);

}
*/

/*******************************
 *
 *    2014/07/18
 *
 *******************************/


/*
#include <stdio.h>
#define MAXSAL 1800.00
int main() {
    float salary,taxAmt;
    float taxRat = .35;
    printf("how much do you earn?\n");
    scanf(" %f", &salary);
    if(salary > MAXSAL) {
        taxAmt = salary * taxRat;
    } else {
        taxAmt = 0.00;
    }
    printf("this is the tax you pay: %d \n", 11 < 2);
}
*/

/*
#include <stdio.h>
int main() {
    char name[25];
    printf("what is your last name？\n");
    scanf(" %s", name);
    if(name[0] < 'P' && name[0] > 'F') {
        printf("you must go to room fuck");
    } else {
        printf("fuck you");
    }
}
*/

/*
#include <stdio.h>
int main() {
    char name[] = "Septerber";
    int age = 23;
    printf("name: %d; age: %d; int: %d; char: %d; long: %d; float: %d; double: %d;",
           sizeof(name), sizeof(age), sizeof(int), sizeof(char), sizeof(long), sizeof(float), sizeof(double));

}
*/

// print 1 to 20 twice
/*
#include <stdio.h>
int main() {
    int i = 1;
    while (i < 21) {
        printf(" %d", i++);
    }
    printf("\n");
    i = 1;
    do {
        printf(" %d", i++);
    } while (i < 21);
}
*/

/*
#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char ch[] = "C is fun";
    for(i = 0; i < strlen(ch); i++) {
        putchar(ch[i]);
    }
    putchar('\n');
    return 0;

}
*/

/*
#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char msg[] = "C is fun";
    for(i = 0; i < strlen(msg); i++) {
        putchar(msg[i]);
    }
    putchar('\n');
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <CTYPE.H>
int main() {
    int i;
    char msg[25];
    printf("please type 25 letters and press enter key to end:\n");
    for(i = 0; i < 25; i++) {
        msg[i] = getchar();
        if(msg[i] == '\n') {
            i--;
            break;
        }
    }
    putchar('\n');
    
    for(; i >= 0; i--) {
        putchar(msg[i]);
    }
    putchar('\n');
    toupper('a');
}
*/

// get and put strings
#include <stdio.h>
#include <string.h>
int main() {
    char city[15];
    char st[3];
    char fullLocation[18] = "";
    puts("what town do you live?");
    gets(city);
    puts("what status do you live?");
    gets(st);
    strcat(fullLocation, city);
    strcat(fullLocation, ",");
    strcat(fullLocation, st);
    
    puts("you lives in");
    puts(fullLocation);
    return 0;
}










