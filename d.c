/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:25:53 by marvin            #+#    #+#             */
/*   Updated: 2020/09/26 16:25:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	A;
	int	i = 1;

	scanf("%d", &A);
	printf("1");
	while (++i <= A)
	{
		if (!(30 % (i + 1)))
			printf("\n%d", i);
	}
	return (0);
}