/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:27:20 by kkara             #+#    #+#             */
/*   Updated: 2020/07/17 15:08:36 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			while (str[i + j] == to_find[j] )
			{
				++j;	
				if (to_find[j] == '\0')
				{
					return (&str[i]);
			    }
			}
	    }
		i++;
	}
	return (0);
}
int main()
{
	char str[] = "I bought a new car";
	char to_find[] = "car";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
