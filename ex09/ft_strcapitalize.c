#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str) {
    int i;
    int ascii;
    int uppercase;
    int lowercase;
    int new_word = 1;

    i = 0;
    lowercase = 0;
    uppercase = 0;
    ascii = 0;

    if(str == NULL || str[0] == '\0') {
        return (str);
    }

    while(str[i] && str[i] != '\0') {
        ascii = str[i];

        /*
        Check if the cahracther is within the char set
        */
        if((ascii >= 'a' && ascii <= 'z') || (ascii >= 'A' && ascii <= 'Z')) {
            if (new_word) {
                    // check if the cahracther is not already uppercase
                    if(ascii >= 'A' && ascii <= 'Z') {
                        i++;
                        new_word = 0; // Reset the flag
                        continue;
                    }

                    // assume the char is not uppercase
                    uppercase = (ascii - 32); 
                    str[i] = uppercase;
                    new_word = 0; // Reset the flag

            } else {
                // check if the cahracther is not already lowercase
                if(ascii >= 'a' && ascii <= 'z') {
                    i++;
                    continue;
                }

                lowercase = (ascii + 32);
                str[i] = lowercase;
            }


        } else {
            new_word = 1; // Set the flag for the next character
        }

        i++;
    }

    return (str);
}

int main(void) {
    char str[] = "hello world guess who is back in town+ya_know-me!Bro";
    char *result;

    result = ft_strcapitalize(str);
    printf("Capatalised words: %s", result);
}