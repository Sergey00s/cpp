/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialgac <ialgac@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:03:14 by ialgac            #+#    #+#             */
/*   Updated: 2022/10/05 18:03:15 by ialgac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"
# include "my.hpp"

class PhoneBook
{
	private:
		Contact phone[8];
	public:
		PhoneBook();
		~PhoneBook();
		void add_user(std::string name, std::string lastname, std::string nickname, std::string number, std::string secret);
		void displayBy(std::string str);
		void put_scr(t_info block, int i);
};

#endif
