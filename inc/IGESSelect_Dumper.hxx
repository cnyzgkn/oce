// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_Dumper_HeaderFile
#define _IGESSelect_Dumper_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_Dumper.hxx>

#include <IFSelect_SessionDumper.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Standard_Transient.hxx>
class IFSelect_SessionFile;
class Standard_Transient;
class TCollection_AsciiString;


//! Dumper from IGESSelect takes into account, for SessionFile, the
//! classes defined in the package IGESSelect : Selections,
//! Dispatches, Modifiers
class IGESSelect_Dumper : public IFSelect_SessionDumper
{

public:

  
  //! Creates a Dumper and puts it into the Library of Dumper
  Standard_EXPORT IGESSelect_Dumper();
  
  //! Write the Own Parameters of Types defined in package IGESSelect
  //! Returns True if <item> has been processed, False else
  Standard_EXPORT   Standard_Boolean WriteOwn (IFSelect_SessionFile& file, const Handle(Standard_Transient)& item)  const;
  
  //! Recognizes and Read Own Parameters for Types of package
  //! IGESSelect. Returns True if done and <item> created, False else
  Standard_EXPORT   Standard_Boolean ReadOwn (IFSelect_SessionFile& file, const TCollection_AsciiString& type, Handle(Standard_Transient)& item)  const;




  DEFINE_STANDARD_RTTI(IGESSelect_Dumper)

protected:




private: 




};







#endif // _IGESSelect_Dumper_HeaderFile
