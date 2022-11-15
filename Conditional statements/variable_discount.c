//Variable discount
 
 #include<stdio.h>
 void main()
 {
 	float discount;
 	int price;
 	printf("Enter price amount:");
 	scanf("%d",&price);
 	if(price<=1000)
 	{
 		discount=price/10;
	}
	else if(price>1000)
	{
		discount=100+(price-1000)*5/100;
	}
	printf("The discount amount is %.2f",discount);
 }