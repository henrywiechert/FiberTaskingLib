/* FiberTaskingLib - A tasking library that uses fibers for efficient task switching
 *
 * This library was created as a proof of concept of the ideas presented by
 * Christian Gyrling in his 2015 GDC Talk 'Parallelizing the Naughty Dog Engine Using Fibers'
 *
 * http://gdcvault.com/play/1022186/Parallelizing-the-Naughty-Dog-Engine
 *
 * FiberTaskingLib is the legal property of Adrian Astley
 * Copyright Adrian Astley 2015
 */

#pragma once

#if defined(_MSC_VER)
	#define FIBER_IMPL_SUPPORTS_TLS
#endif

#if defined(_MSC_VER)
	#define WIN32_FIBER_IMPL
#else
	#define BOOST_CONTEXT_FIBER_IMPL
#endif


#if __APPLE__
    #include "TargetConditionals.h"

    #if defined(TARGET_OS_MAC)
        #define FTL_OS_MAC
    #endif

    #if defined(TARGET_OS_IPHONE)
        #define FTL_OS_iOS
    #endif

#endif //__APPLE__