/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:01:20 by aanson            #+#    #+#             */
/*   Updated: 2023/08/09 14:02:15 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int tm ;

    // La fonction commence ici, elle prend en entrée un tableau d'entiers (tab) et sa taille (size).

    while (size >= 0)
    {
        // Cette boucle while fonctionne tant que la taille du tableau est supérieure ou égale à zéro.

        i = 0;
        // On initialise la variable "i" à zéro. Cette variable sera utilisée pour parcourir le tableau.

        while (i < size - 1)
        {
            // Cette boucle while parcourt le tableau.

            if (tab[i] > tab[i + 1])
            {
                // Si l'élément actuel est plus grand que l'élément suivant dans le tableau...

                tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
                // ...alors on échange les positions des éléments en utilisant une variable temporaire "tmp".
            }
            i++;
            // On passe à l'élément suivant dans le tableau.
        }
        size--;
        // À la fin de cette boucle, l'élément le plus grand a été déplacé à la fin du tableau. On réduit la taille du tableau de 1 pour ne pas réexaminer l'élément déjà trié à la fin du tableau.
    }
}

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Tableau avant le tri : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Appel de la fonction de tri
    ft_sort_int_tab(arr, size);

    printf("Tableau après le tri : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
