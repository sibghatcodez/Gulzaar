#include <Gulzaar.h>


class Sandbox : public Gulzaar::Application {

	public:
		Sandbox() {

		}

		~Sandbox() {

		}
};

Gulzaar::Application* Gulzaar::CreateApplication() {
	return new Sandbox();
}