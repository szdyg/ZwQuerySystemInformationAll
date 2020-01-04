#include "QuerySystemInformation.h"



VOID Unload(_In_ PDRIVER_OBJECT  DriverObject)
{

}

VOID UnitTest()
{
    KdBreakPoint();

//     ZwQuerySystemInformation_SystemBasicInformation();
//     ZwQuerySystemInformation_SystemProcessorInformation();
//     ZwQuerySystemInformation_SystemPerformanceInformation();
//     ZwQuerySystemInformation_SystemTimeOfDayInformation();
//     ZwQuerySystemInformation_SystemPathInformation();
    ZwQuerySystemInformation_SystemProcessInformation();




}

NTSTATUS DriverEntry(_In_ PDRIVER_OBJECT  DriverObject, _In_ PUNICODE_STRING RegistryPath)
{
    DriverObject->DriverUnload = Unload;
    UnitTest();


    return STATUS_SUCCESS;
}