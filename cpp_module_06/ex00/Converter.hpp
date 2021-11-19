/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:58:57 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/19 11:01:26 by asfaihi          ###   ########.fr       */
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

	public:
		Converter(std::string Input);
		Converter(Converter const & src);
		Converter & operator=(Converter const & rhs);
		~Converter();

		char	ParseInput(std::string Input);

		void	CastFromInt( void );
		void	CastFromChar( void );
		void	CastFromFloat( void );
		void	CastFromDouble( void );
};

#endif