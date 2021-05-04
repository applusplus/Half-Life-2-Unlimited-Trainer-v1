//---------------------------------------------------------------------------

#ifndef autopistolH
#define autopistolH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-verwaltete Komponenten
	TCheckBox *aubox;
	TTimer *Timer1;
	TTimer *Timer2;
	TLabel *Label1;
	TLabel *status;
	TLabel *copyright;
	void __fastcall los1(TObject *Sender);
	void __fastcall ontim1(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall closehandle2(TObject *Sender, TCloseAction &Action);
private:	// Benutzer-Deklarationen
public:		// Benutzer-Deklarationen
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
