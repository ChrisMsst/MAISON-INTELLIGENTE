Ce projet est réalisé dans le cadre du module Communication Sans Fil en Licence 1 à l’Université
Nice Sophia Antipolis
# Maison-intelligente
Maison qui réagit de façon autonome lors d’un incendie. Elle détecte, alerte , et éteint l’incendie.
# Maquette
Pour cette première partie, j'ai récupéré des planches de bois d'un vieux meuble ordinateur.
Je les ai mesurées, coupées, poncées puis peintes.
Il a ensuite fallu que je crée la maquette vissants les planches entre-elles.
J'ai ensuite rajouté un fond pour la maquette.
La maquette est désormais finie.
# Détection
Dans cette partie, nous commencerons à aborder le code arduino.
Nous avions ici un capteur de CO2 qui nous permet de détecter une chute de dioxygène donc un incendie.
Nous l'avons placé au centre de la maquette sous le "toit" puis nous l'avons relié à la carte arduino.
Lorsque que les valeurs que celui-ci mesure dépasse un certains seuil, la maison réagit.
# Alerte
En effet, une fois l'incendie détecté par le catpeur, une LED rouge va se mettre à clignoter pour prévenir qu'il y a de la fumée.
Cela prévient que l'alarme va retentir.
Si le niveau de CO2 grimpe encore, alors l'alarme retentie (buzzer qui n'existe pas), le haut parleur indique 
qu'il sagit d'un incendie (n'existe pas non plus).
# Extinction
Une fois l'usager averti de l'incendie, les lujmières de la pièces s'éteingnent sauf la led rouge qui clignote, les alarmes continuent de sonner, les sprinkler (la pompe a eau) se déclenchent et la porte de garage s'ouvre (moteur non-fonctionnel).
L'incendie est donc censé être maitrisé.

