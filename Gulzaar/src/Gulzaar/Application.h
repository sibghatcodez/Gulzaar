#pragma once

#include "Core.h"

namespace Gulzaar {

	class GULZAAR_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	Application* CreateApplication();
}

