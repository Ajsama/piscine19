/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:58:19 by aanson            #+#    #+#             */
/*   Updated: 2023/08/14 18:01:52 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

	int i;
i = 0;

{
	if (str[i] == '/0')
	{
		return (1);
	}

	while (stri[i] != '/0')
	{
		if (str[i] >= 32 && str[i] <= 126)

			i++;
	}

	else
	{
		return (0);
	}

	return (1);
}