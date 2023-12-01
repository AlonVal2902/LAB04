#include "pregunta1.h"


////////////////////------------ARCHIVOS -------------------////////////
// Archivo
Archivo :: Archivo()
{
    this-> nombre = "";
    this->tamanho = 0;
    this->esDirectorio = false;
    this-> primerHijo = nullptr;
    this-> siguienteArchivo = nullptr;
    }



Archivo::Archivo (std:: string nombre,float tamanho , bool esDirectorio)
{

    this->nombre = nombre;
    this->tamanho = tamanho;
    this->esDirectorio = false; 


}


/// ///////////////// -----------SISTEMA DE ARCHIVOS ---------------------------------///////////////////

sistemaArchivo :: sistemaArchivo()
{
this->primerArchivo = nullptr;

}


void sistemaArchivo::CrearArchivo(Archivo* archivo)
{

if (this ->primerArchivo == nullptr)
{
    // No hay archivos guardados
    
    this->primerArchivo = CrearArchivo;

}else
{
    // Ya existen archivos

    Archivo* pPivotArchivo = this -> listaArchivos;
    while (pPivotArchivo ->siguiente != nullptr)
    {
        pPivotArchivo = pPivotArchivo ->siguienteArchivo;
    }
    
    pPivotArchivo ->siguienteArchivo = nuevoArchivo;

}

}

void sistemaArchivo::ImprimirArchivos()
{
    Archivo* 



}










OldHorseFs :: OldHorseFs(){



}



