#include "libft.h"
/*
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n)
	{
		if ((s2[i] == 0 && s1[i] == 0) || i == (n - 1))
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n && (s1[i] == '\0' || s2[i] == '\0'))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}