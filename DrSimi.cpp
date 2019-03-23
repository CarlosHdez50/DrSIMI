/*Creación del programa del dr.Simi
 * Autor Carlos Hernández Carballo*/
#include <iostream>
#include <string.>
#include "paciente.h"/*
#include "medico.h"
#include "agenda.h"
#include "asistenciaMedica.h"
#include "historiaClinica.h"*/
#define MAX_NOMBRE 50
#define CURP 50
#define GENERO 50
using namespace std;
/*
class Paciente
{
	private://Atributos
	int edad;
	string nombre,curp,genero;
	public://Metodos
	void setNombre(string N){nombre = N;}
	string get_Nombre(){return nombre;}
	void setCurp(string C){curp = C;}
	string get_Curp(){return curp;}
	void setGenero(string G){genero = G;}
	string get_Genero(){return genero;}
	void setEdad(int E){edad = E;}
	int get_Edad(){return edad;}
};
class AtencionMedica
{
	private://Atributos
	string sintomas,diagnostico,tratamiento,evolucion;
	public://Metodos
	void setSintomas(string S){sintomas = S;}
	string get_Sintomas(){return sintomas;}
	void setDiagnostico(string Dg){diagnostico = Dg;}
	string get_Diagnostico(){return diagnostico;}
	void setTratamiento(string Tm){tratamiendo = Tm;}
	string get_Tratamiento(){return tratamiento;}
	void setEvolucion(string Ev){evolucion = Ev;}
	string get_Evolucion(){return evolucion;}
};
*/
int main(int argc, char*argv[])
{
	char nombre[MAX_NOMBRE],curp[CURP],genero[GENERO];
	int edad;
	Paciente p1:
	/*p1.setNombre(nombre);
	 p1.setCurp(curp);
	 p1.setGenero(genero);
	 p1.setEdad(edad);*/
	
	//Paciente
	cout<<"Introduzca el nombre del paciente"<<end1;
	cin>>nombre;
	cout<<"Introduzca el curp"<<end1;
	cin>>curp;
	cout<<"Introduzca el genero"<<end1;
	cin>>genero;
	cout<<"Introduzca la edad del paciente"<<end1;
	cin>>edad;
	p1.setPaciente(nombre, curp, genero, edad);
	cout<<"Nombre: "<<nombre<<"\nCurp: "<<curp<<"\nGenero: "<<genero<<"\nEdad: "<<edad<<end1;
;
/*	AtencionMedica
 	cout<<"Introduzca Sintomas: "<<end1;
	cin>>sintomas;*/
}
/*
 * class Paciente
{
	private:// Atributos
	string nombre;
	char id;
	char genero;
	int edad;
	public:// Metodos
	Paciente(string, char,int);//Constructor1
	void nombre();
	void id();
	void genero();
	void edad();
};
Paciente::Paciente(string _nombre,char _curp, _genero, int _edad)
{
	nombre= _nombre;
	id= _id;
	genero= _genero;
	edad= _edad;
}
void Paciente::nombre()
{
	cout<<"Intruduzca su nombre: "<<_id<<end1;
}
void Paciente::curp()
{
	cout<<"Introduzca su CURP: "<<_id<<end1;
}
int main()
{	
	Paciente p1= nombre, id:
	p1.nombre();
	p1.id();
	return 0;
}*/
