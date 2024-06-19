#include <stdio.h>
#include <stdlib.h>

void printOutput(int a, int b) {
    printf("%d %d\n", a, b);
}

int main() {
    int x, y, z;
    
    // Input x, y, z
    
    scanf("%d %d %d", &x, &y, &z);
    
    int a, b;


    //Initializing with any one ...Later on it will change according to the conditions
    b = x;   
    a = y * z * x; 

    if (a % b != 0) {
        b = y;
        a = x * y * z; 
    }
    if (a % b != 0) {
      b = z;
      a = x * y * z;
    }

    // If Any Case Does not Matches then => NIL
    if (a % b != 0) {
        printf("No valid A and B found!\n");
    } else {
        printOutput(a, b);
    }

    return 0;
}

