#include <stdio.h>
void docircle(float r)
{
    const float PI=3.14;
    float result;
    result=PI*(r*r);
    printf("%f\n",result);
}
int main()
{
    docircle(100);
    docircle(10);
    docircle(15);
    return 0;
}
