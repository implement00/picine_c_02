# Picine C 01 | Learning C Basics

_This documents covers what I have learned from doing these exersizes. This is for my personal gain and it's not part of the project specification to create such a `README.md` file. Altough the **evaluation process** part of every assignment does expect you to explain the code clearly, so it's in my benifit to do this._

## Source
+ **Subject PDF :** https://cdn.intra.42.fr/pdf/pdf/168731/en.subject.pdf

## Table Of Content


<br>

## Layout Explenations: 

- **Assignment Name:** | _e.g; ex00_

/ **Goal of assignment:** | _Describing what the function needs to do_

{ **My Solution:** | _Describing what my solution to gain the desired output was_

! **Purpose of the assigment:** | _Descibing what I think the purpose of the assignment was, in terms of learning `c code`_

<br>
<br>

## ft_strcpy

- **Assignment Name:** _ex00_

/ **Goal of assignment:** _Reproduce the behavior of the function strcpy. The behaviour of this function, when utilising man.
 Explains that a "string" aka array of characters should be transfered from initial array, e.g `src` to a new array, e.g `dest`.
  The array should end with a `'\0` null terminator. Indicating the end of the array within `dest` transfered data._

{ **My Solution:** _There is no quote "solution", as this just teaches correct syntax. I declare the `dest` array with a buffer of `100` element index
 Then I declare a src array and assign it example values; `hello world`. Then I loop through `src` array and append each element to `dest` array, when 
 I have completed looping through I finally append the `'\0'` terminator._

! **Purpose of the assigment:** | _Learn about the `strcpy` funcion with `c` code and how it works, also learn to utilise the `'/0'` mull terminator 
indicating the end of the array `dest`._

<br>

### What I learned: 
**Note:** That you can append `'/0'` null terminator to the end of a array, e.g; `dest` to indicate it's end.
```c
dest[i] = '\0'; // Add the null terminator 
```

<br>

**|** Aproach :
```c
#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src) {
    int i;
    
    i = 0;
    while(src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}

int main(void) {
    char dest[100];
    char src[] = "hello world good day ^_^";
    ft_strcpy(dest, src);
    printf("%s", dest);
}
```


<br>
<br>


## ft_strncpy

- **Assignment Name:** _ex01_

/ **Goal of assignment:** _Reproduce the behavior of the function strncpy. The behaviour of this function, when utilising man.
 Explains that a "string" aka array of characters should be transfered from initial array, e.g `src` to a new array, e.g `dest`._
 
 _The transfer characters amount from `src` to `dest` is specified, e.g; `n` amount. If `n` goes out of bounds from the `src` array it's index elemts 
 it's attempting to transfer. I fill in the rest of the amount from `n` remaining with `'\0'` null terminator._

{ **My Solution:** _There is no quote "solution", as this just teaches correct syntax. I declare the `dest` array with a buffer of `100` element index
 Then I declare a src array and assign it example values; `hello world`. Then I declare a `unsigned integer n` this is used to loop trough the `src` array
 untill I either hit amount `n` specifed, or I reach a `'\0'` operator within `src` array. If I hit the end of `src` array and `n` still 
 has a integer amount remaining, I fill int the rest of the amount with `'/0'` null terminator untill I reach `n` specified amount within `dest` array._

! **Purpose of the assigment:** | _Learn about the `strncpy` funcion with `c` code and how it works, also learn to utilise the `'/0'` mull terminator 
indicating the end of the array `dest`. Also learn the concept of `unsigned integers`, e.g; `unsigned int n`._

<br>

### What I learned: 
**Note:** That you can append `'/0'` null terminator to the end of a array, e.g; `dest` to indicate it's end.
```c
dest[i] = '\0'; // Add the null terminator 
```

**Note:** The concept of `unsigned int`, these are integers which can **only** represent non-negative integer values, so >= 0. These 
`unsigned int` (integers) can be usefull when you can certainly assert the value of the `int` will never be negative. Making you're 
code more readable. Increase performance, and avoid errors.

**Note:** That you can only make a comparrison clause for `unsigned int` agains another `unsigned in`, so a normal integer
can not be compared against a `unsigned int` in a condition.
```c
int i;
unsigned int n;
n = 10;
i = 0;

while(i < n) { // NOT ALLOWED
}

-------------------------------------

unsigned int n;
n = 10;
unsigned int a;
a = 0;

while(a < n) { // ALLOWED
}
```

**Note:** That the `strncpy` native `c` function which I reproduced, can specify the amount of integer values to copy over from 
the `src` array. Specifed by `n` and if the amount specified to copy is out of element index bounds of the `src` array the `dest` array
is simply filled with `'/0'` null terminators for the remaining integer amount specified which is no longer existent within the `src ` array.


<br>

**|** Aproach :
```c
#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) {
    unsigned int i;
    i = 0;
    
    while(i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    
    while(i < n) {
        dest[i] = '\0';
        i++;
    }
    
    return (dest);
} 

int main(void) {
    char dest[100];
    char src[] = "hello world good day ^_^";
    unsigned int n;
    n = 5;
    ft_strncpy(dest, src, n);
    printf("%s", dest);
}
```


<br>
<br>
