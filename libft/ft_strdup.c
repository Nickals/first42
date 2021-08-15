#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	char	*str1;
	size_t	n;

	str1 = (char*)s1;
	n = 0;
	result = (char*)malloc(ft_strlen(str1) + 1);
	if (result == NULL)
		return (NULL);
	while (str1[n] != '\0')
	{
		result[n] = str1[n];
		n++;
	}
	result[n] = '\0';
	return (result);
}
