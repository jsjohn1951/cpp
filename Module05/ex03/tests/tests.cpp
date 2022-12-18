/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:18:08 by wismith           #+#    #+#             */
/*   Updated: 2022/12/18 19:26:21 by wismith          ###   ########.fr       */
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

//! ---------------- End ex00 tests ---------------- !//

//! ---------------- ex01 tests ---------------- !//

// void	default_Form_test()
// {
// 	std::cout << "Default_Form Test: " << std::endl;
// 	std::cout << "\tTests the construction / destruction" << std::endl;
// 	std::cout << "\t\tand outstream overload operator 🐼" << std::endl;
// 	std::cout << "\x1B[32m" << std::endl;
// 	{
// 		try
// 		{
// 			//! Constructs
// 			AForm	f("AP1243", 150, 150);

// 			//! Divider
// 			std::cout << std::endl;

// 			//! test outstream overload operator
// 			std::cout << f << std::endl;

// 			//! Divider
// 			std::cout << std::endl;
// 		}
// 		catch (std::exception & e)
// 		{
// 			//! Print out Exception msg
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
// 	std::cout << "\x1B[0m";
// }

// void	test_Form_one()
// {
// 	std::cout << "Form Test one: " << std::endl;
// 	std::cout << "\tTests the signing of the form" << std::endl;
// 	std::cout << "\x1B[32m" << std::endl;
// 	{
// 		try
// 		{
// 			//! Constructs
// 			AForm	f("EP1k2", 150, 150);
// 			Bureaucrat	john("John", 130);

// 			//! Divider
// 			std::cout << std::endl;

// 			//! test outstream overload operator
// 			std::cout << f << std::endl;

// 			//! John signs form EP1k2
// 			john.signForm(f);

// 			//! Divider
// 			std::cout << std::endl;
			
// 			//! test outstream overload operator
// 			std::cout << f << std::endl;

// 			//! Divider
// 			std::cout << std::endl;
// 		}
// 		catch (std::exception & e)
// 		{
// 			//! Print out Exception msg
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
// 	std::cout << "\x1B[0m";
// }

// void	test_Form_two()
// {
// 	std::cout << "Form Test two: " << std::endl;
// 	std::cout << "\tTests the signing of the form" << std::endl;
// 	std::cout << "\x1B[32m" << std::endl;
// 	{
// 		try
// 		{
// 			//! Constructs
// 			AForm	f("EP1k2", 129, 150);
// 			Bureaucrat	john("John", 130);

// 			//! Divider
// 			std::cout << std::endl;

// 			//! test outstream overload operator
// 			std::cout << john << std::endl;
// 			std::cout << f << std::endl;

// 			//! John signs form EP1k2
// 			john.signForm(f);

// 			//! Divider
// 			std::cout << std::endl;
			
// 			//! test outstream overload operator
// 			std::cout << f << std::endl;

// 			//! Divider
// 			std::cout << std::endl;
// 		}
// 		catch (std::exception & e)
// 		{
// 			//! Print out Exception msg
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
// 	std::cout << "\x1B[0m";
// }

//! ---------------- End ex01 tests ---------------- !//

//! ---------------- ex02 tests ---------------- !//

void	default_ex02_test()
{
	std::cout << "Default_ex02 Test: " << std::endl;
	std::cout << "\tTests the PresidentialPardonForm" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		AForm	*f = new PresidentialPardonForm("Bob");
		//! Divider
		std::cout << std::endl;
		try
		{
			//! Constructing
			Bureaucrat	jack("Jack", 4);

			//! Divider
			std::cout << std::endl;

			//! test sign contract
			jack.signForm(*f);

			//! Divider
			std::cout << std::endl;

			//! test post-signing execution contract
			jack.executeForm(*f);

			//! Divider
			std::cout << std::endl;

		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
		//! Divider
		std::cout << std::endl;
		//! Destruct 
		delete f;
	}
	std::cout << "\x1B[0m";
}

void	test_ex02_one()
{
	std::cout << "ex02 Test one: " << std::endl;
	std::cout << "\tTests the ShrubberyCreationForm" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		AForm	*f = new ShrubberyCreationForm("file");
		//! Divider
		std::cout << std::endl;
		try
		{
			//! Constructing
			Bureaucrat	dale("Dale", 4);

			//! Divider
			std::cout << std::endl;

			//! test sign contract
			dale.signForm(*f);

			//! Divider
			std::cout << std::endl;

			//! test post-signing execution contract
			dale.executeForm(*f);

			//! Divider
			std::cout << std::endl;

		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
		//! Divider
		std::cout << std::endl;
		//! Destruct 
		delete f;
	}
	std::cout << "\x1B[0m";
}

void	test_ex02_two()
{
	std::cout << "ex02 Test two: " << std::endl;
	std::cout << "\tTests the RobotomyRequestForm" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		AForm	*f = new RobotomyRequestForm("King Kong");
		//! Divider
		std::cout << std::endl;
		try
		{
			//! Constructing
			Bureaucrat	john("John", 4);

			//! Divider
			std::cout << std::endl;

			//! test sign contract
			john.signForm(*f);

			//! Divider
			std::cout << std::endl;

			//! test post-signing execution contract
			john.executeForm(*f);

			//! Divider
			std::cout << std::endl;

		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
		//! Divider
		std::cout << std::endl;
		//! Destruct 
		delete f;
	}
	std::cout << "\x1B[0m";
}

//! ---------------- End ex02 tests ---------------- !//

//! ---------------- ex03 tests ---------------- !//

void	default_ex03_test()
{
	std::cout << "Default_ex03 Test: " << std::endl;
	std::cout << "\tTests the construction / destruction" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		AForm	*f;
		try
		{
			//! Constructs
			Intern	intern;

			//! Divider
			std::cout << std::endl;

			f = intern.makeForm("robotomy request", "Superman");

			//! Divider
			std::cout << std::endl;

			//!delete
			delete f;
		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\x1B[0m";
}

void	test_ex03_one()
{
	std::cout << "ex03 Test one: " << std::endl;
	std::cout << "\tTests invalid Form" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		AForm	*f;
		try
		{
			//! Constructs
			Intern	intern;

			//! Divider
			std::cout << std::endl;

			f = intern.makeForm("bob", "Superman");

			//! Divider
			std::cout << std::endl;

			//!delete
			delete f;
		}
		catch (std::exception & e)
		{
			//! Print out Exception msg
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\x1B[0m";
}

//! ---------------- End ex03 tests ---------------- !//
