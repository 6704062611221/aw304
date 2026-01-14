#include<stdio.h>
int main(){
	int r,c,x,i,j,temp;
	scanf("%d %d",&r,&c);
	int a[r+1][c+1];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			temp = temp + a[i][j];
		}
		a[i][c] = temp;
		temp = 0;
	}
	c=c+1;
	for(j=0;j<c;j++){
		for(i=0;i<r;i++){
			temp = temp + a[i][j];
		}
		a[r][j] = temp;
		temp = 0;
	}
	r=r+1;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
