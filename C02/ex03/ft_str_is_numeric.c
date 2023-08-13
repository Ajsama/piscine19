/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:26:46 by aanson            #+#    #+#             */
/*   Updated: 2023/08/13 22:44:01 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int i; // Déclaration de la variable i pour l'itération.

    i = 0; // Initialisation de i à 0.

    // Boucle pour parcourir tous les caractères de la chaîne str.
    while (str[i] != '\0')
    {
        // Vérifie si le caractère actuel est un chiffre numérique (entre '0' et '9').
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return (0); // Si le caractère n'est pas un chiffre, renvoie 0.
        }
        i++; // Passe au caractère suivant.
    }

    return (1); // Si la boucle parcourt toute la chaîne sans rencontrer de caractères non numériques, renvoie 1.
}
