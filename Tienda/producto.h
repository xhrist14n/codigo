#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

class Producto
{
    public:
        /** Default constructor */
        Producto();
        /** Default constructor */
        Producto(unsigned int codigo,string nombre,double precio,string descripcion);
        /** Default destructor */
        virtual ~Producto();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Producto(const Producto& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Producto& operator=(const Producto& other);
        /** Access m_Codigo
         * \return The current value of m_Codigo
         */
        unsigned int GetCodigo() { return m_Codigo; }
        /** Set m_Codigo
         * \param val New value to set
         */
        void SetCodigo(unsigned int val) { m_Codigo = val; }
        /** Access m_Nombre
         * \return The current value of m_Nombre
         */
        string GetNombre() { return m_Nombre; }
        /** Set m_Nombre
         * \param val New value to set
         */
        void SetNombre(string val) { m_Nombre = val; }
        /** Access m_Precio
         * \return The current value of m_Precio
         */
        double GetPrecio() { return m_Precio; }
        /** Set m_Precio
         * \param val New value to set
         */
        void SetPrecio(double val) { m_Precio = val; }
        /** Access m_Descripcion
         * \return The current value of m_Descripcion
         */
        string GetDescripcion() { return m_Descripcion; }
        /** Set m_Descripcion
         * \param val New value to set
         */
        void SetDescripcion(string val) { m_Descripcion = val; }
        /** Tostring
         * \param void
         */
        string ToString();
    protected:
    private:
        unsigned int m_Codigo; //!< Member variable "m_Codigo"
        string m_Nombre; //!< Member variable "m_Nombre"
        double m_Precio; //!< Member variable "m_Precio"
        string m_Descripcion; //!< Member variable "m_Descripcion"
};

#endif // PRODUCTO_H
