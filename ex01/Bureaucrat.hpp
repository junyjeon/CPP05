#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);
	~Bureaucrat();

	Bureaucrat(std::string const &, int);
	std::string const &getName() const;
	int const &getGrade() const;

	void GradeUp();
	void GradeDown();

	void signForm(Form &);
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif
