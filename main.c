#include "header.h"

int main(void){
	int num;
	clearScreen();
	while(1){
		gotoxy(10,0);
		//Menu
		printf("1. Draw triangle\n");
		printf("2. Draw circle\n");
		printf("3. Draw rectangle\n");
		printf("4. Draw square\n");
		printf("5. Draw horizontal line\n");
		printf("6. Draw intersecting lines\n");
		printf("Press any other number to exit!!\n");
		scanf("%d", &num);
		if(num==1)
			drawTriangle();
		else if(num==2)
			drawCircle();
		else if(num==3)
			drawRectangle();
		else if(num==4)
			drawSquare();
		else if(num==5)
			drawLine(1);
		else if(num==6)
			drawInter();
		else break;
		}
		return 0;
}
