#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter a number\n");
    scanf("%d", &a);
    printf("The value of a is %d\n",a);

    printf("Enter a number\n");
    scanf("%d", &b);
    printf("The value of b is %d\n",b);

    a=a+b-a;
    b=b+a-b;

    printf("the value of a=%d", a);
      printf("the value of b=%d", b);




}
