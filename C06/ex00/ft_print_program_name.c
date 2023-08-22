/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:31:19 by aanson            #+#    #+#             */
/*   Updated: 2023/08/22 20:59:05 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
=======
/*   By: abiel-jason <abiel-jason@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 01:27:35 by abiel-jason       #+#    #+#             */
/*   Updated: 2023/08/18 02:56:35 by abiel-jason      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
>>>>>>> ccf1d683b596455578ef18632d3c3a1b9fbb0942

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
<<<<<<< HEAD
	if (argc > 0)
		write(1, argv[0], ft_strlen(argv[0]));
	write(1, "\n", 1);
=======
	if (argc > 0) 
    write(1, argv[0], ft_strlen(argv[0]));
    write(1, "\n", 1);
>>>>>>> ccf1d683b596455578ef18632d3c3a1b9fbb0942
}
