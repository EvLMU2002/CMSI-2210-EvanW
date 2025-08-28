#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[] ) {

   char name[30];
   printf("Enter your name: ");
   scanf("%s", name);
   printf("Hello, %s!\n", name);
   exit (0);

}