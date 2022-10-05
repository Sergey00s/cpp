/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialgac <ialgac@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:03:38 by ialgac            #+#    #+#             */
/*   Updated: 2022/10/05 18:03:39 by ialgac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int input_cin()
{
	std::string temp;

	std::cin >> temp;
	if (temp == "EXIT" || temp == "exit")
		return 3;
	if (temp == "ADD" || temp == "add")
		return 1;
	if (temp == "SEARCH" || temp == "search")
		return 2;
	return 0;
}

t_info input_add()
{
	t_info info;

	std::cout << "Name: ";
	std::cin >> info.name;
	std::cout << "Lastname: ";
	std::cin >> info.lastname;
	std::cout << "Nickname: ";
	std::cin >> info.nickname;
	std::cout << "Number: ";
	std::cin >> info.number;
	std::cout << "Secret: ";
	std::cin >> info.secret;
	return info;
}


int check_all_num(std::string nbr)
{
	int i;
	
	i = 0;
	while (nbr[i])
	{
		if (!std::isdigit(nbr[i]))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	PhoneBook	cnt;
	t_info		adding;
	std::string	temp;
	int			choice;
	
	while (1)
	{
		std::cout << "*****************************\n**'ADD' for adding user to contact\n**'SEARCH' for Searching an User\n**'EXİT' for exit\n*****************************\n";
		std::cout << "PhoneBook -> ";
		choice = input_cin();
		if (choice == 1)
		{
			adding = input_add();
			if (check_all_num(adding.number))
			{
				cnt.add_user(adding.name, adding.lastname, adding.nickname, adding.number, adding.secret);
				std::cout << "[User added succesfuly!]\n";
			}
			else
				std::cout << "[Error Only numbers!]\n";
			
		}
		if (choice == 2)
		{
			std::cout << "SEARCH -> ";
			std::cin >> temp;
			cnt.displayBy(temp);
		}
		if (choice == 3)
		{
			exit(0);
		}
	}	
	return (0);
}
