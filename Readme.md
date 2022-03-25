Cette application permet d'avoir une image en input qui va être noir et blanc en output à la fin du traitement je vous montre ici les étapes qui vont être faite 
-l'image va être parcourue en pixel pour que la couleur verte se transforme en noir et le reste des couleurs en blanc
-le path de l'image de l'input et le seuil de la couleur verte sont passé en argument et vont être passés par un test de saisie:Cancel changes
	si le path de l'image est incorrect ou le seuil n'est pas compatible un message d'erreur va être affiché .
	si l'utilisateur se trompe en entrant ces inputs un message d'aide va s'afficher.
-après l'image est récupérée sous forme de matrice de pixel.
-la matrice va être parcourue et chaque pixel est passé par un simple test de couleur verte seulement
 si 
 	la valeur de la composante verte de du pixel est supérieure à notre seuil le pixel se transforme en noir 
 sinon 
 	elle se transforme en blanc
 -Après cette opération en enregistre la nouvelle matrice pour avoir la même image indiquée par son seuil diviser en deux couleurs (noires et blanches) comme un output
 -------------------------------------------------------------------------------------------------------------------------------------------
 Deux images de input pour le test ImageTest1.png, ImageTest2.png
 
