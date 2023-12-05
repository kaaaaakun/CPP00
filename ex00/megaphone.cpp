/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:55:35 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/05 18:16:45 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		std::cout << (char)toupper(argv[1][i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
