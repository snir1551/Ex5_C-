#ifndef __SOLVER_H
#define __SOLVER_H

#define EPSILON 0.0001
#include <vector>
#include <complex>
namespace solver
{
    
    double solve(const RealVariable& real);

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


    std::complex<double> solve(const ComplexVariable& complex);

    class ComplexVariable
    {
        private:   
            	std::complex<double> a, b, c;

        public:
		ComplexVariable();
		ComplexVariable(double c);
                ComplexVariable(const std::complex<double>& c);
                ComplexVariable(const std::complex<double>& c,
                const std::complex<double>& b, const std::complex<double>& a);

                const std::complex<double>& getA() const
                {
                    return a;
                }
                const std::complex<double>& getB() const
                {
                    return b;
                }
                const std::complex<double>& getC() const
                {
                    return c;
                }

                ComplexVariable operator +(const ComplexVariable& complex) const;
                ComplexVariable operator -(const ComplexVariable& complex) const;
                ComplexVariable operator *(const ComplexVariable& complex) const;
                ComplexVariable operator /(const ComplexVariable& complex) const;
                ComplexVariable operator ^(const ComplexVariable& complex) const;
                ComplexVariable operator==(const ComplexVariable& complex) const;

                friend ComplexVariable operator *(double, const ComplexVariable&);
                friend ComplexVariable operator *(const std::complex<double>&, const ComplexVariable&);
                friend ComplexVariable operator /(double, const ComplexVariable&);
                friend ComplexVariable operator /(const std::complex<double>&, const ComplexVariable&);                                                                                                                                                                                                                    
                friend ComplexVariable operator ^(double, const ComplexVariable&);
                friend ComplexVariable operator ^(const std::complex<double>&, const ComplexVariable&);                
                friend ComplexVariable operator +(double, const ComplexVariable&);
                friend ComplexVariable operator +(const std::complex<double>&, const ComplexVariable&);
                friend ComplexVariable operator -(double, const ComplexVariable&);
                friend ComplexVariable operator -(const std::complex<double>&, const ComplexVariable&);
		friend ComplexVariable operator ==(double, const ComplexVariable&);
                friend ComplexVariable operator ==(const std::complex<double>&, const ComplexVariable&);
                

    };

    bool doublesEqual(double d1, double d2);
    void findRealQuadraticEquationRoots(const RealVariable& real, double roots[2], int& numRoots);
};

#endif
