/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a=6,b=6,c=12;
 printf("%d==%d is %d\n",a,b,a==b);
printf("%d==%d is %d\n",a,c,a==c);
printf("%d>%d is %d\n",a,b,a>b);
printf("%d>%d is %d\n",a,c,a>c);
printf("%d<%d is %d\n",a,b,a<b);
printf("%d<%d is %d\n",a,c,a<c);
printf("%d!=%d is %d\n",a,b,a!=b);
printf("%d!=%d is %d\n",a,c,a!=c);
printf("%d>=%d is %d\n",a,b,a>=b);
printf("%d>=%d is %d\n",a,c,a>=c);
printf("%d<=%d is %d\n",a,b,a<=b);
printf("%d<=%d is %d\n",a,c,a<=c);
return 0;
}
