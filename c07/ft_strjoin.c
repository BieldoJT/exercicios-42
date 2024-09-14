#include <stdlib.h>
int	ft_strslen(int size, char **str, char *sep)
{
	int	i;
	int	j;
	int	size_str;
	int	size_sep;

	size_sep = 0;
	while(sep[size_sep])
		size_sep++;
	size_str = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
			j++;
		size_str += j;
		if (i < size - 1)
			size_str += size_sep;
		i++;
	}
	return (size_str + 1);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char	*new_str;

	if(size == 0)
		new_str = (char *)malloc (1);
	else
		new_str = (char *) malloc (ft_strslen (size,strs,sep));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	new_str[0] = '\0';
	while(i < size)
	{
		ft_strcat(new_str,strs[i]);
		if (i < (size - 1))
			ft_strcat(new_str,sep);
		i++;
	}
	return (new_str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*tab[3];
	tab[0] = "This";
	tab[1] = "is";
	tab[2] = "Vasco\n";
	printf("%s", ft_strjoin(3, tab, " "));
	return (0);
}*/
