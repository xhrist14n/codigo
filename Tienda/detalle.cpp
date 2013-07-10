#include "detalle.h"

Detalle::Detalle()
{
    //ctor
}

Detalle::Detalle(int codigo,int cantidad,double precio,Producto * producto):m_Codigo(codigo),m_Cantidad(cantidad),m_Precio(precio),m_Producto(producto)
{
    //ctor
}

Detalle::~Detalle()
{
    //dtor
}

Detalle::Detalle(const Detalle& other)
{
    //copy ctor
}

Detalle& Detalle::operator=(const Detalle& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

string Detalle::ToString()
{
    string answer="";
    stringstream ss;
    ss<<"Producto: "<<GetProducto()->GetNombre()<<"\t";
    ss<<"cantidad: "<<GetCantidad()<<"\t";
    ss<<"Precio Unitario: "<<GetProducto()->GetPrecio()<<"\t";
    ss<<"Precio: "<<GetPrecio()<<endl;
    answer=ss.str();
    return answer;
}
