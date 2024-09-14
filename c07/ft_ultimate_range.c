#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int *) malloc (sizeof(int) * (max - min));
	if (result == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	*range = result;
	return (i);
}

#include <stdio.h>
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\nsize of array: %i\n", size);
}
