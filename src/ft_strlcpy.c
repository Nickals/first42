size_t strlcpy(char * dest, const char * src, size_t size)
{
    int n;

    n = 0;
    if (size > 0)
    {
        while (src[n] != '\0')
        {
            if (n == size)
            {
                n--;
                break;
            }
            dest[n] = src[n];
            n++;
        }
    }
    dest[n] = '\0';
    while (src[n] != '\0')
        n++;
    return(n);
}