/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void multi(int i, int j) {
    if (i<=9) {
        if (j==9) {
            printf("%d*%d=%d\n",i,j,i*j);
            j=1;
            multi(i+1,j);
        } else {
            printf("%d*%d=%d ",i,j,i*j);
            multi(i, j+1);
        }
    }
}

int main() {
    multi(1, 1);
    return 0;
}
