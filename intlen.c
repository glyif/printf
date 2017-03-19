int intlen(int n)
{
	int c;

	c = !n;

	while (n)
	{
		c++;
		n = n / 10;
	}

	return (c);
}
