//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <SysUtils.hpp>
#include "Unit2.h"
#include "Unit1.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall TThered::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall TThered::TThered(bool CreateSuspended)
        : TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall TThered::Execute()
{
         const double r=100000;
 for (int j=1;j<=r ;j++)
 {
  bool t=true;
  int i=2;
  while ((i <= j)&&(t))
    {
     double d =j/i;
     if (j == (int)(i*d) )
       { t=false;}
     i++;}
   if ( t){

   Form1->Label1->Caption=IntToStr(j);// || Label1->Caption;
   }
 }
}
//---------------------------------------------------------------------------
