//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <windows.h>
#include "autopistol.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

HWND win2 = NULL;
DWORD process2;
HANDLE handle2;
HWND hlaus = NULL;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::los1(TObject *Sender)
{
   if(aubox->Checked)
 {
	 Timer1->Enabled=true;
 }
 else
 {
	 Timer1->Enabled=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ontim1(TObject *Sender)
{
  if(GetAsyncKeyState(VK_LBUTTON))
		  {
		   SendMessage(win2, WM_MBUTTONDOWN, 0x00000010, 0x01900280);
		   SendMessage(win2, WM_MBUTTONUP, 0x00000000, 0x01900280);
		  }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Timer2Timer(TObject *Sender)
{
if(win2 == NULL)
 {
  win2 = FindWindow(NULL, "HALF-LIFE 2");
  if(win2!=NULL)
   {
   status->Caption="Found Half-Life 2";
   status->Font->Color=clHighlight;

   GetWindowThreadProcessId(win2, &process2);
   handle2 = OpenProcess(PROCESS_ALL_ACCESS, FALSE, process2);

   aubox->Enabled=true;

   }
  }

   hlaus = FindWindow(NULL, "HALF-LIFE 2");
 if(hlaus == NULL)
  {
  CloseHandle(handle2);
  status->Caption="Waiting for Half-Life 2";
  status->Font->Color=clRed;
  win2 = NULL;
  aubox->Enabled=false;
   }

}
//---------------------------------------------------------------------------

void __fastcall TForm2::closehandle2(TObject *Sender, TCloseAction &Action)
{
CloseHandle(handle2);
}
//---------------------------------------------------------------------------

