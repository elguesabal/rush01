/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:28:25 by wfranco           #+#    #+#             */
/*   Updated: 2023/08/06 10:12:39 by wfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	set_number(int **set_num)
{
	int     i;

        /*// comecei a criar a primeira matriz com o malloc
        int     **set_num;*/

        // cria um array com 4 posicoes
        set_num = malloc(4 * sizeof(int*));

        // cria 4 arrays que recebem arrays com 4 posicoes
        i = 0;
        while (i < 4)
        {
                set_num[i] = malloc(4 * sizeof(int));
                i++;
        }

        // dei valor a cada posicao com o argumento passado pela funcao

        /* // cima
        set_num[0][0] = col1up;
        set_num[0][1] = col2up;
        set_num[0][2] = col3up;
        set_num[0][3] = col4up;

        // baixo
        set_num[1][0] = col1down;
        set_num[1][1] = col2down;
        set_num[1][2] = col3down;
        set_num[1][3] = col4down;

        // esqueda
        set_num[2][0] = row1left;
        set_num[2][1] = row2left;
        set_num[2][2] = row3left;
        set_num[2][3] = row4left;

        // direita
        set_num[3][0] = row1right;
        set_num[3][1] = row2right;
        set_num[3][2] = row3right;
        set_num[3][3] = row4right;*/
}
