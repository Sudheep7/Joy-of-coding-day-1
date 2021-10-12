/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>
int main()
{
    //Taking a variable num=22 and 22 in decimal is equivalent to 010110 in binary
    char num=22;
    //Left-Shift the variable by 1 i.e 010110 after left-shift becomes 101100
    printf("num<<1 = %d\n", num<<1);
    //right shift
    printf("num>>1 = %d\n", num>>1);
    return 0;
}

