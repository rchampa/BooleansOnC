//
//  main.c
//  BooleanosEnC
//
//  Created by Ricardo Champa on 17/04/2018.
//  Copyright © 2018 Ricardo Champa. All rights reserved.
//

#include <stdio.h>

int esMultiplo21(int n){
    return n%21==0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("true %d\n",esMultiplo21(21));
    printf("false = %d\n",esMultiplo21(22));
    
    return 0;
}
