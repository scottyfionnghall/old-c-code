#include <stdio.h>

int main()
{
/*
  First question
*/
int card_count = 11;
if (card_count > 10)
  puts("Okay:)");
/*
  Second question
*/
int c = 10;
while (c > 0){
  puts("Should i write code using classes?");
  c -= 1;
}
/*
Третий вопрос
*/
char ex[20];
puts("Enter a person name:");
scanf("%19s", ex);
printf("My dear %s. \n\n\t We breaking up.\n", ex);
/*
Четвёртый вопрос

*/
char suit = 'H';


switch(suit){
  case 'C':
    puts("Clubs");
    break;
  case 'D':
    puts("Diamonds");
    break;
  case 'H':
    puts ("Hearts");
    break;
  default:
    puts("Spades");
          }
}
