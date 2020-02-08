#pragma once
#include <string>
#include <memory>
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.hpp>

typedef void(*RWKeyPressCallbackFunc)(int,int,int,int);
typedef void(*RWMouseMoveCallbackFunc)(double,double);

class RenderWindow {
	std::unique_ptr<GLFWwindow*> m_window;
	std::unique_ptr<VkSurfaceKHR> m_surface;
public:
	bool create(int width,int height,std::string title,VkInstance& vkInstance);
	void close();

	const std::string getVersionString();
	const std::string getRendererString();

	void setKeyPressCallback(RWKeyPressCallbackFunc rwkcbf);
	void setMouseMoveCallback(RWMouseMoveCallbackFunc rwmmcbf);

	void clear();
	void swapBuffers();
};