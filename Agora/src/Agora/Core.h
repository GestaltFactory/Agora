#pragma once

#ifdef AGORA_PLATFORM_WINDOWS
	#ifdef AGORA_BUILD_DLL
		#define AGORA_API __declspec(dllexport)
	#else
		#define AGORA_API __declspec(dllimport)
	#endif
#else
	#error Agora only support Windows!
#endif
