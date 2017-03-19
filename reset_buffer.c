void reset_buffer(char *buffer, int size)
{
	int i;

	for (i = 0; i < size; i++)
		buffer[i] = 0;
}
