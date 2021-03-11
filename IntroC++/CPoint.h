#pragma once




class CPoint {
private : //seul la classe ou les m�thodes de la classe auront acc�s aux donn�es priv�es

	//Donn�es membres : attrinut ou propri�t�
	int n_x;
	int n_y;


	//Encapsulation, il existe trois possibilit�q:
	/* private : tout ce qu'il y a apr�s le private est innaccessible
	   public : Donne acc�s aux donn�es, mais reste d�rangeant
	   protected : utiliser avec l'h�ritage. Dans ce cas l�, acc�ssible par la classe ou par les enfants de la classe.
	*/

public : //toutes les instance de la classe exterieur de la classe auront y auront acc�s.

	// Fonctions membres
	void afficheLog()const;//la m�thode ne modifie as la donn�e qu'elle manipule
	//souligne en vert, car pas de d�finition
	//clique droit, selectionner Action rapide -> cr�er... (s'il ne c'est pas fait la premi�re fois, recommencer.), appuyer sur promouvoir l'onglet pour l'alignet avec les autres.

	//Accesseur
	int getX();
	int getY();

	//Mutateurs
	//ne pas faire une m�thode pour tout /!\ 
	int setX(int n_x);//m�me nom que la donn�e mebre, mais ne l'est pas
	int setY(int n_y);

	//le get et le set servent � 


	



};//la classe doit poss�der les fonctions en lien avec les objets � manipuler.
//en prog, on ne mlange pas tout. Il faut une relation de genre. 

