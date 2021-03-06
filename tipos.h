/*
 * File:   tipos.h
 * Author: msobral
 *
 * Created on 22 de Agosto de 2016, 08:50
 */

#ifndef TIPOS_H
#define	TIPOS_H

#include <string>
#include <ostream>

using std::string;
using std::ostream;

// enumeração para possíveis tipos de entrada de diretório
enum class Tipo {
    Arquivo,
    Programa,
    Diretorio,
    Link, // link simbolico (atalho))
    Chardev, // dispositivo de entrada e saída
    Blockdev, // dispositivo de entrada e saída
    Nenhum // indefinido
};

// representa uma entrada de diretório
struct Entrada {
    string nome;
    Tipo tipo;
    unsigned int bytes;

    Entrada(const string & basedir, const string & name);
    Entrada();
};

ostream& operator<<(ostream & out, Tipo & t);

#endif	/* TIPOS_H */
