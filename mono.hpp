#ifndef	MONO_HPP
#define	MONO_HPP

class	Monomio{
	private:
	  double coef;
    int grau;
    
  public:
	  Monomio(double c, int g);
		~Monomio();  
    double getMonCoef();
    int getMonGrau();
};

#endif