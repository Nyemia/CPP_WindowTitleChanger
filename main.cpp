#include <iostream>
#include <Windows.h>
#include <string>
#include <TlHelp32.h>
#include <stdio.h>

using namespace std;

DWORD id;

int main() {
    HWND hWnd = FindWindowA(0, ("window name"));
    GetWindowThreadProcessId(hWnd, &id);

    if (hWnd) {
        cout << id << endl;

        SetWindowTextA(hWnd, "new name");
    }
    else {
        cout << "Window not found" << endl;
    }
    system("pause");
}
