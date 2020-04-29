#include "solver.hpp"
#include <math.h>
#include <iostream>
#include <stdexcept>

namespace solver
{


	

	double solve(const RealVariable& real)
	{
		return 0.0;
	}

    RealVariable::RealVariable(double c, double b, double a)
        : c(c), b(b), a(a)
    {

    }

	RealVariable::RealVariable() : c(0), b(1), a(0)
	{

	}

	RealVariable::RealVariable(double c) : c(c), b(0), a(0)
	{

	}


    RealVariable operator +(double num, const RealVariable& real)
    {
        return RealVariable();
    }

    RealVariable RealVariable::operator +(const RealVariable& other) const
    {
        return RealVariable();
    }
    RealVariable operator -(double num, const RealVariable& real)
    {
        return RealVariable();
    }

    RealVariable RealVariable::operator -(const RealVariable& real) const
    {
        return RealVariable();
    }

    RealVariable operator *(double num, const RealVariable& real)
    {
        return RealVariable();
    }

    RealVariable RealVariable::operator *(const RealVariable& real) const
    {
        return RealVariable();
    }

    RealVariable RealVariable::operator /(const RealVariable& real) const
    {
        return RealVariable();
    }

    RealVariable operator /(double num, const RealVariable& real)
    {
        return RealVariable();
    }

    RealVariable RealVariable::operator==(const RealVariable& real) const
    {
        return RealVariable();
    }

    RealVariable operator==(double num, const RealVariable& real)
    {
        return RealVariable();
    }

    RealVariable RealVariable::operator ^(const RealVariable& real) const                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
    {                                                                                                                                                                                                                                                                                                                                                                           
        return RealVariable();
    }
   
	RealVariable operator ^(double num, const RealVariable& real)
	{
		return RealVariable();
	}

// -----------------------------------------------

	ComplexVariable::ComplexVariable() : re(0.0), im(0.0)
	{

	}

	ComplexVariable::ComplexVariable(double re) : re(re), im(0.0)
	{

	}

	ComplexVariable::ComplexVariable(double re, double im) : re(re), im(im)
	{

	}

	ComplexVariable::ComplexVariable(const std::complex<double>& complex) : re(real(complex)), im(imag(complex))
	{

	}

	std::complex<double> solve(const ComplexVariable& complex)
    {
        return std::complex<double>();
    }


	ComplexVariable ComplexVariable::operator +(const ComplexVariable& complex) const
    {
        return ComplexVariable();
    }


	ComplexVariable ComplexVariable::operator -(const ComplexVariable& complex) const
	{
		return ComplexVariable();
	}

	ComplexVariable ComplexVariable::operator *(const ComplexVariable& complex) const
	{
		return ComplexVariable();
	}

	ComplexVariable ComplexVariable::operator /(const ComplexVariable& complex) const
	{
		return ComplexVariable();
	}

	ComplexVariable ComplexVariable::operator ^(const ComplexVariable& complex) const
	{
		return ComplexVariable();
	}

	ComplexVariable ComplexVariable::operator==(const ComplexVariable& complex) const
	{
		return ComplexVariable();
	}

	ComplexVariable operator *(double, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator *(std::complex<double>, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator /(double, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator /(std::complex<double>, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator ^(double, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator ^(std::complex<double>, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator +(double, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator +(std::complex<double>, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator -(double, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator -(std::complex<double>, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator ==(double, const ComplexVariable&)
	{
		return ComplexVariable();
	}

	ComplexVariable operator ==(std::complex<double>, const ComplexVariable&)
	{
		return ComplexVariable();
	}

};
