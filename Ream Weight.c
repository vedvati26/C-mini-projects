//Ream Weight
#include<stdio.h>
int main()
{
	int l,b,gsm;
	float w;
	printf("\nEnter Length of Paper(in Inches): ");
	scanf("%d",&l);
	printf("\nEnter Breadth of Paper(in Inches): ");
	scanf("%d",&b);
	printf("\nEnter Basic Paper Weight(in GSM): ");
	scanf("%d",&gsm);
	
	w = (float)(l*b*gsm)/3100;
	
	printf("\nThe Weight of 1 Ream of %d*%d %d GSM Paper is %f kg",l,b,gsm,w);
	return 0;
}
