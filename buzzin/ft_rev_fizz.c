#include <stdio.h>
#include <unistd.h>

void fizz(int total) 
{
    int fizz; 
    int buzz; 
    
    fizz = 3;
    buzz = 7;
    //printf("Current int received: %d \n", total);

    if((total % fizz == 0) && (total % buzz == 0)) {
        write(1, "fizzbuzz", 8);
        write(1, "\n", 1);
    }
    else if(total % fizz == 0) {
        write(1, "fizz", 4);
        write(1, "\n", 1);
    }
    else if(total % buzz == 0) {
        write(1, "buzz", 4);
        write(1, "\n", 1);
    }
}

int main()
{
    int i;
    i = 100;
    while(i > 1) {
        fizz(i);
        i--;
    }
    
    return 0;
}