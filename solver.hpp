#ifndef __SOLVER_H
#define __SOLVER_H

#define EPSILON 0.0001
#include <vector>
#include <complex>
namespace solver
{
    

    class RealVariable
    {
        private:   
            double a, b, c;

        public:
		RealVariable();
		RealVariable(double c);
                RealVariable(double c, double b, double a);

                double getA() const
                {
                    return a;
                }
                double getB() const
                {
                    return b;
                }
                double getC() const
                {
                    return c;
                }

                RealVariable operator +(const RealVariable& real) const;
                RealVariable operator -(const RealVariable& real) const;
                RealVariable operator *(const RealVariable& real) const;
                RealVariable operator /(const RealVariable& real) const;
                RealVariable operator ^(const RealVariable& real) const;
                RealVariable operator==(const RealVariable& real) const;                                                                                                                                                                                                                                              

                friend RealVariable operator *(double, const RealVariable&);
                friend RealVariable operator /(double, const RealVariable&);                                                                                                                                                                                                                    
                friend RealVariable operator ^(double, const RealVariable&);                
                friend RealVariable operator +(double, const RealVariable&);
                friend RealVariable operator -(double, const RealVariable&);
		        friend RealVariable operator ==(double, const RealVariable&);
                

    };

    double solve(const RealVariable& real);

    class ComplexVariable
    {
        private:   
            	double re, im;

        public:
		ComplexVariable();
		ComplexVariable(double re);
		ComplexVariable(double re, double im);
	        ComplexVariable(const std::complex<double>& complex);

                double getRe() const
                {
                    return re;
                }
                double getIm() const
                {
                    return im;
                }

                ComplexVariable operator +(const ComplexVariable& complex) const;
                ComplexVariable operator -(const ComplexVariable& complex) const;
                ComplexVariable operator *(const ComplexVariable& complex) const;
                ComplexVariable operator /(const ComplexVariable& complex) const;
                ComplexVariable operator ^(const ComplexVariable& complex) const;
                ComplexVariable operator==(const ComplexVariable& complex) const;

                friend ComplexVariable operator *(double, const ComplexVariable&);
                friend ComplexVariable operator *(std::complex<double>, const ComplexVariable&);
                friend ComplexVariable operator /(double, const ComplexVariable&);
                friend ComplexVariable operator /(std::complex<double>, const ComplexVariable&);                                                                                                                                                                                                                    
                friend ComplexVariable operator ^(double, const ComplexVariable&);
                friend ComplexVariable operator ^(std::complex<double>, const ComplexVariable&);                
                friend ComplexVariable operator +(double, const ComplexVariable&);
                friend ComplexVariable operator +(std::complex<double>, const ComplexVariable&);
                friend ComplexVariable operator -(double, const ComplexVariable&);
                friend ComplexVariable operator -(std::complex<double>, const ComplexVariable&);
		friend ComplexVariable operator ==(double, const ComplexVariable&);
                friend ComplexVariable operator ==(std::complex<double>, const ComplexVariable&);
                

    };

    std::complex<double> solve(const ComplexVariable& complex);

    bool doublesEqual(double d1, double d2);
    void findRealQuadraticEquationRoots(const RealVariable& real, double roots[2], int& numRoots);
};

#endif
