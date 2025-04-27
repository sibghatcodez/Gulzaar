#pragma once
#ifdef GZ_PLATFORM_WINDOWS
	#ifdef GZ_BUILD_DLL
		#define GULZAAR_API _declspec(dllexport)
	#else
		#define GULZAAR_API _declspec(dllimport)

	#endif
#else
	#error Gulzaar only suppports windows
#endif
