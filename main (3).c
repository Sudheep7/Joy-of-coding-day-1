/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int a = 7, b = 7, c = 14, result;
 result = (a == b) && (c > b);
 printf("(a == b) && (c > b) is %d \n", result);
 result = (a == b) && (c < b);
 printf("(a == b) && (c < b) is %d \n", result);
 result = (a == b) || (c < b);
 printf("(a == b) || (c < b) is %d \n", result);
 result = (a != b) || (c < b);
 printf("(a != b) || (c < b) is %d \n", result);
 result = !(a != b);
 printf("!(a != b) is %d \n", result);
 result = !(a == b);
 printf("!(a == b) is %d \n", result);
 return 0;
}


