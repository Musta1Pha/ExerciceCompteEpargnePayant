#ifndef DEVISE_H
#define DEVISE_H
#include <iostream>
#include <string>

using namespace std;
class Devise
{
    private:
      int Montant;
    public:
      Devise(int Montant);
      void Afficher()const;
      Devise& operator-(const Devise& d1)const;
      Devise& operator-=(const Devise& d1);
      Devise& operator+=(const Devise& d1);
      bool operator>=(const Devise& d1);
      void operator-(const Devise& d1);
      Devise operator*(Devise d1);
      Devise operator*(double d1);
      virtual ~Devise();

};

#endif // DEVISE_H
