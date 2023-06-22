#include<stdio.h>
#include<windows.h>
void main(){
	int h,m,s;
	int d=1000; //we add a delay of 1000 millisecond and we will use it in the function sleep
	printf("\033[1;32mSet time :\n");
	scanf("%d%d%d",&h,&m,&s);
	if(h>12||m>60||s>60){
		printf("Error !\n");
		exit(0);
	}
	while(1){  // This is an infinite loop and anything inside will repeat itself to infinity
		s++;
		if(s>59){
			m++;
			s=0;
		}
		if(m>59){
			h++;
			m=0;
		}
		if(h>12){
			h=1;
		}
		printf("\n\033[1;31m Clock:");
		printf("\n\033[1;36m%02d:%02d:%02d:",h,m,s); // This writes our time format 00:00:00
		Sleep(d); // The function sleep slow dow the while loop and it more like a real clock
		system("cls"); // This clears the screen
	}
}
