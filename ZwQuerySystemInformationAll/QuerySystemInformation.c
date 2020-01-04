#include "QuerySystemInformation.h"

VOID ZwQuerySystemInformation_SystemBasicInformation()
{
    ULONG uSize = 0;
    PVOID pBuf = NULL;
    NTSTATUS status = STATUS_SUCCESS;
    ZwQuerySystemInformation(SystemBasicInformation, NULL, 0, &uSize);
    do
    {
        pBuf = ExAllocatePool(NonPagedPool, uSize);
        if (pBuf == NULL)
        {
            break;
        }
        RtlZeroMemory(pBuf, uSize);
        status = ZwQuerySystemInformation(SystemBasicInformation, pBuf, uSize, &uSize);

        PSYSTEM_BASIC_INFORMATION pInfo = (PSYSTEM_BASIC_INFORMATION)pBuf;

        PSYSTEM_BASIC_INFORMATION pInfo2 = pInfo;

    } while (FALSE);


    if (pBuf != NULL)
    {
        ExFreePool(pBuf);
        pBuf = NULL;
    }

}

VOID ZwQuerySystemInformation_SystemProcessorInformation()
{
    ULONG uSize = 0;
    PVOID pBuf = NULL;
    NTSTATUS status = STATUS_SUCCESS;
    ZwQuerySystemInformation(SystemProcessorInformation, NULL, 0, &uSize);
    do
    {
        pBuf = ExAllocatePool(NonPagedPool, uSize);
        if (pBuf == NULL)
        {
            break;
        }
        RtlZeroMemory(pBuf, uSize);
        status = ZwQuerySystemInformation(SystemProcessorInformation, pBuf, uSize, &uSize);

        PSYSTEM_PROCESSOR_INFORMATION pInfo = (PSYSTEM_PROCESSOR_INFORMATION)pBuf;

        PSYSTEM_PROCESSOR_INFORMATION pInfo2 = pInfo;

    } while (FALSE);


    if (pBuf != NULL)
    {
        ExFreePool(pBuf);
        pBuf = NULL;
    }
}

VOID ZwQuerySystemInformation_SystemPerformanceInformation()
{
    ULONG uSize = 0;
    PVOID pBuf = NULL;
    NTSTATUS status = STATUS_SUCCESS;
    ZwQuerySystemInformation(SystemPerformanceInformation, NULL, 0, &uSize);
    do
    {
        pBuf = ExAllocatePool(NonPagedPool, uSize);
        if (pBuf == NULL)
        {
            break;
        }
        RtlZeroMemory(pBuf, uSize);
        status = ZwQuerySystemInformation(SystemPerformanceInformation, pBuf, uSize, &uSize);

        PSYSTEM_PERFORMANCE_INFORMATION pInfo = (PSYSTEM_PERFORMANCE_INFORMATION)pBuf;

        PSYSTEM_PERFORMANCE_INFORMATION pInfo2 = pInfo;

    } while (FALSE);


    if (pBuf != NULL)
    {
        ExFreePool(pBuf);
        pBuf = NULL;
    }
}

VOID ZwQuerySystemInformation_SystemTimeOfDayInformation()
{
    ULONG uSize = 0;
    PVOID pBuf = NULL;
    NTSTATUS status = STATUS_SUCCESS;
    ZwQuerySystemInformation(SystemTimeOfDayInformation, NULL, 0, &uSize);
    do
    {
        pBuf = ExAllocatePool(NonPagedPool, uSize);
        if (pBuf == NULL)
        {
            break;
        }
        RtlZeroMemory(pBuf, uSize);
        status = ZwQuerySystemInformation(SystemTimeOfDayInformation, pBuf, uSize, &uSize);

        PSYSTEM_TIMEOFDAY_INFORMATION pInfo = (PSYSTEM_TIMEOFDAY_INFORMATION)pBuf;

        PSYSTEM_TIMEOFDAY_INFORMATION pInfo2 = pInfo;

    } while (FALSE);


    if (pBuf != NULL)
    {
        ExFreePool(pBuf);
        pBuf = NULL;
    }
}

VOID ZwQuerySystemInformation_SystemPathInformation()
{
    // 无法使用改函数


//     ULONG uSize = 0;
//     PVOID pBuf = NULL;
//     NTSTATUS status = STATUS_SUCCESS;
//     ZwQuerySystemInformation(SystemPathInformation, NULL, 0, &uSize);
//     // 这里uSize返回0
//     do
//     {
//         pBuf = ExAllocatePool(NonPagedPool, uSize);
//         if (pBuf == NULL)
//         {
//             break;
//         }
//         RtlZeroMemory(pBuf, uSize);
//         status = ZwQuerySystemInformation(SystemPathInformation, pBuf, uSize, &uSize);
//         // 这里status 返回STATUS_NOT_IMPLEMENTED
// 
//     } while (FALSE);
// 
// 
//     if (pBuf != NULL)
//     {
//         ExFreePool(pBuf);
//     }

}

VOID ZwQuerySystemInformation_SystemProcessInformation()
{
    ULONG uSize = 0;
    PVOID pBuf = NULL;
    NTSTATUS status = STATUS_SUCCESS;
    ZwQuerySystemInformation(SystemProcessInformation, NULL, 0, &uSize);
    do
    {
        pBuf = ExAllocatePool(NonPagedPool, uSize);
        if (pBuf == NULL)
        {
            break;
        }
        RtlZeroMemory(pBuf, uSize);
        status = ZwQuerySystemInformation(SystemProcessInformation, pBuf, uSize, &uSize);

        PSYSTEM_PROCESS_INFORMATION pInfo = (PSYSTEM_PROCESS_INFORMATION)pBuf;
        for (ULONG i = 0; i < pInfo->NumberOfThreads; i++)
        {
            PSYSTEM_THREAD_INFORMATION pThread = &pInfo->Threads[i];
            PSYSTEM_THREAD_INFORMATION pThread2 = pThread;
        }


    } while (FALSE);


    if (pBuf != NULL)
    {
        ExFreePool(pBuf);
        pBuf = NULL;
    }
}
