#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <list>

class Span {
		std::vector<int>	_vect;
		u_int				_size;
	public:
		Span(u_int);
		Span(Span const &);
		Span const &operator=(Span const &);
		~Span();

		u_int	getSize();
		void	addNumber(int);
		u_int	shortestSpan(void);
		u_int	longestSpan();

		class SpanException : public std::exception {
				std::string _err;
			public:
				SpanException(std::string);
				virtual ~SpanException() throw ();

				const char *what() const throw();
		};
};