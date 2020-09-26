/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:28:19 by marvin            #+#    #+#             */
/*   Updated: 2020/09/26 15:28:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gcd(int k, int l)
{
	return (l ? gcd(l, k % l) : k);
}

int	lcm(int k, int l)
{
	return (k / gcd(k, l) * l);
}

int	main(void)
{
	int	N;
	int	tmp;
	int	result[2];
	int	i = -1;
	int	s[50][2];

	scanf("%d", &N);
	while (++i < N)
	{
		scanf("%d %d", &(s[i][0]), &(s[i][1]));
		tmp = gcd(s[i][0], s[i][1]);
		if (tmp != 1)
		{
			s[i][0] /= tmp;
			s[i][1] /= tmp;
		}
	}
	result[0] = s[--i][1];
	while (i)
		result[0] = lcm(result[0], s[--i][1]);
	--i;
	while (++i < N)
		s[i][0] *= result[0] / s[i][1];
	result[1] = s[--i][0];
	while (i)
		result[1] = gcd(result[1], s[--i][0]);
	tmp = gcd(result[0], result[1]);
	if (tmp != 1)
	{
		result[0] /= tmp;
		result[1] /= tmp;
	}
	printf("%d %d", result[1], result[0]);
	return (0);
}