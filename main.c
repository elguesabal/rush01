/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:58:23 by joseanto          #+#    #+#             */
/*   Updated: 2023/08/06 10:12:34 by wfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	set_number(int **set_num);
int	set_number_up(int up1, int up2, int up3, int up4, int **set_n);
int	set_number_down(int down1, int down2, int down3, int down4, int **set_n);
int	set_number_left(int left1, int left2, int left3, int left4, int **set_n);
int	set_number_right(int right1, int right2, int right3, int right4, int **set_n);

int	main()
{
	// simulei o recebimento dos argumentos da funcao

	// cima
	int	col1up = 4;
	int	col2up = 3;
	int	col3up = 2;
	int	col4up = 1;

	// baixo
	int	col1down = 1;
	int	col2down = 2;
	int	col3down = 2;
	int	col4down = 2;

	// esquerda
	int	row1left = 4;
	int	row2left = 3;
	int	row3left = 2;
	int	row4left = 1;

	// direita
	int	row1right = 1;
	int	row2right = 2;
	int	row3right = 2;
	int	row4right = 2;


	int	i;
	int	j;


	

	// comecei a criar a primeira matriz com o malloc
        int	**set_num;

	// criei uma matriz apatir do int **set_num;
	set_number(**set_num);

	// atribui os valos de cima dentro da matriz
	set_number_up(col1up, col2up, col3up, col4up, **set_num);

	// atribui os valos de baixo dentro da matriz
	set_number_down(col1down, col2down, col3down, col4down, **set_num);

	// atribui os valos da esquerda dentro da matriz
	set_number_left(row1left, row2left, row3left, row4left, **set_num);

	// atribui os valos da direita dentro da matriz
	set_number_right(row1right, row2right, row3right, row4right, **set_num)










	// comecei a criar a segunda matriz com o malloc
	int	**resposta;

	// cria um array com 4 posicoes
	resposta = malloc(4 * sizeof(int*));

	// cria 4 arrays que recebem arrays com 4 posicoes
	i = 0;
	while (i < 4)
	{
		resposta[i] = malloc(4 * sizeof(int));
		i++;
	}

	// dei valor a cada posicao com o argumento passado pela funcao
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			resposta[i][j] = 0;
			j++;
		}
		i++;
	}















	// printa a matriz de dicas completa
	i = 0;
	while (i != 4)
	{
		j = 0;
		while (j != 4)
		{
			printf("%d", set_num[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	printf("\n\n");

        // printa a matriz de resposta completa
	i = 0;
	while (i != 4)
	{
		j = 0;
		while (j != 4)
		{
			printf("%d", resposta[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
