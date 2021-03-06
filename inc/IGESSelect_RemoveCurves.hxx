// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_RemoveCurves_HeaderFile
#define _IGESSelect_RemoveCurves_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_RemoveCurves.hxx>

#include <Standard_Boolean.hxx>
#include <IGESSelect_ModelModifier.hxx>
#include <Handle_IGESData_IGESModel.hxx>
class IFSelect_ContextModif;
class IGESData_IGESModel;
class Interface_CopyTool;
class TCollection_AsciiString;


//! Removes Curves UV or 3D (not both !) from Faces, those
//! designated by the Selection. No Selection means all the file
class IGESSelect_RemoveCurves : public IGESSelect_ModelModifier
{

public:

  
  //! Creates a RemoveCurves from Faces (141/142/143/144)
  //! UV True  : Removes UV Curves (pcurves)
  //! UV False : Removes 3D Curves
  Standard_EXPORT IGESSelect_RemoveCurves(const Standard_Boolean UV);
  
  //! Specific action : Removes the Curves
  Standard_EXPORT   void Performing (IFSelect_ContextModif& ctx, const Handle(IGESData_IGESModel)& target, Interface_CopyTool& TC)  const;
  
  //! Returns a text which is
  //! "Remove Curves UV on Face"  or  "Remove Curves 3D on Face"
  Standard_EXPORT   TCollection_AsciiString Label()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_RemoveCurves)

protected:




private: 


  Standard_Boolean theUV;


};







#endif // _IGESSelect_RemoveCurves_HeaderFile
