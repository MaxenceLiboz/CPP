/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:00:30 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/24 13:47:18y mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter() : _literal(0), _type(NONE) {}

Converter::Converter(Converter const & var)
{
	*this = var;
}

Converter::Converter(std::string literal)
{
	if (literal.length() == 3 && literal.at(0) == '\'' && literal.at(2) == '\'')
	{
		this->_type = NUM;
		this->_literal = static_cast<double>(literal.at(1));
	}
	else if (literal.compare("-inff") == 0 || literal.compare("-inf") == 0)
	{
		this->_type = NINF;
		this->_literal = 0;
	}
	else if (literal.compare("+inff") == 0 || literal.compare("+inf") == 0
		|| literal.compare("inf") == 0 || literal.compare("inff") == 0)
	{
		this->_type = INF;
		this->_literal = 0;
	}
	else if (literal.compare("nan") == 0 || literal.compare("nanf") == 0)
	{
		this->_type = NAN;
		this->_literal = 0;
	}
	else if (isNumber(literal) == true)
	{
		this->_type = NUM;
		this->_literal = std::stod(literal);
	}
	else
		throw (Converter::NonComformLiteral());
}

Converter::~Converter(){}

Converter & Converter::operator=( Converter const & var )
{
	this->_literal = var._literal;
	this->_type = var._type;
	return (*this);
}

double	Converter::getLiteral() const { return (this->_literal); }
int		Converter::getType() const { return (this->_type); }

bool	Converter::isNumber( std::string literal ) const
{
	unsigned long	start = 0;
	int				dot = 0;

	if (literal.at(start) == '+' || literal.at(start) == '-')
		start++;
	for (unsigned long i = start; i < literal.length() - 1; i++)
	{
		if (literal.at(i) == '.')
		{
			if (dot != 0)
				return (false);
			dot += 1;
		}
		if (std::isdigit(literal.at(i)) == false && literal.at(i) != '.')
			return (false);
	}
	if (std::isdigit(literal.at(literal.length() - 1)) == true || literal.at(literal.length() - 1) == 'f')
		return (true);
	return (false);
}

void	Converter::printChar() const
{
	if (this->_type == NUM)
	{
		char c = static_cast<char>(this->_literal);
		if (this->_literal > 255)
			std::cout << "char: impossible" << std::endl;
		else if (isprint(c))
			std::cout << "char: \'" << c << "\'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else if (this->_type == INF || this->_type == NINF || this->_type == NAN)
		std::cout << "char: impossible" << std::endl;
}

void	Converter::printInt() const
{
	if (this->_type == NUM)
	{
		int i = static_cast<int>(this->_literal);
		if (this->_literal > std::numeric_limits<int>::max() || this->_literal < std::numeric_limits<int>::min())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << i << std::endl;
	}
	else if (this->_type == INF || this->_type == NINF || this->_type == NAN)
		std::cout << "int: impossible" << std::endl;
}

void	Converter::printFloat() const
{
	if (this->_type == NUM)
	{
		float f = static_cast<float>(this->_literal);
		if (f != (int)f)
			std::cout << "float: " << f << "f" << std::endl;
		else
			std::cout << "float: " << f << ".0f" << std::endl;
	}
	else if (this->_type == INF)
		std::cout << "float: +inff" << std::endl;
	else if (this->_type == NINF)
		std::cout << "float: -inff" << std::endl;
	else if (this->_type == NAN)
		std::cout << "float: nanf" << std::endl;
}

void	Converter::printDouble() const
{
	if (this->_type == NUM)
	{
		if (this->_literal != (int)this->_literal)
			std::cout << "double: " << this->_literal << "f" << std::endl;
		else
			std::cout << "double: " << this->_literal << ".0f" << std::endl;
	}
	else if (this->_type == INF)
		std::cout << "double: +inf" << std::endl;
	else if (this->_type == NINF)
		std::cout << "double: -inf" << std::endl;
	else if (this->_type == NAN)
		std::cout << "double: nan" << std::endl;
}

const char * Converter::NonComformLiteral::what() const throw()
{
	return ("\033[1;31mNonCoformLiteral: make sure you enter a comform literal\e[0m");
}

std::ostream & operator<<( std::ostream & o, Converter const & var )
{
	var.printChar();
	var.printInt();
	var.printFloat();
	var.printDouble();
	return (o);
}