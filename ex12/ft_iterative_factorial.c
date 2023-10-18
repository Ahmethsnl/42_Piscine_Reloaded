/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmsanli <ahmsanli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:47:28 by ahmsanli          #+#    #+#             */
/*   Updated: 2023/09/29 17:46:24 by ahmsanli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		factorial;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (factorial);
	else
	{
		while (i <= nb)
		{
			factorial *= i;
			i++;
		}
		return (factorial);
	}
}
