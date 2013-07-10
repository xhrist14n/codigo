#ifndef FACTURA_H
#define FACTURA_H

#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "detalle.h"

using namespace std;

class Factura
{
    public:
        /** Default constructor */
        Factura();
        /** Default constructor */
        Factura(unsigned int codigo,string comprador,string ruc,string vendedor,string fecha);
        /** Default destructor */
        virtual ~Factura();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Factura(const Factura& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Factura& operator=(const Factura& other);
        /** Access m_Codigo
         * \return The current value of m_Codigo
         */
        unsigned int GetCodigo() { return m_Codigo; }
        /** Set m_Codigo
         * \param val New value to set
         */
        void SetCodigo(unsigned int val) { m_Codigo = val; }
        /** Access m_Comprador
         * \return The current value of m_Comprador
         */
        string GetComprador() { return m_Comprador; }
        /** Set m_Comprador
         * \param val New value to set
         */
        void SetComprador(string val) { m_Comprador = val; }
        /** Access m_Vendedor
         * \return The current value of m_Vendedor
         */
        string GetVendedor() { return m_Vendedor; }
        /** Set m_Vendedor
         * \param val New value to set
         */
        void SetVendedor(string val) { m_Vendedor = val; }
        /** Access m_Fecha
         * \return The current value of m_Fecha
         */
        string GetFecha() { return m_Fecha; }
        /** Set m_Fecha
         * \param val New value to set
         */
        void SetFecha(string val) { m_Fecha = val; }
        /** Access m_Ruc
         * \return The current value of m_Ruc
         */
        string GetRuc() { return m_Ruc; }
        /** Set m_Ruc
         * \param val New value to set
         */
        void SetRuc(string val) { m_Ruc = val; }
        /** Access m_Detalles
         * \return The current value of m_Detalles
         */
        vector<Detalle *> * GetDetalles() { return m_Detalles; }
        /** Set m_Detalles
         * \param val New value to set
         */
        void SetDetalles(vector<Detalle *> * val) { m_Detalles = val; }
        /** ToString
         * \param void
         */
        string ToString();
        /** Add to m_Detalles
         * \param val New value to set
         */
        void AddDetalle(Detalle* val) { m_Detalles->push_back(val); }
    protected:
    private:
        unsigned int m_Codigo; //!< Member variable "m_Codigo"
        string m_Comprador; //!< Member variable "m_Comprador"
        string m_Vendedor; //!< Member variable "m_Vendedor"
        string m_Fecha; //!< Member variable "m_Fecha"
        string m_Ruc; //!< Member variable "m_Ruc"
        vector<Detalle *> * m_Detalles; //!< Member variable "m_Detalles"
};

#endif // FACTURA_H
