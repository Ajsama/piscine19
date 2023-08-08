/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanson <aanson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:40:46 by aanson            #+#    #+#             */
/*   Updated: 2023/08/08 18:52:14 by aanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Déclaration de la fonction qui inverse les éléments d'un tableau d'entiers
void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	// Boucle pour inverser les éléments du tableau
	while (start < end)
	{
		temp = tab[start]; // Stocke la valeur de l'élément en début de tableau
		
        tab[start] = tab[end]; // Copie la valeur de l'élément en fin de tableau à la position de début
		tab[end] = temp;  // Copie la valeur stockée temporairement à la position de fin
		start++; // Avance le pointeur de début
		end--;   // Recule le pointeur de fin
	}
}

int	main(void)
{
	int	monTableau[];
	int	taille;

	monTableau[] = {10, 9, 3, 8, 6};
	// Tableau d'exemple
	taille = sizeof(monTableau) / sizeof(monTableau[0]);
	// Calcule la taille du tableau
	printf("Tableau original: ");
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", monTableau[i]);
		// Affiche les éléments du tableau original
	}
	ft_rev_int_tab(monTableau, taille);
	// Appelle la fonction pour inverser le tableau
	printf("\nTableau inversé: ");
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", monTableau[i]); // Affiche les éléments du tableau inversé
	}
	return (0);
}
