// This file has been generated by Py++.

#include "ForceField.pypp.hpp"
#include "boost/python.hpp"
#include "/people/cheetah/asaladin/Src/ptools/trunk/ptools.h"
#include "/people/cheetah/asaladin/Src/ptools/trunk/pairlist_dummy.h"

namespace bp = boost::python;

struct ForceField_wrapper : PTools::ForceField, bp::wrapper< PTools::ForceField > {

    ForceField_wrapper()
    : PTools::ForceField()
      , bp::wrapper< PTools::ForceField >(){
        // null constructor
        
    }

    virtual void Derivatives( ::Vdouble const & arg0, ::Vdouble & arg1 ){
        bp::override func_Derivatives = this->get_override( "Derivatives" );
        func_Derivatives( boost::ref(arg0), boost::ref(arg1) );
    }

    virtual double Function( ::Vdouble const & arg0 ){
        bp::override func_Function = this->get_override( "Function" );
        return func_Function( boost::ref(arg0) );
    }

    virtual void NumDerivatives( ::Vdouble const & StateVars, ::Vdouble & delta ) {
        if( bp::override func_NumDerivatives = this->get_override( "NumDerivatives" ) )
            func_NumDerivatives( boost::ref(StateVars), boost::ref(delta) );
        else
            this->PTools::ForceField::NumDerivatives( boost::ref(StateVars), boost::ref(delta) );
    }
    
    
    void default_NumDerivatives( ::Vdouble const & StateVars, ::Vdouble & delta ) {
        PTools::ForceField::NumDerivatives( boost::ref(StateVars), boost::ref(delta) );
    }

    virtual ::uint ProblemSize(  ){
        bp::override func_ProblemSize = this->get_override( "ProblemSize" );
        return func_ProblemSize(  );
    }

};

void register_ForceField_class(){

    bp::class_< ForceField_wrapper, boost::noncopyable >( "ForceField" )    
        .def( 
            "Derivatives"
            , bp::pure_virtual( &::PTools::ForceField::Derivatives )
            , ( bp::arg("arg0"), bp::arg("arg1") ) )    
        .def( 
            "Function"
            , bp::pure_virtual( &::PTools::ForceField::Function )
            , ( bp::arg("arg0") ) )    
        .def( 
            "NumDerivatives"
            , &::PTools::ForceField::NumDerivatives
            , &ForceField_wrapper::default_NumDerivatives
            , ( bp::arg("StateVars"), bp::arg("delta") ) )    
        .def( 
            "ProblemSize"
            , bp::pure_virtual( &::PTools::ForceField::ProblemSize ) );

}
