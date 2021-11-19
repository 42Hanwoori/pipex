/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whan <whan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:34:47 by whan              #+#    #+#             */
/*   Updated: 2021/11/20 02:57:57 by whan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int		end;

	cc = (char)c;
	end = ft_strlen(s);
	if (cc == '\0')
		return ((char *)&s[end]);
	while (end--)
		if (s[end] == cc)
			return ((char *)&s[end]);
	return (NULL);
}
