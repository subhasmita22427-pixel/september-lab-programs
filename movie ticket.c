#include<stdio.h>
int main()
{
int ticket, count, cost,total;
float discount;
printf("Enter 1 for Premium, 2 for Standard and 3 for Economy, 4 if you want to exit\n");
printf("Premium costs 200\n");
printf("Standard costs 150\n");
printf("Economy costs 100\n");
printf("Enter your seat preference\n");
scanf("%d", &ticket);
switch(ticket)
{
case 1:
printf("You chose premium!\n");
printf("How many tickets would you like?\n");
scanf("%d", &count);
cost=200*count;
if(count>=5)
{
discount=(5.0/100.0)*cost;
total=cost-discount;
printf("The amount is-%d", total);
}
else
{
    printf("NO DISCOUNT!");
}
break;
case 2:
printf("You chose standard!\n");
printf("How many tickets would you like?\n");
scanf("%d", &count);
cost=150*count;
if(count>=5)
{
discount=(5.0/100.0)*cost;
total=cost-discount;
printf("The amount is-%d", total);
}
else
{
    printf("NO DISCOUNT!");
}
break;
case 3:
printf("You chose Economy!\n");
printf("How many tickets would you like?\n");
scanf("%d", &count);
cost=100*count;
if(count>=5)
{
discount=(5.0/100.0)*cost;
total=cost-discount;
printf("The amount is-%d", total);
}
else
{
    printf("NO DISCOUNT!");
}
break;
case 4:
printf("You chose no tickets!");
break;
default:
printf("INVALID!");
break;
}
return 0;
}
