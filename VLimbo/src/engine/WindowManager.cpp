/*======================================*\
  *                                     *
  * Class file for a window manager     *
  * header.						        *
  * Created by Hubert Stachowiak 2021   *
  *	                                    *
 \*=====================================*/

#include "WindowManager.h"

WindowManager::WindowManager(const int a_x_size, const int a_y_size, const int a_x_position, const int a_y_position,
							const char* a_window_title) :
	m_x_size(a_x_size), m_y_size(a_y_size), m_x_position(a_x_position), m_y_position(a_y_position), m_window_title(a_window_title)
{
	glfwInit();
	m_window = glfwCreateWindow(m_x_size, m_y_size, m_window_title, nullptr, nullptr);  // NOLINT(cppcoreguidelines-prefer-member-initializer)
	glfwSetWindowPos(m_window, m_x_position, m_y_position);


	while (!glfwWindowShouldClose(m_window))
	{
		glfwPollEvents();
	}
}

void WindowManager::clear_window()
{

}

bool WindowManager::destroy_window()
{
	glfwDestroyWindow(m_window);

	if (m_window == nullptr)
		return true;

	return false;
}
