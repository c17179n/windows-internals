#include <ntddk.h>                  

NTSTATUS DriverEntry(_In_ PDRIVER_OBJECT driverObject, _In_ PUNICODE_STRING registryPath) {
    KdPrint(("Hello World!\n"));    
    return STATUS_SUCCESS;
}
