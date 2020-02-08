#include "RenderWindow.hpp"
#include <stdexcept>

bool RenderWindow::create(int width, int height, std::string title, VkInstance& vkInstance)
{
	int err = glfwInit();
	if(err != GLFW_NO_ERROR)
		throw std::runtime_error("Failed to Init GLFW");

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
	m_window = std::make_unique<GLFWwindow*>(
		glfwCreateWindow(800, 600, "Vulkan", nullptr, nullptr)
	);
	
	// Get Primary Device
	VkPhysicalDevice device;
	{

	}

	// Create Swap Chain
	VkFramebufferCreateInfo fbci;
	fbci.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
	fbci.pNext = NULL;
	fbci.flags = NULL;
	fbci.renderPass = NULL;

	return true;
}

void close()
{

}