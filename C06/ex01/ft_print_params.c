/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:31:22 by aanson            #+#    #+#             */
/*   Updated: 2023/08/22 22:22:31 by aanson           ###   ########.fr       */
=======
/*   By: abiel-jason <abiel-jason@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 03:01:15 by abiel-jason       #+#    #+#             */
/*   Updated: 2023/08/18 13:34:23 by abiel-jason      ###   ########.fr       */
>>>>>>> ccf1d683b596455578ef18632d3c3a1b9fbb0942
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
<<<<<<< HEAD
{
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
=======

{
	int i;
	i = 1;
	if (argc > 1)

		while (i > argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
            i++;
		}
        return (0);
>>>>>>> ccf1d683b596455578ef18632d3c3a1b9fbb0942
}
