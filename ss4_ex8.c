#include <stdio.h>

int main()
{
	int edge1, edge2, edge3;
	printf("nhap vao lan luot 3 canh tam giac: ");
	scanf("%d %d %d", &edge1, &edge2, &edge3);
	if(edge1>0 && edge2>0 && edge3>0 && (edge1 > edge2 + edge3) && (edge2 > edge1 + edge3) && (edge3 > edge2 + edge1)){
		printf("%d %d %d la 3 canh cua 1 tam giac", edge1, edge2, edge3);
	}else{
		printf("%d %d %d khong la 3 canh cua 1 tam giac", edge1, edge2, edge3);
	}
	return 0;
}

