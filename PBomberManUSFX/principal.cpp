#include <iostream>
//#include "Bomber.h"
#include "GameObject.h"
#include "GameActor.h"

using namespace std;

int main() {
	//GameObject o1;
	GameActor a1("Pedro");
	GameActor a2;

	cout << "La posicion x es: " << a1.getPosicionX() << endl;
	cout << "El nombre del objeto a1 es: " << a1.getNombre() << endl;
	cout << "El nombre del objeto a2 es: " << a2.getNombre() << endl;


	/*Bomber JuanBombero;
	Bomber PedroBombero(10, 10, 5);

	int anchoImagen = JuanBombero.getAltoAvatar();
	int nv = JuanBombero.numeroVidas;

	cout << "Ancho imagen: " << anchoImagen << " N�mero vidas: " << nv << endl;
	cout << "Ancho imagen: " << JuanBombero.getAltoAvatar() << " N�mero vidas: " << JuanBombero.numeroVidas << endl;

	JuanBombero.setAltoAvatar(8);
	JuanBombero.setAnchoAvatar(8);

	cout << "Ancho imagen: " << anchoImagen << " N�mero vidas: " << nv << endl;
	cout << "Ancho imagen: " << JuanBombero.getAltoAvatar() << " N�mero vidas: " << JuanBombero.numeroVidas << endl;

	JuanBombero.mostrarInformacion();

	PedroBombero.mostrarInformacion();

	cout << "Primer paso rumbo a BomberMan" << endl;*/

	return 0;
}