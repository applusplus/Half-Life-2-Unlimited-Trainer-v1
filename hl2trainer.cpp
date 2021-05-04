//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <windows.h>
#include "hl2trainer.h"
#include "autopistol.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

BYTE nix[1] = {0x00000000};
BYTE svcheat[1] = {0x00000001};
BYTE impulseioi[1] = {0x00000065};
BYTE impulsejeep[1] = {0x00000052};
BYTE impulsehov[1] = {0x00000053};
BYTE allmapy[1] = {0x0000000F};

HWND wind = NULL;
DWORD prozessor;
HANDLE handleact;
DWORD puffer = NULL;
HWND cssaus = NULL;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------



void __fastcall TForm1::search(TObject *Sender)
{
 if(wind == NULL)
 {
  wind = FindWindow(NULL, "HALF-LIFE 2");
  if(wind!=NULL)
   {
   status->Caption="Found Half-Life 2";
   GetWindowThreadProcessId(wind, &prozessor);
   handleact = OpenProcess(PROCESS_ALL_ACCESS, FALSE, prozessor);

   status->Font->Color=clHighlight;
   autopistol->Enabled=true;
   weapons->Enabled=true;
   jeep->Enabled=true;
   hover->Enabled=true;
   unlockmaps->Enabled=true;
   unsuit->Enabled=true;
   unpistol->Enabled=true;
   unsmg->Enabled=true;
   unmagnum->Enabled=true;
   uncrossbow->Enabled=true;
   unshotgun->Enabled=true;
   unshotgun2->Enabled=true;
   unrpggranate->Enabled=true;
   unairgun->Enabled=true;

   }
  }

   cssaus = FindWindow(NULL, "HALF-LIFE 2");
 if(cssaus == NULL)
  {
  CloseHandle(handleact);
  status->Caption="Waiting for Half-Life 2";
  status->Font->Color=clYellow;
  wind = NULL;

  autopistol->Enabled=false;
   weapons->Enabled=false;
   jeep->Enabled=false;
   hover->Enabled=false;
   unlockmaps->Enabled=false;
   unsuit->Enabled=false;
   unpistol->Enabled=false;
   unsmg->Enabled=false;
   unmagnum->Enabled=false;
   uncrossbow->Enabled=false;
   unshotgun->Enabled=false;
   unshotgun2->Enabled=false;
   unrpggranate->Enabled=false;
   unairgun->Enabled=false;
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::aupi(TObject *Sender)
{

	Form2 = new TForm2(Application);
	Form2->ShowModal();
	delete Form2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::weaponsspawn(TObject *Sender)
{
 if(weapons->Checked)
 {
  WriteProcessMemory(handleact,(void*)(0x20563FEC),&svcheat,1,&puffer); //sv_cheats 1
  WriteProcessMemory(handleact,(void*)(0x24309640),&impulseioi,1,&puffer); // impulse 101
  WriteProcessMemory(handleact,(void*)(0x20563FEC),&nix,1,&puffer);   //sv_cheats 0
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::closehandle(TObject *Sender, TCloseAction &Action)
{
CloseHandle(handleact);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::jeepspawn(TObject *Sender)
{
   if(jeep->Checked)
 {
  WriteProcessMemory(handleact,(void*)(0x20563FEC),&svcheat,1,&puffer); //sv_cheats 1
  WriteProcessMemory(handleact,(void*)(0x24309640),&impulsejeep,1,&puffer); // impulse 82
  WriteProcessMemory(handleact,(void*)(0x20563FEC),&nix,1,&puffer);   //sv_cheats 0
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spawnvover(TObject *Sender)
{
  if(hover->Checked)
 {
  WriteProcessMemory(handleact,(void*)(0x20563FEC),&svcheat,1,&puffer); //sv_cheats 1
  WriteProcessMemory(handleact,(void*)(0x24309640),&impulsehov,1,&puffer); // impulse 83
  WriteProcessMemory(handleact,(void*)(0x20563FEC),&nix,1,&puffer);   //sv_cheats 0
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::mapunlocker(TObject *Sender)
{
   if(unlockmaps->Checked)
 {
  WriteProcessMemory(handleact,(void*)(0x20563FEC),&svcheat,1,&puffer); //sv_cheats 1
  WriteProcessMemory(handleact,(void*)(0x203C287C),&allmapy,1,&puffer); // sv_unlockedchapters 15
  WriteProcessMemory(handleact,(void*)(0x20563FEC),&nix,1,&puffer);   //sv_cheats 0
 }
}
//---------------------------------------------------------------------------

