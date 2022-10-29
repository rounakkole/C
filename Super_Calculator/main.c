#include <stdio.h>
#include <stdlib.h>

int main(void) {
long num1,num2;
char oper;
long ans;
int i=1;
system("clear");
//printf("example :: enter expression: 2+3  \n integers only | + - * / \n \n");

printf("\n  SUPER CALCULATOR\n _____________________\n|  _________________  |\n| |            2+3  | |\n| |_________________| |\n|  ___ ___ ___   ___  |\n| | 7 | 8 | 9 | | + | |\n| |___|___|___| |___| |\n| | 4 | 5 | 6 | | - | |\n| |___|___|___| |___| |\n| | 1 | 2 | 3 | | x | |\n| |___|___|___| |___| |\n| | C | 0 | = | | / | |\n| |___|___|___| |___| |\n|_____________________|\n");

while(i<100){

  printf("\n ENTER EXPRESSION:    ");

  char str[50];
  scanf("%[+]%*c", str);
  scanf("%ld",&num1);
  scanf(" %c",&oper);
  scanf("%ld",&num2);
  
  system("clear");

  printf("\n _____________________\n|  _________________  |\n| |                 | |\n");
  
  printf("| | %ld %c %ld =    ", num1,oper,num2);
   
  if(oper == '+'){
    printf("%ld",num1 + num2);
  }
  else if(oper == '-'){
    printf("%ld",num1 - num2);
  }
  else if(oper == '*'){
    printf("%ld",num1 * num2);
  }
  else if(oper == '/'){
    printf("%ld",num1 / num2);
    if((num1 % num2) >= 1)
      printf("\n| |(remainder %ld) ", num1 % num2);
  }

  
  printf("\n| |_________________| |\n|  ___ ___ ___   ___  |\n| | 7 | 8 | 9 | | + | |\n| |___|___|___| |___| |\n| | 4 | 5 | 6 | | - | |\n| |___|___|___| |___| |\n| | 1 | 2 | 3 | | x | |\n| |___|___|___| |___| |\n| | C | 0 | = | | / | |\n| |___|___|___| |___| |\n|_____________________|\n");


          printf("\n");
++i;
}

return 0;
}

//github/rounakkole/C/