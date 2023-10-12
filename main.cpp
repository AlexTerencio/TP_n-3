    #include <iostream>
    #include "Personne.h"

    using namespace std;

    int main()
    {
        // Création des 4 personnages
        Personne flanby("HOLLANDE", "Francois", 67, "Fonctionnaire"); // Création de l'objet sarko
        Personne sego("ROYAL", "Ségolène", 68, "Ministre"); // Création de l'objet carlita
        Personne jeanmimi("BLANQUER", "Jean-Michel", 57, "Ministre"); // Création de l'objet manu
        Personne aure("DEVOS", "Aurélia", 42, "Magistrate"); // Création de l'objet bibi
        
        // Affichage des informations des 4 personnages avant l'utilisation des objets
        cout << "On affiche les informations des 4 personnages avant l'utilisation des objets" << endl;
        flanby.afficher();
        sego.afficher();
        jeanmimi.afficher();
        aure.afficher();

        // Action sur les objets
        aure.changer_travail("Retraité");
        flanby.changer_travail("Retraité");
        aure.marier("BLANQUER"); 
        sego.anniversaire(); 
        jeanmimi.anniversaire();
        sego.marier("ROYAL");
        aure.marier("DEVOS");

        // Affichage des informatons des 4 perosnnages après l'utilisation des objets
        cout << "On affiche les informations des 4 personnages après l'utilisateur des objets" << endl;
        flanby.afficher();
        sego.afficher();
        jeanmimi.afficher();
        aure.afficher();

        return 0;
    }