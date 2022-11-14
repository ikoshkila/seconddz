#include "middle.h"

int itc_min_num(long long number){
    if(number == 0){
        return 0;
    }
    if(number < 0){
        number *= -1;
    }
    int min = 10;
    while(number > 0){
        if(number % 10 < min){
            min = number % 10;
        }
        number /= 10;
    }
    return min;
}
int itc_rev_num(long long number){
    return itc_len_num(reverse_num(number));
}
int itc_null_count(long long number){
    if(number == 0){
        return 1;
    }
    if(number < 0){
        number *= -1;
    }
    int o = 0;
    while(number > 0){
        if(number % 10 == 0){
            o++;
        }
        number /= 10;
    }
    return o;
}
bool itc_mirror_num(long long number){
    return number == reverse_num(number);
}
int itc_mirror_count(long long number){
    int o = 0;
    for(long long i = 1; i <= number; ++i){
        if(i == reverse_num(i)){
            o++;
        }
    }
    return o;
}