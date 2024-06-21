#include <ntddk.h>

DRIVER_INITIALIZE DriverEntry;
DRIVER_UNLOAD drvUnload;

NTSTATUS DriverEntry(_In_ PDRIVER_OBJECT DriverObject, _In_ PUNICODE_STRING registry) {
	UNREFERENCED_PARAMETER(registry);

	DriverObject->DriverUnload = drvUnload;

	PVOID ptr1 = NULL;
	PVOID ptr2 = NULL;
	memcpy(ptr1, ptr2, sizeof(ptr1));

	return STATUS_SUCCESS;
}

VOID drvUnload(PDRIVER_OBJECT DriverObject) {
	UNREFERENCED_PARAMETER(DriverObject);
}