/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:07:39 by kkara             #+#    #+#             */
/*   Updated: 2020/07/17 09:46:19 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int 	i;

	i = 0;
	while (i < n && src[i] ! = NULL)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
