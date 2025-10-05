void main()
{
	int s1=10,s2=10,s3=30;
	if(s1==s2 && s2==s3)
	{
		printf("This is Equilateral Triangle");
	}
	else
	{
		if(s1==s2 || s2==s3 || s1==s3)
		{
			printf("This is isosceles Triangle");
		}
		else
		{
			printf("This is Scalene Triangle");
		}
	}
}