#include "fieldfull.c"

void Vshuman(){
int field1[12][12], field2[12][12];
char fielda1[12][12], fielda2[12][12];
int h1=20, h2=20, ax=0, ay=0, schx=0, schy=0, check;
printf("Please place your ships player 1! \n Press any key to continue");
std::cin.ignore();
system("CLS");
fieldfull1(field1);
system("CLS");
printf("Please place your ships player 2! \n Press any key to continue");
std::cin.ignore();
system("CLS");
fieldfull1(field2);
for (schy=0; schy<=10;schy++){
field1[0][schy]=schy;
field1[schy][0]=schy;
field2[0][schy]=schy;
field2[schy][0]=schy;
}
printf("Press any key to start the game");
std::cin.ignore();
for (schx=1;schx<=10;schx++){
for (schy=1;schy<=10;schy++){
fielda1[schx][schy]='-';
fielda2[schx][schy]='-';
}
}
for (schy=0; schy<=9;schy++){
fielda1[0][schy]=48+schy;
fielda1[schy][0]=48+schy;
fielda2[0][schy]=48+schy;
fielda2[schy][0]=48+schy;
}
h1 =20; h2=20;
while ((h1 != 0) || (h2 != 0)){
system("CLS"); //////////////////////////// ïåðâûé èãðîê
for (schy=0;schy<=10;schy++){
printf("\n");
for (schx=0;schx<=10;schx++){
printf("%c",fielda1[schx][schy]);
}
}
printf("\n\n");
for (schy=0;schy<=10;schy++){
printf("\n");
for (schx=0;schx<=10;schx++){
printf("%d",field1[schx][schy]);
}
}
check=1;
while (check == 1){
printf("\nAttack of the first player:");
scanf("%d%d", &ax, &ay);
if (field2[ax][ay]==0){
fielda1[ax][ay]='+';
system("CLS");
printf("Miss, next player");
check--;
}
if (field2[ax][ay]==1){
fielda1[ax][ay]='*';
field2[ax][ay]=0;
printf("You hit it!\n One more shoot!");
std::cin.ignore();
system("CLS");
for (schy=1;schy<=10;schy++){
printf("\n");
for (schx=0;schx<=10;schx++){
printf("%c",fielda1[schx][schy]);
}
}
printf("\n\n");
for (schy=0;schy<=10;schy++){
printf("\n");
for (schx=1;schx<=10;schx++){
printf("%d",field1[schx][schy]);
}
}
}
}
std::cin.ignore();
system("CLS"); //////////////////////////// âòîðîé èãðîê
for (schy=0;schy<=10;schy++){
printf("\n");
for (schx=1;schx<=10;schx++){
printf("%c",fielda2[schx][schy]);
}
}
for (schy=0;schy<=10;schy++){
printf("\n");
for (schx=1;schx<=10;schx++){
printf("%d",field2[schx][schy]);
}
}
check=1;
while (check == 1){
printf("\nAttack of the second player:");
scanf("%d%d", &ax, &ay);
if (field1[ax][ay]==0){
fielda2[ax][ay]='+';
system("CLS");
printf("Miss, next player");
check--;
}
if (field1[ax][ay]==1){
fielda2[ax][ay]='*';
field1[ax][ay]=0;
printf("You hit it!\n One more shoot!");
std::cin.ignore();
system("CLS");
for (schy=0;schy<=10;schy++){
printf("\n");
for (schx=1;schx<=10;schx++){
printf("%c",fielda2[schx][schy]);
}
}
for (schy=0;schy<=10;schy++){
printf("\n");
for (schx=1;schx<=10;schx++){
printf("%d",field2[schx][schy]);
}
}

}
}
std::cin.ignore();
}
printf("Nice play!");
} 
