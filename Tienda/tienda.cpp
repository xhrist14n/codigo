#include "tienda.h"

Tienda::Tienda()
{
    //ctor
    m_Productos=new vector<Producto*>();
}

Tienda::~Tienda()
{
    //dtor
}

Tienda::Tienda(const Tienda& other)
{
    //copy ctor
}

Tienda& Tienda::operator=(const Tienda& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

string Tienda::ToString(){
    stringstream ss;
    ss<<"Tienda: "<<endl;
    ss<<ListProductos()<<endl;
    return ss.str();
}

string Tienda::ListProductos()
{
    //copy ctor
    string answer="";
    stringstream ss;
    for(vector<Producto *>::iterator it=GetProductos()->begin();it!=GetProductos()->end();it++){
        ss<<(*it)->ToString()
            <<endl;
    }
    answer=ss.str();
    return answer;
}

string Tienda::BuscarProducto(string nombre)
{
    //copy ctor
    string answer="";
    stringstream ss;
    bool flag=false;
    for(vector<Producto *>::iterator it=GetProductos()->begin();it!=GetProductos()->end();it++){
        string nom=(*it)->GetNombre();
        if(strcmp(nom.c_str(),nombre.c_str())==0){
            ss<<(*it)->ToString()<<endl;
            flag=true;
        }
    }
    if(flag==false){
        ss<<"Producto no existente"<<endl;
    }
    answer=ss.str();
    return answer;
}

Producto* Tienda::EncontrarProducto(string nombre)
{
    //copy ctor
    Producto *answer=NULL;
    for(vector<Producto *>::iterator it=GetProductos()->begin();it!=GetProductos()->end();it++){
        string nom=(*it)->GetNombre();
        if(strcmp(nom.c_str(),nombre.c_str())==0){
            answer=(*it);
            break;
        }
    }
    return answer;
}
