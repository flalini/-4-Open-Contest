/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 14:51:16 by marvin            #+#    #+#             */
/*   Updated: 2020/09/26 14:51:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	s[300][300];
	int	N, i, j, x, y, tmp;
	int	result = -1000;

	scanf("%d", &N);
	i = -1;
	while (++i < N)
	{
		j = -1;
		while (++j < N)
		{
			scanf("%d", &(s[i][j]));
			if (s[i][j] > result)
				result = s[i][j];
		}
	}
	i = -1;
	while (++i < N - 1)
	{
		j = -1;
		while (++j < N - 1)
		{
			tmp = 1;
			while (tmp + i < N && tmp + j < N)
			{
				x = i + tmp;
				y = j + tmp;
				s[i][j] += s[x][y];
				while (--y >= j)
				{
					s[i][j] += s[x][y];
				}
				y = j + tmp;
				while (--x >= i)
				{
					s[i][j] += s[x][y];
				}
				if (s[i][j] > result)
					result = s[i][j];
				++tmp;
			}
		}
	}
	printf("%d", result);
	return (0);
}