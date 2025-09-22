// моя первая программа
#include <stdio.h>

int main(){
    /*double d1, d2, d3, d4;
    float var_f;
    var_f = 10.0;

    d1 = 10.0f;
    d2 = -7.;
    d3 = 1e2;
    d4 = 5e-3;

    int size_float = sizeof(var_f); 
    int var_t = -1542;
    double var_ld = -52412.51354;
    printf("[%#X]\n",var_t);
    printf("[%+.2f]\n",var_ld);  */
    long long var_lli = 0;
    double var_d = 0;

    int count = scanf("%lld %lf", &var_lli, &var_d);
    printf("res is %d: var_lli is %lld, var_d is %.2f\n", count, var_lli, var_d);

    return 0;
}
