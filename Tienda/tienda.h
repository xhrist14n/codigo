#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "producto.h"

using namespace std;

class Tienda
{
    public:
        /** Default constructor */
        Tienda();
        /** Default destructor */
        virtual ~Tienda();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Tienda(const Tienda& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Tienda& operator=(const Tienda& other);
        /** Access m_Productos
         * \return The current value of m_Productos
         */
        vector<Producto*> * GetProductos() { return m_Productos; }
        /** Set m_Productos
         * \param val New value to set
         */
        void SetProductos(vector<Producto*> * val) { m_Productos = val; }
        /** Add to m_Productos
         * \param val New value to set
         */
        void AddProducto(Producto* val) { m_Productos->push_back(val); }
        /** List m_Productos
         * \param NULL
         */
        string ListProductos();
        /** BuscarProducto m_Productos
         * \param nombre
         */
        string BuscarProducto(string nom);
        /** EncontrarProducto m_Productos
         * \param nombre
         */
        Producto *EncontrarProducto(string nom);
        /** Tostring
         * \param void
         */
        string ToString();
    protected:
    private:
        vector<Producto*> * m_Productos; //!< Member variable "m_Productos"
};

#endif // TIENDA_H
