/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <raphaelkriefbm@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:44:56 by rkrief            #+#    #+#             */
/*   Updated: 2017/08/21 23:48:56 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//void	ft_putchar(char c)
//{
//		write(1, &c, 1);
//}

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'z';
	while (i >= 'a')
	{
			ft_putchar(i);
			i--;
	}
}

int		main(void)
{
		ft_print_reverse_alphabet();
		return (0);		
}
	
