#include "middle.h"

int itc_min_num(long long number){
    int min = 9;
    while(number != 0){
        if(number % 10 < min){
            min = number % 10;
        }
        number /= 10;
    }
    return min;
}
long long itc_rev_num(long long number){
    long long o = 0;
    while(number != 0){
        o *= 10;
        o += number % 10;
        number /= 10;
    }
    return o;
}
int itc_null_count(long long number){
    int o = 0;
    while(number != 0){
        if(number % 10 == 0){
            o++;
        }
        number /= 10;
    }
    return o;
}
bool itc_mirror_num(long long number){
    return number == itc_rev_num(number);
}
int itc_mirror_count(long long number){
    int o = 0;
    for(int i = 1; i < number; i++){
        if(i == itc_rev_num(i)){
            o++;
        }
    }
    return o;
}