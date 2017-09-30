#include <windows.h>

#if _MSC_VER > 1200 // Later than Visual Studio 6.0
#define EXPORT comment(linker, "/EXPORT:" __FUNCTION__ "=" __FUNCDNAME__)
#else // Cannot use this way of exporting functions.
#define EXPORT
#endif // else need to use DEF file or __declspec(dllexport)

int __stdcall Test(HWND hWnd)
{
#pragma EXPORT
	MessageBox(hWnd, TEXT("Test"), TEXT("Title"), 0);
	return 0;
}