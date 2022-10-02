#include "middle.h"
#include <iostream>


void itc_num_print(int number){
    std::cout << number;
}
int itc_len_num(long long number){
    int o = 0;
    while(number != 0){
        o++;
        number /= 10;
    }
    return o;
}
int itc_sum_num(long long number){
    int o = 0;
    while(number != 0){
        o += number % 10;
        number /= 10;
    }
    return o;
}
long long itc_multi_num(long long number){
    long long o = 1;
    while(number != 0){
        o *= number % 10;
        number /= 10;
    }
    return o;
}
int itc_max_num(long long number){
    int max = 0;
    while(number != 0){
        if(number % 10 > max){
            max = number % 10;
        }
        number /= 10;
    }
    return max;
}