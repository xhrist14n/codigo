#include "factura.h"

Factura::Factura()
{
    //ctor
    m_Detalles=new vector<Detalle *>();
}

Factura::Factura(unsigned int codigo,string comprador,string ruc,string vendedor,string fecha):m_Codigo(codigo),m_Comprador(comprador),m_Fecha(fecha),m_Ruc(ruc),m_Vendedor(vendedor)
{
    //ctor
    m_Detalles=new vector<Detalle *>();
}

Factura::~Factura()
{
    //dtor
}

Factura::Factura(const Factura& other)
{
    //copy ctor
}

Factura& Factura::operator=(const Factura& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

string Factura::ToString()
{
    //copy ctor
    stringstream ss;
    ss<<"Codigo factura: "<<GetCodigo()<<"\t";
    ss<<"Comprador: "<<GetComprador()<<"\t";
    ss<<"Ruc: "<<GetRuc()<<"\t";
    ss<<"Vendedor: "<<GetVendedor()<<"\t";
    ss<<"Fecha: "<<GetFecha()<<endl;
    ss<<"Detalle: "<<endl;
    double total=0;
    for(vector<Detalle*>::iterator it=GetDetalles()->begin();it!=GetDetalles()->end();it++){
        ss<<(*it)->ToString()<<endl;
        total+=(*it)->GetPrecio();
    }
    ss<<"Total: "<<total<<endl;
    return ss.str();
}
