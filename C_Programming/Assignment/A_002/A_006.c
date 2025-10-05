void main()
{
	int no=15;
	if(no%3==0 && no%5==0)
	{
		printf("Divisible by both 3 and 5");
	}
	else
	{
		if(no%=3)
		{
			printf("Divisible by 3 only");
		}
		else 
		{
			if(no%=5)
			{
				printf("divisible by 5 only");
			}
			else
			{
				printf("divisible by none ");
			}
		
		}
		
	}
	
}