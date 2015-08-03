//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDM1 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *config;
	TADOQuery *QuerySekolah;
	TDataSource *DSSekolah;
	TADOQuery *QueryUser;
private:	// User declarations
public:		// User declarations
	__fastcall TDM1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM1 *DM1;
//---------------------------------------------------------------------------
#endif
