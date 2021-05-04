//---------------------------------------------------------------------------

#ifndef hl2trainerH
#define hl2trainerH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-verwaltete Komponenten
	TImage *Image1;
	TLabel *cheats;
	TCheckBox *weapons;
	TLabel *allweapons;
	TCheckBox *jeep;
	TCheckBox *hover;
	TCheckBox *unlockmaps;
	TLabel *spawnjeep;
	TLabel *spawnhover;
	TLabel *mapunlock;
	TLabel *statuslaber;
	TLabel *status;
	TButton *autopistol;
	TLabel *UClabel;
	TCheckBox *unsuit;
	TCheckBox *unpistol;
	TCheckBox *unsmg;
	TCheckBox *unmagnum;
	TCheckBox *uncrossbow;
	TCheckBox *unshotgun;
	TCheckBox *unshotgun2;
	TCheckBox *unrpggranate;
	TCheckBox *unairgun;
	TLabel *usuitlabel;
	TLabel *upistollabel;
	TLabel *smglabel;
	TLabel *magnumlabel;
	TLabel *bowlabel;
	TLabel *shotgunlablel;
	TLabel *shotgun2label;
	TLabel *rpglabel;
	TLabel *airboatlabel;
	TTimer *Timer1;
	TLabel *copyright1;
	void __fastcall search(TObject *Sender);
	void __fastcall aupi(TObject *Sender);
	void __fastcall weaponsspawn(TObject *Sender);
	void __fastcall closehandle(TObject *Sender, TCloseAction &Action);
	void __fastcall jeepspawn(TObject *Sender);
	void __fastcall spawnvover(TObject *Sender);
	void __fastcall mapunlocker(TObject *Sender);
private:	// Benutzer-Deklarationen
public:		// Benutzer-Deklarationen
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
