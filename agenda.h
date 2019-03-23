/*Autor: Carlos Hernández Carballo.
 * Clase Agenda*/
#define MEDICO 50
#define PACIENTE 50
//Atributos de la clase Agenda.
class Agenda{ //Constructor.
Private:
	string medico[MEDICO];
	string paciente[PACIENTE];
	int fecha;
	//Prototipo de la funcion.
	public:
		void setAgenda(string, int);
		void setMedico(string _medico){medico = _medico}
		void setPaciente(string _paciente){paciente = _paciente}
		void setFecha(int _fecha){fecha = _fecha}
	//Funciones.
		string getMedico(){return _medico;}
		string getPaciente(){return _paciente;}
		int getFecha(){return _fecha;}
};
