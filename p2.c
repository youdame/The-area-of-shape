#include <stdio.h>
int main(){
	int x1, x2, x3, x4;
	int y1, y2, y3, y4;
	int row, col;
	
	printf("사각형1의 좌표 입력 : ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	printf("사각형2의 좌표 입력 : ");
	scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

	if (x1 >= x4 || x3 >= x2|| y3 >= y2 || y1 >= y4)
		printf("겹치지 않는다.\n");
	else 
		printf("겹친다.\n");

	return 0;

}