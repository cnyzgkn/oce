// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_CartesianPoint_HeaderFile
#define _PGeom2d_CartesianPoint_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom2d_CartesianPoint_HeaderFile
#include <Handle_PGeom2d_CartesianPoint.hxx>
#endif

#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _PGeom2d_Point_HeaderFile
#include <PGeom2d_Point.hxx>
#endif
class gp_Pnt2d;


class PGeom2d_CartesianPoint : public PGeom2d_Point {

public:

  //! Returns a CartesianPoint with default values.. <br>
  Standard_EXPORT   PGeom2d_CartesianPoint();
  //! Returns a CartesianPoint built with <aPnt2d>. <br>
  Standard_EXPORT   PGeom2d_CartesianPoint(const gp_Pnt2d& aPnt2d);
  //! Set the field Pnt2d. <br>
  Standard_EXPORT     void Pnt(const gp_Pnt2d& aPnt2d) ;
  //! Returns the value of the field Pnt2d. <br>
  Standard_EXPORT     gp_Pnt2d Pnt() const;

PGeom2d_CartesianPoint(const Storage_stCONSTclCOM& a) : PGeom2d_Point(a)
{
  
}
    const gp_Pnt2d& _CSFDB_GetPGeom2d_CartesianPointpnt() const { return pnt; }



  DEFINE_STANDARD_RTTI(PGeom2d_CartesianPoint)

protected:




private: 


gp_Pnt2d pnt;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif