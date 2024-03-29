#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
    enum FormName
    {
        Shrubbery,
        Robot,
        President,
        Unknown
    };

    FormName val =
        name == "shrubbery creation"    ? Shrubbery
        : name == "robotomy request"    ? Robot
        : name == "presidential pardon" ? President
                                        : Unknown;

    switch (val)
    {
    case Shrubbery:
        std::cout << "Intern creates ShrubberyCreationForm!" << std::endl;
        return new ShrubberyCreationForm(target);
    case Robot:
        std::cout << "Intern creates RobotomyRequest Form!" << std::endl;
        return new RobotomyRequestForm(target);
    case President:
        std::cout << "Intern creates PresidentialPardon Form!" << std::endl;
        return new PresidentialPardonForm(target);
    default:
        throw Intern::UnknownFormException();
        return 0;
    }
}