/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:55:35 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/06 16:44:33 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	size_t	i;
	size_t	j;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	i = 1;
	while (argv[i] != NULL) {
		j = 0;
		while (argv[i][j] != '\0') {
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
