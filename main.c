//
//  main.c
//  NestingLoop
//
//  Created by Eun Jae Lee on 20/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int i,j;
    
    for (i=0; i<=30; i++) {
        
        for (j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
