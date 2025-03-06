/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:11:07 by omadali           #+#    #+#             */
/*   Updated: 2024/10/05 15:58:46 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	free_malloc(char **f, int k)
{
	while (k-- > 0)
		free(f[k]);
	free(f);  // `f` dizisinin kendisini de serbest bırakmalısınız
}

static int	word_count(const char *s, char c)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0') // boşlukları atla
			i++;
		if (s[i] != c && s[i] != '\0') // kelime bul
		{
			count++;
			while (s[i] != c && s[i] != '\0') // kelimeyi geç
				i++;
		}
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int len = 0;

	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static int	wordsave(char **f, char const *s, char c, int i)
{
	int b;
	int k = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			b = word_len(&s[i], c);
			f[k] = (char *)malloc(sizeof(char) * (b + 1));
			if (!f[k])
			{
				free_malloc(f, k); // Hata durumunda tüm kelimeleri serbest bırak
				return (1);
			}
			// Kelimeyi kopyala
			for (int j = 0; j < b; j++)
				f[k][j] = s[i + j];
			f[k][b] = '\0'; // Sonlandırma
			i += b;
			k++;
		}
		else
			i++; // Boşlukları geç
	}
	f[k] = NULL; // Dizinin sonunu işaret et
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**f;
	int		i = 0;
	int		count;

	if (!s)
		return (NULL);
	count = word_count(s, c); // Kelime sayısını al
	f = (char **)malloc(sizeof(char *) * (count + 1));
	if (!f)
		return (NULL);
	if (wordsave(f, s, c, i) != 0)
	{
		free(f); // Eğer kelime kaydetme başarısız olursa, diziyi serbest bırak
		return (NULL);
	}
	return (f);
}
