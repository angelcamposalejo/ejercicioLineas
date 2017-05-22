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
	for (int i = 1; i <= asterisco; i++)
	{
		for (int n = 1; i >= n; n++)
		{
			Sys::Format(texto, L"%s", "*");
			tbxSalida.Text += texto;
		}
		Sys::Format(texto, L"\r\n");
		tbxSalida.Text += texto;
	}
	for (int i = asterisco-1; i >= 1; i--)
	{
		for (int n = i; n >= 1; n--)
		{
			Sys::Format(texto, L"%s", "*");
			tbxSalida.Text += texto;
		}
		Sys::Format(texto, L"\r\n");
		tbxSalida.Text += texto;
	}
	//Sys::Format(texto, L"\r\n");
	//tbxSalida.Text += texto;
}
void MyLine::repetir(int hasta)
{
	line(hasta);
}


void MyLine::btCalcular_Click(Win::Event& e)
{
	tbxSalida.Text = L"";
	const int entrada = tbxEntrada.IntValue;
	repetir(tbxEntrada.IntValue);
}

