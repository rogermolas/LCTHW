#include <stdio.h>

int main()
{
  int age = 10;
  int height = 72;

  char name[100];
  
  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  printf("Enter your name: ");
  scanf("%s", name);

  printf( "\nYou entered: %s ", name);  
 
  return 0;
}
