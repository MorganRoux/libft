int	isalpha(int c)
{
	return ((('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z')) ? 1 : 0);
}
