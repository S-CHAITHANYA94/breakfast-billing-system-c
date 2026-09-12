#include <stdio.h>
int total=0;
int mainmenu();
void breakfastmenu();
void tea_and_coffee_menu();
void paymentmenu();
int main()
{
main_menu :
switch (mainmenu())
{
case 1:printf("-----------------------------\n");
breakfastmenu();
goto main_menu;
case 2:printf("-----------------------------\n");
tea_and_coffee_menu();
goto main_menu;
case 3:printf("-----------------------------\n");
paymentmenu();
break;
goto main_menu;
case 4:if(total!=0){
paymentmenu();
break;
}
else{
printf("-----------------------------\n");
printf("Exit\n");
printf("bye bye\n");
break;
}
default:printf("Invalid option\n");
goto main_menu;
}
return 0;
}
int mainmenu()
{
int price,quantity,op;
printf("1.Breakfast\n");
printf("2.Tea and Coffee\n");
printf("3.Payment\n");
printf("4.Exit\n");
printf("enter your option\n");
scanf("%d",&op);
return op;
}
void breakfastmenu()
{
int op,price,quantity;
break_menu:
printf("Breakfast:-\n");
printf("1.Idly : $40\n");
printf("2.Dosa : $45\n");
printf("3.Puri : $50\n");
printf("4.Upma : $35\n");
printf("5.Pongal : $30\n");
printf("6.Back\n");
printf("Enter the option\n");
scanf("%d",&op);
switch(op)
{
case 1:price=40;
break;
case 2:price=45;
break;
case 3:price=50;
break;
case 4:price=35;
break;
case 5:price=30;
break;
case 6:printf("--------------------------------------------\n");
return;
default:printf("invalid option\n");
goto break_menu;
}
printf("Enter the quantity\n");
scanf("%d",&quantity);
total=total+price*quantity;
printf("your total bill is:%d\n",total);
printf("---------------------------------------------------\n");
return;
}
void tea_and_coffee_menu()
{
int op,price,quantity;
tea_menu:
printf("Tea and Coffee menu:-\n");
printf("1.Tea : $20\n");
printf("2.Coffee : $25\n");
printf("3.Milk : $30\n");
printf("4.Back\n");
printf("Enter the option\n");
scanf("%d",&op);
switch(op)
{
case 1:price=20;
break;
case 2:price=25;
break;
case 3:price=30;
break;
case 4:printf("-----------------------------\n");
return;
default:printf("Invalid option\n");
goto tea_menu;
}
printf("enter the quantity\n");
scanf("%d",&quantity);
total=total+price*quantity;
printf("your total bill is:%d\n",total);
printf("------------------------------------\n");
return;
}
void paymentmenu()
{
int op;
payment:
printf("Payment type:-\n");
printf("1.Cash\n");
printf("2.UPI\n");
printf("3.Card\n");
printf("4.Back\n");
printf("Enter the sub option\n");
scanf("%d",&op);
switch(op)
{
case 1:printf("payment done by Cash\n");
break;
case 2:printf("payment done by UPI\n");
break;
case 3:printf("payment done by card\n");
break;
case 4:printf("---------------------------------\n");
return;
default:printf("Invalid option\n");
goto payment;
}
printf("Your final bill : %d\n",total);
printf("Visit again THANK YOU\n");
}
