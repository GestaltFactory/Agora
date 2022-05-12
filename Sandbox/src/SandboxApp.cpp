#include <Agora.h>

class Sandbox : public Agora::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Agora::Application* Agora::CreateApplication()
{
	return new Sandbox();
}