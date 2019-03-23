/*Autor: Carlos Hernández Carballo.
 * Clase AtencionMedica.*/
#define SINTOMAS 50
#define DIAGNOSTICO 50
#define TRATAMIENTO 50
#define EVOLUCION 50
//Atributos de la clase atencionMedica.
class atencionMedica{ //Constructor.
Private:
	string sintomas[SINTOMAS];
	string diagnostico[DIAGNOSTICO];
	string tratamiento[TRATAMIENTO];
	string evolucion[EVOLUCION];
//Prototipo de Funciones.
	Public:
		void setAtencionMedica(string);
		void setSintomas(string _sintomas){sintomas = _sintomas}
		void setDiagnostico(string _diagnostico){diagnostico = _diagnostico}
		void setTratamiento(string _tratamiento){tratamiento = _tratamiento}
		void setEvolucion(sting _evolucion){evolucion = _evolucion}
//Funciones.
		string getSintomas(){return _sintomas;}
		string getDiagnostico(){return _diagnostico;}
		string getTratamiento(){return _tratamiento;}
		string getEvolucion(){return _evolucion:}
};	
