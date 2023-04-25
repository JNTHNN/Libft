/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:58:55 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/25 09:56:46 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static int ft_count_words(char const *s, char c)
{
	int	count;
	size_t i;

	count = 0;
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c )
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	size_t j;

	i = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2)
			return (0);
		ft_putword(s2[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = '\0';
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	unsigned int	num_words;

	if (!s)
		return (NULL);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (NULL);
	ft_split_words(s, c, s2, num_words);
	return (s2);
}
*/

static int ft_count_words(char const *s, char c)
{
	int count;
	int in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (in_word == 0 && *s != c)
		{
			in_word = 1;
			count++;
		}
		else if (in_word == 1 && *s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int ft_word_length(char const *s, char c)
{
	int length;

	length = 0;
	while (*s != '\0' && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

static char *ft_create_word(char const *s, int start, int end)
{
	char *word;
	int i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	char **split;
	int word_count;
	int word_length;
	int i;
	int j;

	if (!s)
	return (NULL);
	word_count = ft_count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (split == NULL)
	return (NULL);
	i = 0;
	j = 0;
	while (i < word_count)
	{
		while (s[j] == c)
			j++;
		word_length = ft_word_length(&s[j], c);
		split[i] = ft_create_word(s, j, j + word_length);
		if (split[i] == NULL)
			return (NULL);
		i++;
		j += word_length;
	}
	split[word_count] = NULL;
	return (split);
}
