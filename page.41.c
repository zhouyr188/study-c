#include<stdio.h>
int main(void)
{
    int i=10,j;
    float pi=3.14,pa;
    j=i++;
    pa=++pi;
    printf("j=%d,pa=%f\n",j,pa);
    printf("i=%d,pi=%f\n",i++,--pi);
    return 0;
}