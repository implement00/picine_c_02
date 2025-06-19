#include <stdio.h>
#include <unistd.h>


char *ft_strlowercase(char *str) {
    int i;
    int ascii;
    int lowercase;

    if(str == NULL || str[0] == '\0') {
        return (str);
    }

    i = 0;
    ascii = 0;
    lowercase = 0;
    while(str[i] && str[i] != '\0') {

        ascii = str[i];
        if(ascii >= 65 && ascii <= 90) {
            lowercase = (ascii + 32);
            printf("Current str value ascii: %c, \n Current lowercase str value ascii %c \n", ascii, lowercase);
            str[i] = lowercase;
        }

        i++;
    }

    return (str);
}

int main(void) {
    char str[] = "HELLO WORLD BITTACH";
    char *result;

    result = ft_strlowercase(str);
    printf("Received updated str array: %s", result);
}