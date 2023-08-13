/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:21:57 by aanson            #+#    #+#             */
/*   Updated: 2023/08/13 22:23:23 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

{
    int i; // Déclaration de la variable i pour l'itération.

    i = 0; // Initialisation de i à 0.

    // Si le premier caractère de la chaîne est '\0', cela signifie que la chaîne est vide, donc elle est considérée comme valide (composée uniquement de lettres).
    if (str[i] == '\0')
    {
        return (1);
    }

    // Boucle pour parcourir tous les caractères de la chaîne str.
    while (str[i] != '\0')
    {
        // Vérifie si le caractère actuel est une lettre majuscule ('A' à 'Z') ou une lettre minuscule ('a' à 'z').
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            i++; // Si le caractère est une lettre, passe au caractère suivant.
        }
        else
        {
            return (0); // Si le caractère n'est pas une lettre, renvoie 0 (la chaîne n'est pas composée uniquement de lettres).
        }
    }

    return (1); // Si la boucle parcourt toute la chaîne sans rencontrer de caractères non alphabétiques, renvoie 1.
}
