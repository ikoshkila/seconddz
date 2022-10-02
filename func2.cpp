#include "middle.h"

int itc_second_max_num(long long number){
    if (number / 10 == 0){
        return -1;
    }
    int fmax = itc_max_num(number);
    int smax = -1;
    while(number != 0){
        int temp = number % 10;
        if(temp > smax && temp < fmax){
            smax = temp;
        }
        number /= 10;
    }
    return smax;
}
int itc_second_simple_max_num(long long number){
    if (number / 10 == 0) return -1;
    int fmax = itc_max_num(number);
    int fmcount = 0;
    int smax = -1;
    while(number != 0){
        int temp = number % 10;
        if(temp == fmax){
            fmcount++;
        }if(temp > smax && temp < fmax){
            smax = temp;
        }
        number /= 10;
    }
    return (fmcount > 1)? -1 : smax;
}
long long itc_bin_num(long long number){
    long long o = 0;
    int i = 1;
    while(number != 0){
        o += (number % 2)*i;
        number /= 2;
        i *= 10;
    }
    return o;
}
int itc_oct_num(long long number){
    long long o = 0;
    int i = 1;
    while(number != 0){
        o += (number % 8)*i;
        number /= 8;
        i *= 10;
    }
    return o;
}
int itc_rev_bin_num(long long number){
    long long o = 0;
    int i = 1;
    while(number != 0){
        o += (number % 10)*i;
        number /= 10;
        i *= 2;
    }
    return o;
}