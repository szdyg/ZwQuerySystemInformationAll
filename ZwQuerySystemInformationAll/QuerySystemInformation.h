#pragma once
#include <ntddk.h>

#include "ZwQuerySystemInformationEnums.h"
#include "ZwQuerySystemInformationStruct.h"


NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySystemInformation(
    IN SYSTEM_INFORMATION_CLASS SystemInformationClass,
    OUT PVOID SystemInformation,
    IN ULONG SystemInformationLength,
    OUT PULONG ReturnLength OPTIONAL
);



VOID ZwQuerySystemInformation_SystemBasicInformation();
VOID ZwQuerySystemInformation_SystemProcessorInformation();
VOID ZwQuerySystemInformation_SystemPerformanceInformation();
VOID ZwQuerySystemInformation_SystemTimeOfDayInformation();
VOID ZwQuerySystemInformation_SystemPathInformation();
VOID ZwQuerySystemInformation_SystemProcessInformation();


