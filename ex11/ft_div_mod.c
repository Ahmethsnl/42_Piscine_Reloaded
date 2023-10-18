/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmsanli <ahmsanli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:47:22 by ahmsanli          #+#    #+#             */
/*   Updated: 2023/09/29 17:05:34 by ahmsanli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		temp_div;
	int		temp_mod;

	temp_div = a / b;
	temp_mod = a % b;
	*div = temp_div;
	*mod = temp_mod;
}
