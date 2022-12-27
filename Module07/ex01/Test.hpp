/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:06:04 by wismith           #+#    #+#             */
/*   Updated: 2022/12/27 17:10:54 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef TEST_HPP
# define TEST_HPP

# include <iostream>

class Test
{
	private :
		std::string		Name;
		unsigned int	Age;

	public :
		Test();
		Test(const Test &t);
		Test(const std::string name, unsigned int age);

		~Test();

		Test			&operator=(const Test &t);

		void			setName(const std::string &name);
		void			setAge(unsigned int age);

		std::string		getName() const;
		unsigned int	getAge() const;
};

std::ostream	&operator<<(std::ostream &o, const Test &t);

#endif