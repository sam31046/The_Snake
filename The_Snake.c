//³g¦Y³D
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "utilwin32.h"

int main()
{

  char snake[40][40];
  char food[40][40];
  char c;
  int w = 40;
  int h = 40;
  int i,j;
  int hp=1;
  int f=0,fx,fy;
  int score=0;
  int Time=45;
  int left=0,right=0;
  char map[55][42];
  char x[1][4]={0};
  char y[1][4]={0};
  char x1[1][4]={0};
  char x2[1][4]={0};
  char key;
  
  for(i=0;i<h;i++) {
		for (j = 0;j<w;j++) {
			if (i == 0 || j == 0 || i == h - 1 || j == w - 1) {map[i][j] = '*';}
			else {map[i][j] = ' ';}
	    	                     }
	                        }
  for(i=0;i<h;i++) {
		for (j = 0;j<w;j++) {
		                     printf("%c", map[i][j]);
		                    }
		printf("\n");
                    }
                    
  int  a1=20,b1=20;
       snake[a1][b1]='O';
       gotoxy(a1,b1);
       printf("%c",snake[a1][b1]);
  int  a2=20,b2=21;
       snake[a2][b2]='O';
       gotoxy(a2,b2);
       printf("%c",snake[a2][b2]);
  int  a3=20,b3=22;
       snake[a3][b3]='O';
       gotoxy(a3,b3);
       printf("%c",snake[a3][b3]);     
  int  a0,b0;     
   gotoxy(1,41);                  
   printf("Time:========================================");
while(hp==1){
   
   
   if(Time>5){
     
     gotoxy(Time,41);
     printf(" ");
     Time--;}
   if(Time==5){
        hp--;}
   
   while(f==0){
       do{
            fx = rand() % (39 - 1 + 1) + 1;
            fy = rand() % (39 - 1 + 1) + 1;
            }while((fx==a1&&fy==b1)||(fx==a2&&fy==b3)||(fx==a3&&fy==b3));
       
       gotoxy(fx,fy);
       food[fx][fy]='X';
       printf("%c",food[fx][fy]);
       f++;
               }
   if (kbhit()){
            
			c=getch();
			if (c == 'a'){
				 left++;}
				 
			if (c == 's'){
				left--;}
				}
   if(left>=4)
          {left=0;} 
   if(left<=-4)
          {left=0;}
   delay(200);       
   switch(left)
      {
        case 0:
              gotoxy(a1,b1);
              putchar(' ');
              gotoxy(a2,b2);
              putchar(' ');
              gotoxy(a3,b3);
              putchar(' ');
              
              a3=a2;
              b3=b2;
              snake[a3][b3]='O';
              gotoxy(a3,b3);
              printf("%c",snake[a1][b3]);
              
              a2=a1; 
              b2=b1;
              snake[a2][b2]='O';
              gotoxy(a2,b2);
              printf("%c",snake[a1][b2]);
              
              a1=a1;
              b1--;
              snake[a1][b1]='O';
              gotoxy(a1,b1);
              printf("%c",snake[a1][b1]);
            

              break;
        case -3:      
        case 1: 
              gotoxy(a1,b1);
              putchar(' ');
              gotoxy(a2,b2);
              putchar(' ');
              gotoxy(a3,b3);
              putchar(' ');
              
              a3=a2;
              b3=b2;
              snake[a3][b3]='O';
              gotoxy(a3,b3);
              printf("%c",snake[a3][b3]);
              
              a2=a1; 
              b2=b1;
              snake[a2][b2]='O';
              gotoxy(a2,b2);
              printf("%c",snake[a2][b2]);
              
              b1=b1;
              a1--;
              snake[a1][b1]='O';
              gotoxy(a1,b1);
              printf("%c",snake[a1][b1]);
            

              break;
        case -2:      
        case 2:
              gotoxy(a1,b1);
              putchar(' ');
              gotoxy(a2,b2);
              putchar(' ');
              gotoxy(a3,b3);
              putchar(' ');
              
              a3=a2;
              b3=b2;
              snake[a3][b3]='O';
              gotoxy(a3,b3);
              printf("%c",snake[a3][b3]);
              
              a2=a1; 
              b2=b1;
              snake[a2][b2]='O';
              gotoxy(a2,b2);
              printf("%c",snake[a2][b2]);
              
              a1=a1;
              b1++;
              snake[a1][b1]='O';
              gotoxy(a1,b1);
              printf("%c",snake[a1][b1]);
            
              break;
        case -1:       
        case 3:
              gotoxy(a1,b1);
              putchar(' ');
              gotoxy(a2,b2);
              putchar(' ');
              gotoxy(a3,b3);
              putchar(' ');
              
              a3=a2;
              b3=b2;
              snake[a3][b3]='O';
              gotoxy(a3,b3);
              printf("%c",snake[a3][b3]);
              
              a2=a1; 
              b2=b1;
              snake[a2][b2]='O';
              gotoxy(a2,b2);
              printf("%c",snake[a2][b2]);
              
              b1=b1;
              a1++;
              snake[a1][b1]='O';
              gotoxy(a1,b1);
              printf("%c",snake[a1][b1]);
                
              break; 
          }     
		  
    if((fx==a1)&&(fy==b1)){
          	f--;
          	score++;
		  }
	
    
    if((a1==1)||(a1==40)||(b1==1)||(b1==40)){
    	hp--;
	      }
          
    gotoxy(41,40);                  
    printf(" Score=%d HP=%d",score,hp);
}     
                           
//void food(int a,int b){
//int min=1,max=39;
//int fx = rand() % (max - min + 1) + min;
//int fy = rand() % (max - min + 1) + min;

//while((fx==a)&&(fy==b)){ 
//    int min=1,max=39;                 
//    int fx = rand() % (max - min + 1) + min;
//    int fy = rand() % (max - min + 1) + min;
//   };
    
//char food[40][40];
//food[fx][fy]='X';}
// gotoxy(fx,fx);
// printf("%c",food[fx][fy]);
 

 
 gotoxy(41,40);
 printf("Total Score=%d <GAME OVER>",score);
 
  getch();	
  return 0;

}
