/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 14:01:12 by marvin            #+#    #+#             */
/*   Updated: 2020/09/26 14:01:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[30];
	char	str2[30];
	int		i;

	for (i = 0; i < 4; ++i)
		scanf("%s", str1);
	i = 0;
	while (1)
	{
		scanf("%s", str2);
		if (!strcmp(str2, "디버깅"))
			break ;
		if (!strcmp(str1, "문제"))
			++i;
		else
			--i;
		if (i < 0)
			i = 2;
		strcpy(str1, str2);
	}
	scanf("%s", str2);
	if (i)
		printf("힝구");
	else
		printf("고무오리야 사랑해");
	return (0);
}