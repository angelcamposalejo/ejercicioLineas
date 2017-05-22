#include "stdafx.h"  //________________________________________ MyLine.cpp
#include "MyLine.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	MyLine app;
	return app.BeginDialog(IDI_MyLine, hInstance);
}

void MyLine::Window_Open(Win::Event& e)
{
	line(3);
	line(4);
	line(5);
}
void MyLine::line(int asterisco)
{
	wstring texto;
	for (int i = 0; i < asterisco; i++)
	{
		Sys::Format(texto, L"%s", "*");
		tbxSalida.Text += texto;
	}
	Sys::Format(texto, L"\r\n");
	tbxSalida.Text += texto;
}

