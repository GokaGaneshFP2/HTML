#include <stdio.h>
void dobiggest(int n1,int n2)
{
    int result;
    result=n1>n2?n1:n2;
    printf("%d\n",result);
}
int main()
{
    dobiggest(100,250);
    dobiggest(300,50);
    dobiggest(1000,2500);
    return 0;

}
