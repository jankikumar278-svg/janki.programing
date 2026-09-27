#include <stdio.h>
int main(){
    float principle = 50;
    float rate = 40;
    float time = 50;
    float si = principle*rate*time/100;
    printf ("simple interest is : %f", si);
    return 0;
}