#include <stdio.h>
#include <unistd.h>


char *ft_strupercase(char *str) {
    int i;
    int ascii;
    int uppercase;
    
    if(str == NULL || str[0] == '\0') {
        return (str);
    }

    i = 0;
    uppercase = 0;
    ascii = 0;
    while(str[i]) {

        ascii = str[i];
        // check if the letter is already uppercase
        if(ascii >= 65 && ascii <= 90) {
            i++;
            continue;
        }

        // now check if letter is lowercase
        /*
        If the char is lowercase we increment the ascii int value till we reach CAPITAL match
        */
        if(ascii >= 97 && ascii <= 122) {
            uppercase = (ascii - 32);
            printf("Current ascii value from str: %c \n, current ascii value uppercase: %c \n", ascii, uppercase);
            str[i] = uppercase;
        } 

        i++;
    }

    return (str);
}

int main(void) {
    char str[] = "hello world";
    char *result;

    result = ft_strupercase(str);
    printf("Received updated str array: %s", result);
}