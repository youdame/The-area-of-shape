#include <stdio.h>
int main(){
	// R1의 좌표
	int x1, y1, x2, y2;
	// R2의 좌표
	int x3, y3, x4, y4;
	
	// R3의 좌표
	int x5, y5, x6, y6;

	// R3의 면적
	int row, col;
	
	
	printf("사각형1의 좌표 입력 : ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	printf("사각형2의 좌표 입력 : ");
	scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

	if (x1 >= x4 || x3 >= x2|| y3 >= y2 || y1 >= y4)
		printf("겹치지 않는다.\n");
	else 

		if (x1 > x3)
			x5 = x1;
		else 
			x5 = x3;

		if (x2 < x4)
			x6 = x2;
		else 
			x6 = x4;

		if (y1 > y3)
			y5 = y1;
		else 
			y5 = y3;

		if (y2 < y4)
			y6 = y2;
		else 
			y6 = y4;

		row = x6 - x5;
		col = y6 - y5;

		printf("\n겹치는 부분의 좌표 = (%d, %d), (%d, %d)\n",x5, y5, x6, y6);
		printf("겹치는 부분의 면적 = %d\n", row * col);
		return 0;

}
