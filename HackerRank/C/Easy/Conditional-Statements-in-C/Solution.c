#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);

    char *words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n >= 1 && n <= 9) {
        printf("%s\n", words[n]);
    } else if (n > 9) {
        printf("Greater than 9\n");
    }

    return 0;
}
