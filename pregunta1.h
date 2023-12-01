#include <iostream>

class Archivo
{

public:
    std:: string nombre;
    float tamanho;
    bool esDirectorio;
    Archivo* primerHijo;
    Archivo* siguienteArchivo;

    Archivo(); // Metodo constructor
    Archivo(std::string nombre , float tamanho , bool esDireectorio);//Metodo constructor secundario
    float GetTamanho;  // Metodo

};

class sistemaArchivo
{
public:

Archivo* primerArchivo;
sistemaArchivo();
virtual void CrearArchivo(Archivo* archivo)  = 0;
virtual void CrearArchivo(std::string nombre , float tamanho , bool esDireectorio)  = 0;
virtual void ImprimirArchivos()  = 0;

};

class OldHorseFs : public sistemaArchivo

{

public:
void CrearArchivo(Archivo* archivo)  override;
void ImprimirArchivos() override;


};

