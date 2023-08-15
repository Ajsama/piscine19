/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:40:41 by aanson            #+#    #+#             */
/*   Updated: 2023/08/15 15:09:57 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	printf("%d", ft_strcmp("test", "test1"));
	printf("\n%d", ft_strcmp("test", "te"));
	printf("\n%d", ft_strcmp("te", "test"));
	printf("\n%d", ft_strcmp("test", "test"));
}*/