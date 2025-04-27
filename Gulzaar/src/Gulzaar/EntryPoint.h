#pragma once

#ifdef GZ_PLATFORM_WINDOWS

extern Gulzaar::Application* Gulzaar::CreateApplication();

int main(int argc, char** argv) {
	printf("Gulzaar Engine");
	auto app = Gulzaar::CreateApplication();
	app->Run();
	delete app;
}
#endif
