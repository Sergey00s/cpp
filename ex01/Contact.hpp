/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialgac <ialgac@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:03:32 by ialgac            #+#    #+#             */
/*   Updated: 2022/10/05 18:03:33 by ialgac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include "my.hpp"


class Contact
{
	private:
		std::string name;
		std::string lastname;
		std::string nickname;
		std::string number;
		std::string secret;
	public:
		Contact();
		~Contact();
		std::string	get_this(int i);
		t_info		get_info();
		void		set_name(std::string name, std::string lastname, std::string nickname);
		void		set_num(std::string number, std::string secret);
};

#endif
