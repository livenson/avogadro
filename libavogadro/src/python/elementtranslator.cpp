// Last update: timvdm 12 May 2009

#include <boost/python.hpp>

#include <avogadro/elementtranslator.h>

using namespace boost::python;
using namespace Avogadro;

void export_ElementTranslator()
{
  
  class_<Avogadro::ElementTranslator, boost::noncopyable>("ElementTranslator", no_init)
    // real functions
    .def("name", &ElementTranslator::name)
    .staticmethod("name")
    ;

}