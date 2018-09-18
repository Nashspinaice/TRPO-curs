#include "Fieldfullcomp.h"
int Fieldfullcomp(int field2[12][12]){
int xy, yx, num;
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
for (int p=0; p<10;p++){
for (int o=0; o<10;o++){
if (field[p][o]=1)
num++;
}
}
return num;
}
