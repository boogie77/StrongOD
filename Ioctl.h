/*++

Copyright (c) Bombs

Module Name:
	
	Ioctl.h

Author  :Bombs
Time    :2014-5-8 10:01:51
Abstract:
   
	IOCTLs used by the app interacts with the driver

--*/

#ifndef _IOCTL_H
#define _IOCTL_H

#define IOCTL_SOD_ADD_WHITE_PROC	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x857, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SOD_DEL_WHITE_PROC	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x858, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SOD_ADD_BLACK_PROC	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x859, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SOD_DEL_BLACK_PROC	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x85A, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SOD_HOOK_INT1     	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x85B, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SOD_UNHOOK_INT1   	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x85C, METHOD_BUFFERED, FILE_ANY_ACCESS)

#endif