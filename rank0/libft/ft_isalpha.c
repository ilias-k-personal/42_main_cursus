/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikolokou <ikolokou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:46:21 by ikolokou          #+#    #+#             */
/*   Updated: 2025/11/20 11:46:28 by ikolokou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) | (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
	
	printf("%c\n%d\n%d", *argv[1], *argv[1], ft_isalpha(*argv[1]));
	return 0;
}
*/
