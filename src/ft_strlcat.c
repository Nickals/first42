size_t strlcat(char *dst, const char *src, size_t dstsize)
{
    int	n;
	int	c;
    int m;

	n = 0;
	c = 0;
    m = 0;
	while (dst[n] != '\0')
		n++;
    while (src[c] != '\0')
        c++;
	while (src[m] != '\0')
	{
		dst[n] = src[m];
		m++;
		n++;
        if (n==dstsize-1)
            break;
	}
	dst[n] = '\0';
	return (n+c);
}