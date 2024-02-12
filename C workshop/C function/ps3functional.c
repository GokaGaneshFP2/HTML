#include <stdio.h>
void doaverage(int a,int b,int c){
    int result;
    result=(a+b+c)/3;
    printf("%d \n",result);
}
int main(){
    doaverage(10,20,30);
    doaverage(40,200,340);
    doaverage(400,100,930);
return 0;
}