/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whan <whan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:12:09 by whan              #+#    #+#             */
/*   Updated: 2021/11/20 02:57:57 by whan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*uc_dst;
	const unsigned char	*uc_src;
	unsigned char		uc_c;
	size_t				i;

	uc_dst = (unsigned char *)dst;
	uc_src = (const unsigned char *)src;
	uc_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		uc_dst[i] = uc_src[i];
		if (uc_src[i] == uc_c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
