#ifndef DETALLE_H
#define DETALLE_H

#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "producto.h"

using namespace std;

class Detalle
{
    public:
        /** Default constructor */
        Detalle();
        /** Default constructor */
        Detalle(int codigo,int cantidad,double precio,Producto * producto);
        /** Default destructor */
        virtual ~Detalle();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Detalle(const Detalle& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Detalle& operator=(const Detalle& other);
        /** Access m_Codigo
         * \return The current value of m_Codigo
         */
        unsigned int GetCodigo() { return m_Codigo; }
        /** Set m_Codigo
         * \param val New value to set
         */
        void SetCodigo(unsigned int val) { m_Codigo = val; }
        /** Access m_Producto
         * \return The current value of m_Producto
         */
        Producto* GetProducto() { return m_Producto; }
        /** Set m_Producto
         * \param val New value to set
         */
        void SetProducto(Producto* val) { m_Producto = val; }
        /** Access m_Cantidad
         * \return The current value of m_Cantidad
         */
        int GetCantidad() { return m_Cantidad; }
        /** Set m_Cantidad
         * \param val New value to set
         */
        void SetCantidad(int val) { m_Cantidad = val; }
        /** Access m_Precio
         * \return The current value of m_Precio
         */
        double GetPrecio() { return m_Precio; }
        /** Set m_Precio
         * \param val New value to set
         */
        void SetPrecio(double val) { m_Precio = val; }
        /** ToString
         * \param void
         */
        string ToString();
    protected:
    private:
        unsigned int m_Codigo; //!< Member variable "m_Codigo"
        Producto* m_Producto; //!< Member variable "m_Producto"
        int m_Cantidad; //!< Member variable "m_Cantidad"
        double m_Precio; //!< Member variable "m_Precio"
};

#endif // DETALLE_H
