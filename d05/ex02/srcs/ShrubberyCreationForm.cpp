/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:38:32 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/19 16:04:13 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const std::string ShrubberyCreationForm::_tree[8] = {
"         _ ._  _ , _ ._                  \n"
"        (_ ' ( `  )_  .__)               \n"
"      ( (  (    )   `)  ) _)             \n"
"     (__ (_   (_ . _) _) ,__)            \n"
"         `~~`\\ ' . /`~~`                 \n"
"              ;   ;                      \n"
"              /   \\                      \n"
"_____________/_ __ \\_____________        \n"
};

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default", 145, 137), _target("default")
{
	std::cout << GRN << "Default ShrubberyCreationForm constuctor called" << END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : Form(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src._target)
{
	*this = src;
	std::cout << GRN << "Copy ShrubberyCreationForm constuctor called" << END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) : Form("Shrubbery Creation Form", 145, 137), _target(target)
{
	std::cout << GRN << "ShrubberyCreationForm constuctor called" << END << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "ShrubberyCreationForm destructor called" << END << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
{
	(void)src;
	return *this;
}