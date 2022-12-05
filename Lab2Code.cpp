//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Lab2Code.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//добавление задачь---------------------------------------------------------------------------
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
		String taskText=TaskEdit->Text;
		TasksListBox->Items->Add(taskText);
		TaskEdit->Text="";

}
//удаление задачь---------------------------------------------------------------------------
void __fastcall TForm1::TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
		int index = Item->Index;
		TasksListBox->Items->Delete(index);


}
//---------------------------------------------------------------------------
