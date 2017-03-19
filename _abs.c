int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}

int negative_copy(char *buffer, int index)
{
	buffer[index] = '-';
	index++;

	return (index);
}
