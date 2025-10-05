void main()
{
	int marks=54;
	if(marks>75)
	{
		printf("Distinction");
	}
	else
	{
		if(marks>65)
		{
			printf("FirstClass");
		}
		else
		{
			if(marks>55)
			{
				printf("SecondClass");
			}
			else
			{
				if(marks>40)
				{
					printf("pass");
				}
				else
				{
					printf("Fail");
				}
			}
		}
		
	}
}