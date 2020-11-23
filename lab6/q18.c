#include<stdio.h>

int main()

{
int income;
double tax;

scanf("%d",&income);

tax=0;

if (income > 0 && income < 10700)
tax=0.15*income;

else if (income >= 10700 && income < 26000)

tax=1605+0.2*(income-10700);

else if (income >= 26000 && income < 60000)

tax=4665+0.27*(income-26000);

else if (income >= 60000 )

tax=13845+0.35*(income-60000);

else

{printf("Negative income\n");

exit(0);}

printf("You will pay %g YTL income tax\n",tax);

return 0;

}