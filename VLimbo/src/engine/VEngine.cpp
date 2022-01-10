/*======================================*\
  *                                     *
  * Class file for a main engine class  *
  * Created by Hubert Stachowiak 2021   *
  *	                                    *
 \*=====================================*/

#define GLFW_INCLUDE_VULKAN
#include "VEngine.h"

int VEngine::initialize()
{
	uint32_t number_of_extensions = 0;
	vkEnumerateInstanceExtensionProperties(nullptr, &number_of_extensions, nullptr);

	return 0;
}

void VEngine::update()
{
	
}

WindowManager VEngine::create_window(const int a_x_size, const int a_y_size, const int a_x_position, const int a_y_position,
									 const char* a_window_title)
{
	const WindowManager window = WindowManager(a_x_size, a_y_size, a_x_position, a_y_position, a_window_title);

	return window;
}
