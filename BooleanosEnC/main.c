//
//  main.c
//  BooleanosEnC
//
//  Created by Ricardo Champa on 17/04/2018.
//  Copyright © 2018 Ricardo Champa. All rights reserved.
//

#include <stdio.h>

int esPar(int n){
    return n%2==0;
}

int esMultiplo21(int n){
    return n%21==0;
}

int main(int argc, const char * argv[]) {

    int x = esPar(2);
    int y = esPar(3);
    int z = esPar(4);
    printf("x is even? %d\n",x);
    printf("y is even? %d\n",y);
    printf("z is even? %d\n",z);
    
    printf("\n");

    int k = esMultiplo21(21);
    int j = esMultiplo21(2);
    printf("k is a multiple of 21?  %d\n",k);
    printf("j is a multiple of 21? %d\n",j);
    
    return 0;
}
