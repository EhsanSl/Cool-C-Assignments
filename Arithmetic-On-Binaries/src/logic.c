
#include <stdio.h>
#include "logic.h"
#include "conversion.h"
#define MAX 8

void func_or(int a[], int b[], int result[]){
    for(int i=0; i < MAX; i = i + 1){
        result[i] = a[i] | b[i];
    }

}


void func_and(int a[], int b[], int result[]){
    for(int i=0; i < MAX; i = i + 1) {
        result[i] = a[i] & b[i];
    }
}


void func_not(int a[], int result[]){
    for(int i = 0 ; i < MAX; i ++){
        if(a[i] == 1){
            result[i] = 0 ;
        }
        else if (a[i] ==0){
            result[i] = 1;
        }
    }

}
