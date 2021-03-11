#pragma once




class CPoint {
private : //seul la classe ou les méthodes de la classe auront accès aux données privées

	//Données membres : attrinut ou propriété
	int n_x;
	int n_y;


	//Encapsulation, il existe trois possibilitéq:
	/* private : tout ce qu'il y a après le private est innaccessible
	   public : Donne accès aux données, mais reste dérangeant
	   protected : utiliser avec l'héritage. Dans ce cas là, accèssible par la classe ou par les enfants de la classe.
	*/

public : //toutes les instance de la classe exterieur de la classe auront y auront accès.

	// Fonctions membres
	void afficheLog()const;//la méthode ne modifie as la donnée qu'elle manipule
	//souligne en vert, car pas de définition
	//clique droit, selectionner Action rapide -> créer... (s'il ne c'est pas fait la première fois, recommencer.), appuyer sur promouvoir l'onglet pour l'alignet avec les autres.

	//Accesseur
	int getX();
	int getY();

	//Mutateurs
	//ne pas faire une méthode pour tout /!\ 
	int setX(int n_x);//même nom que la donnée mebre, mais ne l'est pas
	int setY(int n_y);

	//le get et le set servent à 


	



};//la classe doit possèder les fonctions en lien avec les objets à manipuler.
//en prog, on ne mlange pas tout. Il faut une relation de genre. 

