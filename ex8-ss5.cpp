#include<stdio.h>
int main(){
	int a,b,i=1,kiem_tra=0;
	printf("nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("nhap so thu hai:\n");
	scanf("%d",&b);
	while( kiem_tra==0)
	{
		i++;
		if(a>b){
			if(i>a){
				printf("Hai so khong co boi chung nho nhat");
				kiem_tra=1;
			}
		} else {
			if(a<=b){
				if(i>b){
					printf("Hai so khong co boi chung nho nhat");
					kiem_tra=1;
					}
				}
		}
		if(a%i==0 && b%i==0){
		    printf("Boi chung nho nhat cua 2 so vua nhap vao la:%d",i);
		    kiem_tra = 1;
		}
	}
		return 0;
}
		
