#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,sum;/*宣告整數值a,b,sum*/ 

	
	printf("number1\n"); //輸入一個數字
	scanf("%d",&a);
	
	printf("number2\n");
	scanf("%d",&b);
	
	sum=a+b;/*兩個數字總和*/ 
	
	printf("sum=%d\n",sum);/*顯示相加後結果*/ 
	
	return 0;
}
