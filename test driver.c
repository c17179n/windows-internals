

#include <ntddk.h>

NTSTATUS DriverUnload(_In_ PDRIVER_OBJECT driverObject) {
    KdPrint(("Goodbye World!\n"));
    return STATUS_SUCCESS;
}

NTSTATUS DriverEntry(_In_ PDRIVER_OBJECT driverObject, _In_ PUNICODE_STRING registryPath) {
    KdPrint(("Hello World!\n"));
    driverObject->DriverUnload = DriverUnload; // Set the unload function to DriverUnload

    return STATUS_SUCCESS;
}

