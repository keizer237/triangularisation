#include<iostream>

using namespace std;

struct Point {
    double x;
    double y;
};
  // fonciion permettant de calculer le lieu d'habitation
 Point calculLieuHabitation(Point lieuxBranchage[], int taille) {

  //initialisaeion des variables pour les sommes des coordonnees 
  double sommex = 0;
  double sommey = 0;

  for (int i = 0; i < taille; i++) {


    sommex += lieuxBranchage[i].x; //pour les coordonnees du lieu actuel x
    sommey += lieuxBranchage[i].y; //pour les coordonnees du lieu actuel y
  } 

 //calcul de la moyenne des coordonnees pour obtenir une approximation du lieu d'Habitation du brigand
   Point lieuHabitation; //pour stocker le resultat final
   lieuHabitation.x = sommex / taille; 
   lieuHabitation.y = sommey / taille;
   return lieuHabitation;
}

int main() {
    //definition des lieux de branchage du brigand
    const int taille = 3;
    Point lieuxBranchage[taille];

    lieuxBranchage[0].x = 10.0;
    lieuxBranchage[0].y = 6.4;

    lieuxBranchage[1].x = 12.7;
    lieuxBranchage[1].y = 9.2;

    lieuxBranchage[2].x = 11.0;
    lieuxBranchage[2].y = 4.2;

    //nous appellons a present la foncion pour calculer le lieux d'Habitation
    Point lieuHabitation = calculLieuHabitation(lieuxBranchage, taille);

    //noous affichons a present le resultat
    cout << "le brigand Habite pres du point (" << lieuHabitation.x << ", " << lieuHabitation.y << ")." << endl;

    return 0;
}