#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char *dest;

	i = 0;
	while(src[i])
		i++;
	dest = (char *) malloc (sizeof(char) * (i + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
