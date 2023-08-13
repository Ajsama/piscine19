/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_printable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:29:13 by aanson            #+#    #+#             */
/*   Updated: 2023/08/13 22:44:01 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    int i; // Déclaration de la variable i pour l'itération.

    i = 0; // Initialisation de i à 0.

    // Boucle pour parcourir tous les caractères de la chaîne str.
    while (str[i] != '\0')
    {
        // Vérifie si le caractère actuel est un caractère imprimable (code ASCII entre 32 et 126 inclus).
        if (!(str[i] >= 32 && str[i] <= 126))
        {
            return (0); // Si le caractère n'est pas imprimable, renvoie 0.
        }
        i++; // Passe au caractère suivant.
    }

    return (1); // Si la boucle parcourt toute la chaîne sans rencontrer de caractères non imprimables, renvoie 1.
}
