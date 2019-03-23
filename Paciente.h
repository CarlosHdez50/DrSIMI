/*Autor: Carlos Hernández Carballo.
 * Clase paciente*/
#define NOMBRE_MAX 50
#define CURP 50 
#define GENERO 50

//Atributos de la clase paciente.
class Paciente{ //constructor.
	string nombre[NOMBRE_MAX];
	string curp[CURP];
	string genero[GENERO];
	int edad;
//Prototipo de Funciones.
	Public:
		void setPaciente(string, int);
		void setNombre(strig_nombre){nombre = _nombre}
		void setCurp(string_curp){curp = _curp}
		void setGenero(string _genero){genero = _genero}
		void setEdad(int _edad){edad = _edad}
//Funciones.
		string getNombre(){return _nombre;}
		string getCurp(){return _curp;}
		string getGenero(){return _genero;}
		int getEdad(){return _edad;}
};
	
