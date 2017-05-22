#include "stdafx.h"  //________________________________________ MyLine.cpp
#include "MyLine.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	MyLine app;
	return app.BeginDialog(IDI_MyLine, hInstance);
}

void MyLine::Window_Open(Win::Event& e)
{
	
}
void MyLine::line(int asterisco)
{
	wstring texto;
	for (int i = 0; i < 4; i++)
	{
		Sys::Format(texto, L"%s", "*");
		tbxSalida.Text += texto;
	}
	Sys::Format(texto, L"\r\n");
	tbxSalida.Text += texto;
}
void MyLine::repetir(int hasta)
{
	for (int j = 0; j < hasta; j++)
	{
		line(4);
	}
}

void MyLine::btCalcular_Click(Win::Event& e)
{
	tbxSalida.Text = L"";
	const int entrada = tbxEntrada.IntValue;
	repetir(tbxEntrada.IntValue);
}

