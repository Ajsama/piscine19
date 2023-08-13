/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:48:19 by aanson            #+#    #+#             */
/*   Updated: 2023/08/13 21:50:11 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "letsgo";
	char src1[] = "letsgo";
	char dest[] = "abiel";
	char dest1[] = "abiel";
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src1));
}*/
 