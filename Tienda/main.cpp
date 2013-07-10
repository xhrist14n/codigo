#include <iostream>

#include "tienda.h"
#include "factura.h"

using namespace std;

int main()
{
    cout << "Iniciando App" << endl;

    Tienda * tienda=new Tienda();

    Producto *producto=new Producto(01,"papas",34.4,"papas de primera");
    tienda->AddProducto(producto);

    cout<<"Tienda:"<<endl;
    cout<<"Productos de tienda"<<endl;

    cout<<tienda->ListProductos()<<endl;

    string answer=tienda->BuscarProducto("papas");
    cout<<"buscando papas"<<endl;
    std::cout<<answer<<endl;



    Factura *factura=new Factura(01,"Juan san benito","45654377","jose verdugo","10/07/1983");

    Detalle *detalle=new Detalle(01,2,68.8,producto);

    factura->AddDetalle(detalle);

    string facturaImpresa=factura->ToString();

    cout<<"Factura impresa: "<<endl;

    cout<<facturaImpresa<<endl;


    cout << "Finalizando App"<< endl;
    cin.get();
    return 0;
}
