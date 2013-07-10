#include "producto.h"

Producto::Producto()
{
    //ctor
}

Producto::Producto(unsigned int codigo,string nombre,double precio,string descripcion):m_Codigo(codigo),m_Nombre(nombre),m_Precio(precio),m_Descripcion(descripcion){

}

Producto::~Producto()
{
    //dtor
}

Producto::Producto(const Producto& other)
{
    //copy ctor
}

Producto& Producto::operator=(const Producto& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

string Producto::ToString(){
    stringstream  ss;
    ss<<"Codigo: "<<GetCodigo()<<"\t";
    ss<<"Nombre: "<<GetNombre()<<"\t";
    ss<<"Precio: "<<GetPrecio()<<"\t";
    ss<<"Descripcion: "<<GetDescripcion()<<endl;
    return ss.str();
}
