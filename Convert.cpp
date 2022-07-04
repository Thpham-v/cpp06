/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:01:32 by thpham-v          #+#    #+#             */
/*   Updated: 2022/06/27 20:17:59 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
}

Convert::Convert(std::string str): _str(str)
{
}

Convert::Convert(Convert const & src)
{
	*this = src;
	return ;
}

Convert::~Convert()
{
}

Convert & Convert::operator=(Convert const & rhs)
{
	if (this != &rhs)
		this->_str = rhs._str;
	return (*this);
}

void	Convert::conv_char()
{
	char c = this->_str[0];
	
	std::cout << "char : " << c << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;
	return ;
}

void	Convert::conv_int()
{
	int i = std::atoi(this->_str.c_str());

	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "char : impossible" << std::endl;
	else if (!isprint(static_cast<char>(i)))
  		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(i) << std::endl;
		
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(i) << ".0" << std::endl;
	return ;
}

void	Convert::conv_float()
{
	float	f = atof(this->_str.c_str());
	
	if (this->_str == "nanf" || this->_str == "+inff" || this->_str == "-inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << this->_str << std::endl;
		std::cout << "double : " << this->_str.substr(0, this->_str.length() - 1) << std::endl;
		return ;
	}
	
	/******************************************************************************************/
	
	if (static_cast<int>(f) < CHAR_MIN || static_cast<int>(f) > CHAR_MAX)
		std::cout << "char : impossible" << std::endl;
	else if (!isprint(static_cast<char>(f)))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(f) << std::endl;
	
	/******************************************************************************************/
	
	if (static_cast<long>(f) < INT_MIN || static_cast<long>(f) > INT_MAX)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(f) << std::endl;
	
	/******************************************************************************************/
		
	if (fmod(f, 1))
	{
		std::cout << "float : " << f << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << std::endl;
	}
	else
	{
		std::cout << "float : " << f << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << ".0" << std::endl;
	}
	
	return ;
}

void	Convert::conv_double()
{
	double	d = strtod(this->_str.c_str(), NULL);

	if (this->_str == "nan" || this->_str == "+inf" || this->_str == "-inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << this->_str << "f" << std::endl;
		std::cout << "double : " << this->_str << std::endl;
		return ;
	}

	/******************************************************************************************/
	
	if (static_cast<int>(d) < CHAR_MIN || static_cast<int>(d) > CHAR_MAX)
		std::cout << "char : impossible" << std::endl;
	else if (!isprint(static_cast<char>(d)))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(d) << std::endl;

	/******************************************************************************************/
	
	if (static_cast<long>(d) < INT_MIN || static_cast<long>(d) > INT_MAX)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(d) << std::endl;

	/******************************************************************************************/
		
	if (fmod(d, 1))
	{
		std::cout << "float : " << d << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(d) << std::endl;
	}
	else
	{
		std::cout << "float : " << d << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(d) << ".0" << std::endl;
	}
	
	return ;
}