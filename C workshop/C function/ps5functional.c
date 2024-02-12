#include <stdio.h>
void docircle(float r){
    const float PI=3.14;
    float res;
    res=PI*(r*r);
    printf("%f",res);
}
int main(){
    docircle(100);
    docircle(10);
    docircle(15);
    return 0;
}