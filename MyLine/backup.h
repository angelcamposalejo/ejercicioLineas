#pragma once  //______________________________________ MyLine.h  
#include "Resource.h"
class MyLine : public Win::Dialog
{
public:
	MyLine()
	{
	}
	~MyLine()
	{
	}
	void line(int asterisco);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxSalida;
	Win::Textbox tbxEntrada;
	Win::Button btCalcular;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(395);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(276);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"MyLine";
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_LEFT | ES_WINNORMALCASE, 17, 56, 371, 213, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 41, 11, 88, 25, hWnd, 1001);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 148, 10, 88, 28, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxSalida.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
