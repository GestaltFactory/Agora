#pragma once

#include "Core.h"

namespace Agora
{
	class AGORA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}

