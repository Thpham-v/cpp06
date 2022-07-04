/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:57:12 by thpham-v          #+#    #+#             */
/*   Updated: 2022/06/27 20:36:18 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <cmath>
# include <climits>

class Convert
{
	private:
		Convert();
		std::string		_str;
		
	public:
		Convert(std::string str);
		Convert(Convert const & src);
		~Convert();
		Convert & operator=(Convert const & rhs);

		void	conv_char();
		void	conv_int();
		void	conv_float();
		void	conv_double();
};

void	get_type(std::string const &str);

#endif