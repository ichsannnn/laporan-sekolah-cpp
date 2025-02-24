//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPanel *panelcreate;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TComboBox *bidangstudi;
	TComboBox *programstudi;
	TComboBox *kompetensi;
	TComboBox *kelas;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label19;
	TLabel *Label20;
	TLabel *Label21;
	TLabel *Label22;
	TLabel *Label23;
	TLabel *Label24;
	TLabel *Label25;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TLabel *Label29;
	TEdit *Enis;
	TEdit *Enisn;
	TEdit *Enama;
	TEdit *Etempat;
	TEdit *Eagama;
	TEdit *Eparents;
	TEdit *Eijazah;
	TEdit *Etahun;
	TMemo *Malamat;
	TButton *Button1;
	TButton *Button2;
	TRadioGroup *RGgender;
	TEdit *Etanggal;
	TButton *Button3;
	TfrxReport *ReportSiswa;
	TLabel *Label30;
	TPanel *panellogin;
	TPanel *paneldaftar;
	TLabel *Label31;
	TLabel *Label32;
	TEdit *username;
	TEdit *password;
	TButton *Button4;
	TfrxDBDataset *dbsiswa;
	TPanel *panelheader;
	TImage *Image1;
	TImage *Image2;
	TShape *Shape1;
	TShape *Shape2;
	TPanel *panelfooter;
	TLabel *Label35;
	TLabel *Label36;
	TButton *Button5;
	TLabel *Label33;
	TLabel *Label34;
	TLabel *Label37;
	TLabel *Label38;
	TEdit *EUsernameDaftar;
	TEdit *EPasswordDaftar;
	TLabel *Label39;
	TEdit *cari;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TShape *Shape3;
	TShape *Shape4;
	TPanel *panelcari;
	TPanel *Panel2;
	TPanel *Panel1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall bidangstudiChange(TObject *Sender);
	void __fastcall programstudiChange(TObject *Sender);
	void __fastcall kompetensiChange(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall kelasChange(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Label33MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label33MouseLeave(TObject *Sender);
	void __fastcall Label33Click(TObject *Sender);
	void __fastcall Label37MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label37MouseLeave(TObject *Sender);
	void __fastcall Label37Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall passwordKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall usernameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Panel2Click(TObject *Sender);
	void __fastcall Panel1Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall cariKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);




private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
