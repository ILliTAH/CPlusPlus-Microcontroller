#include <stdio.h>
#include <conio.h>
#include <iostream>
#define SIZE 10

int gobaltime = 0;
int seventimex = 0;
int seventimey = 0;
int xtime[120];
int ytime[120];
int ztime[120];
int trtimex = 0;
int trtimey = 0;
int x,y;
int i;
bool c = true;


void stp_trtimex(){
trtimex = 0;

}

void str_trtimex(){
if(trtimex >= 3){   //check 3time x
trtimex = 0;
}
trtimex++;

}

void stp_trtimey(){
trtimey = 0;

}

void str_trtimey(){
 if(trtimey >= 3){
 trtimey = 0;
 }
trtimey++;

}


void print(){

printf(" \nGOBAL TIME: %d |",gobaltime);  printf(" 7TIME X: %d |",seventimex);
printf(" 7TIME Y: %d |" ,seventimey); printf(" 3TIME X: %d |",trtimex);
printf(" 3TIME Y: %d |",trtimey);

printf("\nX = ");
for(i=0;i<gobaltime;i++){
printf(" %d",xtime[i]);
}

printf("\nY = ");
for(i=0;i<gobaltime;i++){
printf(" %d",ytime[i]);
}

printf("\nZ = ");
for(i=0;i<gobaltime;i++){
printf(" %d",ztime[i]);
}




}

int main() {
while(c){
print();
printf("\nInsert X :");
scanf("%d",&x);
printf("\nInsert Y :");
scanf("%d",&y);

xtime[gobaltime] = x;
ytime[gobaltime] = y;



if(xtime[gobaltime] == 1){
str_trtimex();
     if(ytime[gobaltime] == 1){
            stp_trtimex();
     }


}
else {
       stp_trtimex();
      }
if(ytime[gobaltime] == 1){
str_trtimey();
     if(xtime[gobaltime] == 1){

            stp_trtimey();
     }

}
else {
	stp_trtimey();
}


if(x>=2||y>=2){

printf("\nError Input  Please Enter Only 0 or 1!");
getch();
return 0;

}

 gobaltime++;

 getch();
 clrscr();
}






getch();
}