/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrummuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:06:34 by jrummuka          #+#    #+#             */
/*   Updated: 2021/11/03 13:06:37 by jrummuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int x)
{
	if ((x <= 127) && (x >= 0))
		return (1);
	else
		return (0);
}