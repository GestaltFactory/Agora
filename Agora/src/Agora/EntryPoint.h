#pragma once

#ifdef AGORA_PLATFORM_WINDOWS
	
	extern Agora::Application* Agora::CreateApplication();

	int main(int argc, char** argv)
	{
		auto app = Agora::CreateApplication();
		app->Run();
		delete app;
	}

#endif