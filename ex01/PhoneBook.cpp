/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialgac <ialgac@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:03:44 by ialgac            #+#    #+#             */
/*   Updated: 2022/10/05 18:03:46 by ialgac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_user(std::string name, std::string lastname, std::string nickname, std::string number, std::string secret)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if ((this->phone[i]).get_this(1).empty())
		{
			this->phone[i].set_name(name, lastname, nickname);
			this->phone[i].set_num(number, secret);
			return ;
		}
		i++;
	}
	this->phone[0].set_name(name, lastname, nickname);
	this->phone[0].set_num(number, secret);
}

std::string fix_str(std::string str)
{
	std::string	temp;
	int			len;

	temp = "         ";
	if (str.length() > 10)
	{
		str.erase(10);
		str[9] = '.';
	}
	temp.insert(10 - str.length(), str);
	temp.erase(10);
	return (temp);
}
void PhoneBook::put_scr(t_info block, int i)
{
	std::cout << "\n";
	std::cout << "         "<< i << " | ";
	std::cout << fix_str(block.name) << " | ";
	std::cout << fix_str(block.lastname) << " | ";
	std::cout << fix_str(block.nickname) << " |\n";
}

void PhoneBook::displayBy(std::string str)
{
	int		i;
	t_info	temp;
	int		t;

	i = 0;
	t = 0;
	while (i < 8)
	{
		temp = this->phone[i].get_info();
		if (temp.lastname == str || temp.name == str || temp.nickname == str || temp.number == str || temp.secret == str)
		{
			this->put_scr(temp, i);
			t = 1;
		}
		i++;
	}
	if (!t)
		std::cout << "404 Not Found!\n";
	
}

PhoneBook::~PhoneBook()
{
}

PhoneBook::PhoneBook()
{
}
