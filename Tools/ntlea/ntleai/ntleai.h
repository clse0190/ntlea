
typedef struct {
	LPVOID lpGetTimeZoneInformation;
	LPVOID lpEnumFontFamiliesExA;
	LPVOID lpEnumFontFamiliesExW;
	LPVOID lpEnumFontsA;
	LPVOID lpEnumFontsW;
	LPVOID lpUser32SEHAddress;
	LPVOID lpProcInfoAddress;
	LPVOID lpCreateProcAddress;
	LPVOID lpCreateProcAnsiAddress;
	LPVOID lpCreateProcUniAddress;
	LPVOID lpCreateWindowExAddress;
	LPVOID lpCreateWindowExWddress;
	LPVOID lpCallWindowProcAddress;
	LPVOID lpSetWindowLongAddress;
	LPVOID lpParameterAddress;
	LPVOID lpMBtoUniAddress;
	LPVOID lpUnitoMBAddress;
	LPVOID lpMBtoWCAddress;
	LPVOID lpWCtoMBAddress;
	LPVOID lpCPInfoAddress;
	LPVOID lpGetWindowLongPtrSelect;
	LPVOID lpGetWindowLongPtrAddress;
	LPVOID lpCreateFileAddress;
	LPVOID lpShellExecuteAddress;
	LPVOID lpCompareStringAddress;
	LPVOID lpVerQueryValueAddress;
	LPVOID lpGetStockObjectAddress;
//	LPVOID lpFindResourceAddress;
//	LPVOID lpReturnAddress;
//	LPVOID lpReturnAddressVQV;
//	LPVOID lpWindowProcTable;
//	LPVOID lpWindowHandleTable;
//	DWORD  lpAcGenralType;
	DWORD  lpAcGenralAnsiType;
	DWORD  lpAcGenralUniType;
} Addresses;

LONG_PTR WINAPI GetWindowLongPtrJ0(HWND hWnd, int nIndex);
LONG_PTR WINAPI GetWindowLongPtrJ8(HWND hWnd, int nIndex);
