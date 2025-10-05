void main()
{
	int year=1900;
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("The year is Leap");
	}
	else
	{
		printf("The year is not Leap");
	}
}