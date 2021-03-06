// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

//This file pulls in OS-specific header files to allow compilation of socket_async.c under
// most OS's except for Windows.

// For Linux systems
//#include <sys/types.h>
//#include <sys/socket.h>
//#include <sys/select.h>
//#include <netinet/in.h>
//#include <netinet/tcp.h>
//#include <sys/errno.h>
//#include <fcntl.h>
//#include <unistd.h>
//#include <netdb.h>

// For rtl8710c
#include <platform/platform_stdlib.h>
#include "basic_types.h"
#include <lwip/sockets.h>
//#include <sys/select.h>
#include <lwip/inet.h>
#include <lwip/tcp.h>
//#include <sys/errno.h>
//#include <fcntl.h>
//#include <unistd.h>
#include <lwip/netdb.h>
#include <lwip_netconf.h>
#define ssize_t SSIZE_T

