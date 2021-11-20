/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:58:57 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/19 15:06:41 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>

class	Converter
{
	private:
		int		_InInt;
		char	_InChar;
		float	_InFloat;
		double	_InDouble;
		char	_Type;
		Converter( void );
		
		char	ParseInput(std::string Input) const ;

		void	CastFromInt(std::string Input);
		void	CastFromChar(std::string Input);
		void	CastFromFloat(std::string Input);
		void	CastFromDouble(std::string Input);

		class	BadArgument: public std::exception {
			const char * what() const throw();
		};

	public:
		Converter(std::string Input);
		Converter(Converter const & src);
		Converter & operator=(Converter const & rhs);
		~Converter();

		void	PrintConversion( void ) const ;
};

#endif