#include "middle.h"

int itc_rev_oct_num(long long number){
    long long o = 0;
    int i = 1;
    while(number != 0){
        o += (number % 10)*i;
        number /= 10;
        i *= 8;
    }
    return o;
}
int itc_covert_num(long long number, int ss){
    long long o = 0;
    int i = 1;
    while(number != 0){
        o += (number % ss)*i;
        number /= ss;
        i *= 10;
    }
    return o;
}
int itc_rev_covert_num(long long number, int ss){
    long long o = 0;
    int i = 1;
    while(number != 0){
        o += (number % 10)*i;
        number /= 10;
        i *= ss;
    }
    return o;
}



long long reverse_num(long long number){
    if(number < 0){
        number *= -1;
    }
    int o = 0;
    while(number > 0){
        o *= 10;
        o += number % 10;
        number /= 10;
    }
    return o;
}