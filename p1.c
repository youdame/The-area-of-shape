#include <stdio.h>
int main(){
	int x1, x2, y1, y2;
	int row, col;
	printf("사각형의 좌표(x1 y1 x2 y2) : ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	row = x2 - x1;
	col = y2 - y1;

	printf("사각형의 면적 = %d\n", row * col);
	return 0;

}
