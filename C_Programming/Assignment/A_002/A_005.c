void main()
{
	double price=600,fprice;
	char ch='y';
	if(ch=='y')
	{
		if(price>=500)
		{
			fprice=price-price*0.20;
		}
		else
		{
			fprice=price-price*0.10;
		}
	}
	else
	{
		if(price>=600)
		{
			fprice=price-price*0.15;
		}
		else
		{
			fprice=price;
		}
	}
	printf("fprice is %lf",fprice);
}