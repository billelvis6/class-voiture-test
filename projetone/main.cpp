#include <iostream>
#include <cstring>

using namespace std;

class Voiture
{
private:
    char marque[20];
    char modele[20];
    char couleur[20];
    short an;
public:
    Voiture(char *mq, char *md, char *c, short a);

    // GETTERS
    char* getMarque();
    char* getModele();
    char* getCouleur();
    short getAn();

    //SETTERS
    void setCouleur(char* c);


    void afficher();

    friend short comparer(const Voiture &v1, const Voiture &v2);

};

Voiture::Voiture(char *mq, char *md, char *c, short a)
{
    strcpy(this->marque, mq);
    strcpy(this->modele, md);
    strcpy(this->couleur, c);
    this->an=a;
}

char* Voiture::getMarque()
{
    return this->marque;
}

char* Voiture::getModele()
{
    return this->modele;
}
char* Voiture::getCouleur()
{
    return this->couleur;
}
short Voiture::getAn()
{
    return this->an;
}

void Voiture::setCouleur(char* c)
{
    strcpy(this->couleur, c);
}

void Voiture::afficher()
{
    cout << "Marque :" << this->marque << endl;
    cout << "Modele :" << this->modele << endl;
    cout << "Couleur :"<< this->couleur <<endl;
    cout <<"Annee : " << this->an << endl << endl;
}

short comparer(const Voiture &v1, const Voiture &v2)
{
    if(v1.an > v2.an)
        return v1.an;
    else
        return v2.an;
}

int main()
{
    Voiture v1("Fiat", "500", "Rouge", 2020);
    v1.afficher();
   // cout << v1.getAn()<<endl;
    v1.setCouleur("Verte");
    v1.afficher();

    Voiture v2 = Voiture("Mercedes", "GL3", "Noir", 2024);
    v2.afficher();

    v2.setCouleur("BLEU");
    v2.afficher();

    cout << "Annee la plus recente : " << comparer (v1, v2);

    return 0;
}

