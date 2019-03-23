/*Autor: Carlos Hernández Carballo.
 * Clase Medico*/
#define T_MEDICO 50
//Atributos de la clase Medico.
class Medicoo{ //Constructor
Private:
	string t_medico[T_MEDICO];
	int horario;
//Prototipo de funcion,
	public:
	void setMedico(string ,int);
	void setT_Medico(string _t_medico){t_medico = _t_medico}
	void set_Horario(int _horario){horario = _horario}
//Funciones.
	string getT_Medico(){return _t_medico;}
	int getHorario(){return _horario;}	
};
