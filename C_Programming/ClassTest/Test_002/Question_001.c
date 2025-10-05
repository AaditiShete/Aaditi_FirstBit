void main()
{
	int units=20,cal;
	if(units<50)
	{
		cal=units*30;
		printf("The electricity bill is %d\n",cal);
	}
	else
	{
		if(units<150 && units>51)
		{
		cal=units*40;
		printf("The electricity bill is %d\n",cal);	
		}
		else
		{
			if(units>151)
			{
				cal=units*50;
				printf("The electricity bill is %d\n ",cal);	
			}
		}
	}
}