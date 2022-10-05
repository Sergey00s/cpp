/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialgac <ialgac@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:03:26 by ialgac            #+#    #+#             */
/*   Updated: 2022/10/05 18:03:28 by ialgac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_num(std::string number, std::string secret)
{
	this->secret = secret;
	this->number = number;
}

void	Contact::set_name(std::string name, std::string lastname, std::string nickname)
{
	this->name = name;
	this->lastname = lastname;
	this->nickname = nickname;
}

std::string Contact::get_this(int i)
{
	if (i == 1)
		return this->name;
	if (i == 2)
		return this->lastname;
	if (i == 3)
		return this->nickname;
	if (i == 4)
		return this->number;
	if (i == 5)
		return this->secret;
	return ("");
}

t_info Contact::get_info()
{
	t_info inf;

	inf.name = this->name;
	inf.lastname = this->lastname;
	inf.nickname = this->nickname;
	inf.number = this->number;
	inf.secret = this->secret;
	return (inf);
}

Contact::Contact()
{
	
}

Contact::~Contact()
{
}
