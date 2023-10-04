/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:53:18 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/03 14:17:54 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit (int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>

int main()
{
	char c = 50;

	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
}
