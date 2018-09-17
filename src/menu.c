#include "Vshuman.h"
#include "Vscomp.h"

void menu (){
printf ("World of batleships \n Please chose type of game \n 1 : 2 players \n 2 : VS Computer\n");
int n;
scanf("%d", &n);
switch(n){
case 1: system("CLS");
Vshuman(); break;
case 2: system("CLS");
Vscomp(); break;
default : system("CLS");
menu();
} 
