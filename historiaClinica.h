/*Autor: Carlos Hernández Carballo.
 * Clase Historia Clinica.*/
#define ANTECEDENTES_F 50
#define PADECIMIENTOS 50
//Atributos de la clase historiaClinica
class historiaClinica{ //Constructor.
Private:
	string antecedentes_f[ANTECEDENTES_F];
	string padecimientos[PADECIMIENTOS];
//Prototipo de funciones
	Public:
		void setHistoriaClinica(string);
		void setAntecedente_F(string _antecedente_f){antecedentes = _antecedentes}
		void setPadecimientos(string _padecimientos){padecimientos = _padecimientos}
//Funciones.
		string getAntecedentes_F(){return _antecedentes_f;}
		string getPadecimientos(){return _padecimientos;}
};
