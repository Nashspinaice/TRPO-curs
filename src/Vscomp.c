void Vscomp (){
#include "fieldfull.c"

int field1[12][12], field2[12][12], checkcomp[10][10], compax, compay;
char fielda1[12][12], fielda2[12][12];
int h1=20, h2=20, ax=0, ay=0, schx=0, schy=0, check, voz;
printf("Please place your ships player ! \n Press any key to continue");
std::cin.ignore();
system("CLS");
fieldfull1(field1);
std::cin.ignore();
system("CLS");
for (schy=0; schy<=10;schy++){
field1[0][schy]=schy;
field1[schy][0]=schy;
field2[0][schy]=schy;
field2[schy][0]=schy;
}
printf("Press any key to start the game");
std::cin.ignore();
Fieldfullcomp(field2);
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

//fielda1[0][10]='10';
//fielda2[10][0]='10';
for(schx=1;schx<=10;schx++){
for(schy=1;schy<=10;schy++){
checkcomp[schx][schy]=0;
}
}
while (h1!=0 || h2 !=0){
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
h2--;
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
/*for (schy=0;schy<=10;schy++)
{
printf("\n");
for (schx=1;schx<=10;schx++)
{
printf("%c",fielda2[schx][schy]);
}
}
for
(schy=0;schy<=10;schy++)
{
printf("\n");
for (schx=1;schx<=10;schx++)
{
printf("%d",field2[schx][schy]);
}
}
*/
//ìàññèâ ïðîâåðêè íå çàäàí 0!!!!
for (schx=0; schx<10; schx++){
for (schy=0;schy<10;schy++){
checkcomp[schx][schy]=0;
}
}
check=1;
while (check == 1){
compax=rand()%10;
compay=rand()%10;
voz=0;
if (checkcomp[compax][compay]=1){
voz=1;
printf("Check");
std::cin.ignore();
system("CLS");
break;
}
checkcomp[compax][compay]=1;
if (voz==0){
if (field1[compax][compay]==0){
field1[compax][compay]=9;
check--;
printf("miss");
std::cin.ignore();
system("CLS");
}
if (field1[compax][compay]==1){
//fielda2[compax][compay]='*';
field1[compax][compay]=9;
printf("done");
std::cin.ignore();
system("CLS");
}
}
}
}
}
void Fieldfullcomp(int field2[12][12]){
int xy, yx;
for (int n = 10; n>0; n--){
if (n>9){
xy=rand()%6;
yx=rand()%10;
field2[xy][yx]=1;
field2[xy+1][yx]=1;
field2[xy+2][yx]=1;
field2[xy+3][yx]=1;
}
if (n>7 && n<=9){
xy=rand()%7;
yx=100%(rand()%10-10);
field2[xy][yx]=1;
field2[xy+1][yx]=1;
field2[xy+2][yx]=1;
}
if (n>4 && n<=7){
xy=rand()%8;
yx=100%(rand()%10-10);
field2[xy][yx]=1;
field2[xy+1][yx]=1;
}
else{
xy=rand()%8;
yx=100%(rand()%10-10);
field2[xy][yx]=1;
}
}
}
