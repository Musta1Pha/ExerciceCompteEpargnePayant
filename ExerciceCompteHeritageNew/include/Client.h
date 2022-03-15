#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>

using namespace std;

class Client
{
    private:
      const int Matricule;
      static int Cpt;
      string Nom;
      string Prenom;

    public:
      Client(string Nom,string Prenom);
      void Afficher()const;
      virtual ~Client();

};

#endif // CLIENT_H
