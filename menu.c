#include "header.h"

int menu(void){
	int num;
	char color[8];
	gotoxy(12,30);
	printf("1. Draw triangle");
	gotoxy(13,30);
	printf("2. Draw circle");
	gotoxy(14,30);
	printf("3. Draw rectangle");
	gotoxy(15,30);
	printf("4. Draw square");
	gotoxy(16,30);
	printf("5. Draw horizontal line");
	gotoxy(17,30);
	printf("6. Draw intersecting lines");
	gotoxy(12, 60);
//Change these colors so that you choose with a number instead of char
	printf("BLACK");
	gotoxy(13, 60);
	printf("RED");
	gotoxy(14, 60);
	printf("GREEN");
	gotoxy(15, 60);
	printf("YELLOW");
	gotoxy(16, 60);
	printf("BLUE");
	gotoxy(17, 60);
	printf("CYAN");
	gotoxy(18, 60);
	printf("MAGENTA");
	gotoxy(19, 60);
	printf("WHITE");

	gotoxy(18,30);
	printf("   Choose: ");
	scanf("%d", &num);

	if(num>0&&num<7){
		gotoxy(20,60);
		printf("\nChoose color: ");
		scanf("%s", &color);
	}
	setColor(color);
	return num;
}
