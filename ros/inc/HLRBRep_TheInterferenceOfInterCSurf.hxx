// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_TheInterferenceOfInterCSurf_HeaderFile
#define _HLRBRep_TheInterferenceOfInterCSurf_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Intf_Interference_HeaderFile
#include <Intf_Interference.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class HLRBRep_ThePolygonOfInterCSurf;
class HLRBRep_ThePolygonToolOfInterCSurf;
class HLRBRep_ThePolyhedronOfInterCSurf;
class HLRBRep_ThePolyhedronToolOfInterCSurf;
class gp_Lin;
class Intf_Array1OfLin;
class Bnd_BoundSortBox;
class gp_Pnt;
class gp_XYZ;



class HLRBRep_TheInterferenceOfInterCSurf  : public Intf_Interference {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   HLRBRep_TheInterferenceOfInterCSurf();
  
  Standard_EXPORT   HLRBRep_TheInterferenceOfInterCSurf(const HLRBRep_ThePolygonOfInterCSurf& thePolyg,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh);
  
  Standard_EXPORT   HLRBRep_TheInterferenceOfInterCSurf(const gp_Lin& theLin,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh);
  
  Standard_EXPORT   HLRBRep_TheInterferenceOfInterCSurf(const Intf_Array1OfLin& theLins,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh);
  
  Standard_EXPORT     void Perform(const HLRBRep_ThePolygonOfInterCSurf& thePolyg,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh) ;
  
  Standard_EXPORT     void Perform(const gp_Lin& theLin,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh) ;
  
  Standard_EXPORT     void Perform(const Intf_Array1OfLin& theLins,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh) ;
  
  Standard_EXPORT   HLRBRep_TheInterferenceOfInterCSurf(const HLRBRep_ThePolygonOfInterCSurf& thePolyg,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh,Bnd_BoundSortBox& theBoundSB);
  
  Standard_EXPORT   HLRBRep_TheInterferenceOfInterCSurf(const gp_Lin& theLin,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh,Bnd_BoundSortBox& theBoundSB);
  
  Standard_EXPORT   HLRBRep_TheInterferenceOfInterCSurf(const Intf_Array1OfLin& theLins,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh,Bnd_BoundSortBox& theBoundSB);
  
  Standard_EXPORT     void Perform(const HLRBRep_ThePolygonOfInterCSurf& thePolyg,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh,Bnd_BoundSortBox& theBoundSB) ;
  
  Standard_EXPORT     void Perform(const gp_Lin& theLin,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh,Bnd_BoundSortBox& theBoundSB) ;
  
  Standard_EXPORT     void Perform(const Intf_Array1OfLin& theLins,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh,Bnd_BoundSortBox& theBoundSB) ;
  
  Standard_EXPORT     void Interference(const HLRBRep_ThePolygonOfInterCSurf& thePolyg,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh,Bnd_BoundSortBox& theBoundSB) ;
  
  Standard_EXPORT     void Interference(const HLRBRep_ThePolygonOfInterCSurf& thePolyg,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh) ;





protected:





private:

  
  Standard_EXPORT     void Intersect(const gp_Pnt& BegO,const gp_Pnt& EndO,const Standard_Boolean Infinite,const Standard_Integer TTri,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh) ;
  
  Standard_EXPORT     void Intersect(const gp_Pnt& BegO,const gp_Pnt& EndO,const Standard_Boolean Infinite,const Standard_Integer TTri,const HLRBRep_ThePolyhedronOfInterCSurf& thePolyh,const gp_XYZ& TriNormal,const Standard_Real TriDp,const Standard_Real dBegTri,const Standard_Real dEndTri) ;


Standard_Boolean BeginOfClosedPolygon;
Standard_Integer iLin;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
