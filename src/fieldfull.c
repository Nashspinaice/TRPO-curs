void fieldfull(int field1[12][12]){
int k=10, y=1, x=1, n, xk, yk, rot=2;
for (xk=0; xk<=14; xk++){
for(yk=0; yk<=14; yk++)
field1[xk][yk]=0;
}
while (k>=1){
n=getch();
system("CLS");
switch(n){
case 55:{
if (k>9){
field1[x][y]=0;
field1[x+1][y]=0;
field1[x+2][y]=0;
field1[x+3][y]=0;
field1[x][y]=1;
field1[x][y+1]=1;
field1[x][y+2]=1;
field1[x][y+3]=1;
}
if (k>7){
field1[x][y]=0;
field1[x+1][y]=0;
field1[x+2][y]=0;
field1[x][y]=0;
field1[x][y+1]=0;
field1[x][y+2]=0;
}
if (k>4){
field1[x][y]=0;
field1[x+1][y]=0;
field1[x][y]=1;
field1[x][y+1]=1;
}
else {
printf("Rotate point? seriosly?");
}
rot++;
break;
}
case 56: //up//////////////////////////////////////////////////////////////////////////////////////
if (rot % 2 == 0){
y--;
if (k>9){
field1[x][y+1]=0;
field1[x+1][y+1]=0;
field1[x+2][y+1]=0;
field1[x+3][y+1]=0;
field1[x][y]=1;
field1[x+1][y]=1;
field1[x+2][y]=1;
field1[x+3][y]=1;
}
else{
if(k>7){
field1[x][y+1]=0;
field1[x+1][y+1]=0;
field1[x+2][y+1]=0;
field1[x][y]=1;
field1[x+1][y]=1;
field1[x+2][y]=1;
}
else{
if(k>4){
field1[x][y+1]=0;
field1[x+1][y+1]=0;
field1[x][y]=1;
field1[x+1][y]=1;
}
else{
field1[x][y+1]=0;
field1[x][y]=1;
}
}
}
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
}
else{
y--;
if (k>9){
field1[x][y+1]=0;
field1[x][y+2]=0;
field1[x][y+3]=0;
field1[x][y+4]=0;
field1[x][y]=1;
field1[x][y+1]=1;
field1[x][y+2]=1;
field1[x][y+3]=1;
}
else{
if(k>7){
field1[x][y+1]=0;
field1[x][y+2]=0;
field1[x][y+3]=0;
field1[x][y]=1;
field1[x][y+1]=1;
field1[x][y+2]=1;
}
else{
if(k>4){
field1[x][y+1]=0;
field1[x][y+2]=0;
field1[x][y]=1;
field1[x][y+1]=1;
}
else{
field1[x][y+1]=0;
field1[x][y]=1;
}
}
}
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
}
break;
case 54: //right//////////////////////////////////////////////////////////////////////////////////////
if (rot % 2 == 0){
x++;
if (k>9){
field1[x-1][y]=0;
field1[x-2][y]=0;
field1[x-3][y]=0;
field1[x-4][y]=0;
field1[x][y]=1;
field1[x+1][y]=1;
field1[x+2][y]=1;
field1[x+3][y]=1;
}
else{
if(k>7){
field1[x-1][y]=0;
field1[x-2][y]=0;
field1[x-3][y]=0;
field1[x][y]=1;
field1[x+1][y]=1;
field1[x+2][y]=1;
}
else{
if(k>4){
field1[x-1][y]=0;
field1[x-2][y]=0;
field1[x][y]=1;
field1[x+1][y]=1;
}
else{
field1[x-1][y]=0;
field1[x][y]=1;
}
}
}
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
}
else{
x++;
if (k>9){
field1[x-1][y]=0;
field1[x-1][y+1]=0;
field1[x-1][y+2]=0;
field1[x-1][y+3]=0;
field1[x][y]=1;
field1[x][y+1]=1;
field1[x][y+2]=1;
field1[x][y+3]=1;
}
else{
if(k>7){
field1[x-1][y]=0;
field1[x-1][y+1]=0;
field1[x-1][y+2]=0;
field1[x][y]=1;
field1[x][y+1]=1;
field1[x][y+2]=1;
}
else{
if(k>4){
field1[x-1][y]=0;
field1[x-1][y+1]=0;
field1[x][y]=1;
field1[x][y+1]=1;
}
else{
field1[x-1][y]=0;
field1[x][y]=1;
}
}
}
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
}
break;
case 52: //light//////////////////////////////////////////////////////////////////////////////////////
if (rot % 2 == 0){
x--;
if (k>9){
field1[x+4][y]=0;
field1[x+3][y]=0;
field1[x+2][y]=0;
field1[x+1][y]=0;
field1[x][y]=1;
field1[x+1][y]=1;
field1[x+2][y]=1;
field1[x+3][y]=1;
}
else{
if(k>7){
field1[x+3][y]=0;
field1[x+2][y]=0;
field1[x+1][y]=0;
field1[x][y]=1;
field1[x+1][y]=1;
field1[x+2][y]=1;
}
else{
if(k>4){
field1[x+2][y]=0;
field1[x+1][y]=0;
field1[x][y]=1;
field1[x+1][y]=1;
}
else{
field1[x+1][y]=0;
field1[x][y]=1;
}
}
}
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
}
else{
x--;
if (k>9){
field1[x+1][y]=0;
field1[x+1][y+1]=0;
field1[x+1][y+2]=0;
field1[x+1][y+3]=0;
field1[x][y]=4;
field1[x][y+1]=4;
field1[x][y+2]=4;
field1[x][y+3]=4;
}
else{
if(k>7){
field1[x+1][y]=0;
field1[x+1][y+1]=0;
field1[x+1][y+2]=0;
field1[x][y]=1;
field1[x][y+1]=1;
field1[x][y+2]=1;
}
else{
if(k>4){
field1[x+1][y]=0;
field1[x+1][y+1]=0;
field1[x][y]=1;
field1[x][y+1]=1;
}
else{
field1[x+1][y]=0;
field1[x][y]=1;
}
}
}
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
}
break;
case 50: //down//////////////////////////////////////////////////////////////////////////////////////
if (rot % 2 == 0){
y++;
if (k>9){
field1[x+3][y]=1;
field1[x+3][y-1]=0;
field1[x+2][y]=1;
field1[x+2][y-1]=0;
field1[x+1][y]=1;
field1[x+1][y-1]=0;
field1[x][y]=1;
field1[x][y-1]=0;
}
else{
if (k>7){
field1[x+2][y]=1;
field1[x+2][y-1]=0;
field1[x+1][y]=1;
field1[x+1][y-1]=0;
field1[x][y]=1;
field1[x][y-1]=0;
}
else{
if (k>4){
field1[x+1][y]=1;
field1[x+1][y-1]=0;
field1[x][y]=1;
field1[x][y-1]=0;
}
else{
field1[x][y]=1;
field1[x][y-1]=0;
}
}
}
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
}
else{
y++;
if (k>9){
field1[x][y-1]=0;
field1[x][y-2]=0;
field1[x][y-3]=0;
field1[x][y-4]=0;
field1[x][y]=1;
field1[x][y+1]=1;
field1[x][y+2]=1;
field1[x][y+3]=1;
}
else{
if (k>7){
field1[x][y-1]=0;
field1[x][y-2]=0;
field1[x][y-3]=0;
field1[x][y]=1;
field1[x][y+1]=1;
field1[x][y+2]=1;
}
else{
if (k>4){
field1[x][y-1]=0;
field1[x][y-2]=0;
field1[x][y]=1;
field1[x][y+1]=1;
}
else{
field1[x][y-1]=0;
field1[x][y]=1;
}
}
}
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
}
break;
case 53: {//confirm//////////////////////////////////////////////////////////////////////////////////////
if (rot % 2 == 0){
if(k>9){
if(field1[x-1][y-1]==0&&field1[x][y-1]==0&&field1[x+1][y-1]==0&&field1[x+2][y-1]==0&&
field1[x+3][y-1]==0&&field1[x+4][y-1]==0&&field1[x+4][y]==0&&field1[x+4][y+1]==0&&
field1[x+3][y+1]==0&&field1[x+2][y+1]==0&& field1[x+1][y+1]==0&&field1[x][y+1]==0&&
field1[x-1][y+1]==0&&field1[x-1][y]==0){
k--;
x=1;
y=1;
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
break;
}
else{
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
printf("INVAID PLASE PRESS ANY KEY TO CONTINUE");
getch();
break;
}
}
if(k>7){
if(field1[x-1][y-1]==0&&field1[x][y-1]==0&&field1[x+1][y-1]==0&&field1[x+2][y-1]==0&&
field1[x+3][y-1]==0&&field1[x+3][y]==0&&field1[x+3][y+1]==0&&field1[x+2][y+1]==0&&
field1[x+1][y+1]==0&&field1[x][y+1]==0&&field1[x-1][y+1]==0&&field1[x-1][y]==0){
k--;
x=1;
y=1;
break;
}
else{
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
printf("INVAID PLASE PRESS ANY KEY TO CONTINUE");
getch();
break;
}
}
if(k>4){
if(field1[x-1][y-1]==0&&
field1[x][y-1]==0&&field1[x+1][y-1]==0&&field1[x+2][y-1]==0&&field1[x+2][y]==0&&
field1[x+2][y+1]==0&&field1[x+1][y+1]==0&&field1[x][y+1]==0&&field1[x-1][y+1]==0&&
field1[x-1][y]==0){
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++)
{printf("%d", field1[yk][xk]);}
printf("\n");
}
k--;
x=1;
y=1;
break;
}
else{
printf("INVAID PLASE PRESS ANY KEY TO CONTINUE");
getch();
break;
}
}
else{
if(field1[x-1][y-1]==0&&field1[x][y-1]==0&&field1[x+1][y-1]==0&&field1[x+1][y]==0&&
field1[x+1][y+1]==0&&field1[x][y+1]==0&&field1[x-1][y+1]==0&&field1[x-1][y]==0){
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
k--;
x=1;
y=1;
break;
}
else{
printf("INVAID PLASE PRESS ANY KEY TO CONTINUE");
getch();
break;
}
}
}
else{
for (xk=1; xk<=10; xk++){
for(yk=1; yk<=10; yk++){
printf("%d", field1[yk][xk]);}
printf("\n");
}
k--;
x=1;
y=1;
break;
}
}
}
}

} 
