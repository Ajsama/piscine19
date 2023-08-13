/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:28:59 by aanson            #+#    #+#             */
/*   Updated: 2023/08/13 22:44:01 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
    int i; // Déclaration de la variable i pour l'itération.

    i = 0; // Initialisation de i à 0.

    // Boucle pour parcourir tous les caractères de la chaîne str.
    while (str[i] != '\0')
    {
        // Vérifie si le caractère actuel est une lettre majuscule ('A' à 'Z').
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32; // Convertit le caractère en sa forme minuscule en ajustant le code ASCII.
        }
        i++; // Passe au caractère suivant.
    }

    return (str); // Renvoie un pointeur vers la chaîne modifiée.
}

// Cette fonction convertit la chaîne str en une forme capitalisée (première lettre de chaque mot en majuscule).
// Elle renvoie un pointeur vers la chaîne modifiée.
char *ft_strcapitalize(char *str)
{
    int i; // Déclaration de la variable i pour l'itération.
    int i1; // Variable de suivi pour savoir si le caractère actuel est le début d'un mot.

    i = 0; // Initialisation de i à 0.
    i1 = 1; // Initialisation de i1 à 1 (indiquant que le prochain caractère est le début d'un mot).

    ft_strlowcase(str); // Convertit d'abord tous les caractères en minuscules.

    // Boucle pour parcourir tous les caractères de la chaîne str.
    while (str[i] != '\0')
    {
        // Vérifie si le caractère actuel est une lettre minuscule ('a' à 'z').
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            // Si le caractère est le début d'un mot (i1 = 1), convertit le caractère en majuscule.
            if (i1 == 1)
                str[i] -= 32;

            i1 = 0; // Réinitialise i1 car le prochain caractère ne sera pas le début d'un mot.
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            i1 = 0; // Si le caractère est un chiffre, réinitialise i1.
        }
        else
        {
            i1 = 1; // Si le caractère n'est ni une lettre ni un chiffre, le prochain caractère sera le début d'un mot.
        }

        i++; // Passe au caractère suivant.
    }

    return (str); // Renvoie un pointeur vers la chaîne modifiée.
}
