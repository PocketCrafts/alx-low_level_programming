#include "../main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;
    char str1[] = "hello world! expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    printf("-------------------\n");
    ptr = cap_string(str1);
    printf("%s", ptr);
    return (0);
}
