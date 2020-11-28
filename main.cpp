#include <iostream>
#include <Windows.h>
#include <string>
#include <TlHelp32.h>
#include <stdio.h>

using namespace std;

DWORD id;

int main() {
	HWND hWnd = FindWindowA(0, ("Lunar Client (1.8.9-2b78591/master)"));
	GetWindowThreadProcessId(hWnd, &id);

	if (hWnd) {
		cout << id << endl;

		SetWindowTextA(hWnd, "MINECRAFT HACKED BY SINCERATE");
	}
	else {
		cout << "Window not found idiot fucking actually add a proper window this time retard!" << endl;
	}
	system("pause");
}
