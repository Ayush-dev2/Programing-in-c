#include <stdio.h>
int main() {
 float principal, rate, time, amount,
compound_interest;
 int i;
 printf("Enter Principal amount: ");
 scanf("%f", &principal);
 printf("Enter Rate of interest: ");
 scanf("%f", &rate);
 printf("Enter Time (in years): ");
 scanf("%f", &time);
 amount = principal;
 for(i = 1; i <= (int)time; i++) {
 amount = amount + (amount * rate / 100);
 }
 compound_interest = amount - principal;
 printf("Compound Interest = %.2f\n",
compound_interest);
 return 0;
}