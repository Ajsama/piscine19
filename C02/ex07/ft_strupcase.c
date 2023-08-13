/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:29:06 by aanson            #+#    #+#             */
/*   Updated: 2023/08/13 22:44:01 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strupcase(char *str)
{
    int i; // Déclaration de la variable i pour l'itération.

    i = 0; // Initialisation de i à 0.

    // Boucle pour parcourir tous les caractères de la chaîne str.
    while (str[i] != '\0')
    {
        // Vérifie si le caractère actuel est une lettre minuscule ('a' à 'z').
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32; // Convertit le caractère en sa forme majuscule en ajustant le code ASCII.
        }
        i++; // Passe au caractère suivant.
    }

    return (str); // Renvoie un pointeur vers la chaîne modifiée.
}
