/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void replace_all(char *str, char oldChar, char newChar) {
    int i = 0;
    while (str[i] != '\0') {
        // 檢查當前字符是否為小寫'a'，若是，則替換為大寫'A'
        if (str[i] == oldChar) {
            if (oldChar == 'a') {
                str[i] = 'A';
            } 
          	else {
                str[i] = newChar;
            }
        }
        i++;
    }
}

int main() {
    char str[100], oldChar = 'a', newChar = 'A';
    
    scanf("%s", str);
    
    replace_all(str, oldChar, newChar);
    
    printf("%s", str);
    
    return 0;
}
