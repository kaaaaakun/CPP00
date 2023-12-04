/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:55:35 by tokazaki          #+#    #+#             */
/*   Updated: 2023/11/12 19:59:32 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 2)
	{
		std::cout << "Please enter only one argument" << std::endl;
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
