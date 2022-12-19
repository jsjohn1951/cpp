/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:18:08 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 18:15:31 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

//! ---------------- ex00 tests ---------------- !//

void	default_test()
{
	std::cout << "Default Test: " << std::endl;
	std::cout << "\tTests the construction / destruction" << std::endl;
	std::cout << "\t\tand outstream overload operator 🐼" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		//** try / catch will catch any exceptions thrown by code within try block
		try
		{
			//! Constructs
			Bureaucrat bob("Bob", 150);

			//! Divider
			std::cout << std::endl;

			//! test outstream overload operator
			std::cout << bob << std::endl;

			//! Divider
			std::cout << std::endl;
		}
		//** exceptions are handled within the exception block
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\x1B[0m";
}

void	test_Bureaucrat_one()
{
	std::cout << "Bureaucrat Test one: " << std::endl;
	std::cout << "\tTest Exceptions" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		try
		{
			//! Constructs
			Bureaucrat bob("John", 160);
		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
		//! Divider
		std::cout << std::endl;
		try
		{
			//! Constructs
			Bureaucrat bob("Jack", -4);
		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
		//! Divider
		std::cout << std::endl;
		try
		{
			//! Constructs
			Bureaucrat bob("Jack", 150);
			bob.decreGrade();
		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\x1B[0m";
}

void	test_Bureaucrat_two()
{
	std::cout << "Bureaucrat Test two: " << std::endl;
	std::cout << "\tTests increment / decrement" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		try
		{
			//! Constructs
			Bureaucrat bob("Bob", 150);

			//! Divider
			std::cout << std::endl;

			//! Increment
			bob.increGrade();

			//! Divider
			std::cout << std::endl;

			//! test outstream overload operator
			std::cout << bob << std::endl;

			//! Divider
			std::cout << std::endl;

			//** Decrements twice to throw an exception
			//! Decrement
			bob.decreGrade();
			bob.decreGrade();
		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\x1B[0m";
}

void	test_Bureaucrat_three()
{
	std::cout << "Bureaucrat Test three: " << std::endl;
	std::cout << "\tTests copy constructor & copy assignment operator" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		//! Constructs
		Bureaucrat	bob("Bob", 120);
		Bureaucrat	other(bob);
		Bureaucrat	other2;

		//! Divider
		std::cout << std::endl;

		//! test outstream overload operator
		std::cout << "Results from copy constructor: " << std::endl;
		std::cout << "Original: " << std::endl;
		std::cout << bob << std::endl;
		std::cout << "Copy: " << std::endl;
		std::cout << other << std::endl;

		//! Divider
		std::cout << std::endl;

		//! test assignment operator overload
		other2 = bob;

		//! Divider
		std::cout << std::endl;

		//! test outstream overload operator
		std::cout << "Results from copy assignment operator overload: " << std::endl;
		std::cout << "Original: " << std::endl;
		std::cout << bob << std::endl;
		std::cout << "Copy: " << std::endl;
		std::cout << other2 << std::endl;

		//! Divider
		std::cout << std::endl;
	}
	std::cout << "\x1B[0m";
}

//! ---------------- End ex00 tests ---------------- !//

//! ---------------- ex01 tests ---------------- !//

void	default_Form_test()
{
	std::cout << "Default_Form Test: " << std::endl;
	std::cout << "\tTests the construction / destruction" << std::endl;
	std::cout << "\t\tand outstream overload operator 🐼" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		try
		{
			//! Constructs
			Form	f("AP1243", 150, 150);

			//! Divider
			std::cout << std::endl;

			//! test outstream overload operator
			std::cout << f << std::endl;

			//! Divider
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\x1B[0m";
}

void	test_Form_one()
{
	std::cout << "Form Test one: " << std::endl;
	std::cout << "\tTests the signing of the form" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		try
		{
			//! Constructs
			Form	f("EP1k2", 150, 150);
			Bureaucrat	john("John", 130);

			//! Divider
			std::cout << std::endl;

			//! test outstream overload operator
			std::cout << f << std::endl;

			//! John signs form EP1k2
			john.signForm(f);

			//! Divider
			std::cout << std::endl;

			//! test outstream overload operator
			std::cout << f << std::endl;

			//! Divider
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\x1B[0m";
}

void	test_Form_two()
{
	std::cout << "Form Test two: " << std::endl;
	std::cout << "\tTests the signing of the form" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		try
		{
			//! Constructs
			Form	f("EP1k2", 129, 150);
			Bureaucrat	john("John", 130);

			//! Divider
			std::cout << std::endl;

			//! test outstream overload operator
			std::cout << john << std::endl;
			std::cout << f << std::endl;

			//! John signs form EP1k2
			john.signForm(f);

			//! Divider
			std::cout << std::endl;

			//! test outstream overload operator
			std::cout << f << std::endl;

			//! Divider
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\x1B[0m";
}

void	test_Form_three()
{
	std::cout << "Form Test three: " << std::endl;
	std::cout << "\tTests copy constructor & copy assignment operator" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		//! Constructs
		Form	bob("APORIGINAL", 120, 130);
		Form	other(bob);
		Form	other2("APCOPY", 53, 42);

		//! Divider
		std::cout << std::endl;

		//! test outstream overload operator
		std::cout << "Results from copy constructor: " << std::endl;
		std::cout << "Original: " << std::endl;
		std::cout << bob << std::endl;
		std::cout << "Copy: " << std::endl;
		std::cout << other << std::endl;

		//! Divider
		std::cout << std::endl;

		//! test assignment operator overload
		other2 = bob;

		//! Divider
		std::cout << std::endl;

		//! test outstream overload operator
		std::cout << "Results from copy assignment operator overload: " << std::endl;
		std::cout << "Original: " << std::endl;
		std::cout << bob << std::endl;
		std::cout << "Copy: " << std::endl;
		std::cout << other2 << std::endl;

		//! Divider
		std::cout << std::endl;
	}
	std::cout << "\x1B[0m";
}

//! ---------------- End ex01 tests ---------------- !//
