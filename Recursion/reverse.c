

#include <stdio.h>

void reverse(char *str) {
   if (*str == '\0') {
    
       return;
   }

   reverse(str + 1); 
   printf("%c", *str);
}

int main() {
   char str[100];


   scanf("%s",str);


   reverse(str);

   printf("\n");

   return 0;
}
