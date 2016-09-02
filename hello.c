#include <stdio.h>

void print_n_times(unsigned char in);

void main(void){
    print_n_times(8);
}


void print_n_times(unsigned char in){
    unsigned char i=1;
    while(in){
        printf("%d: Hello World\n",i);
        i++;
        in--;
    }
}
