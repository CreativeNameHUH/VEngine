/*======================================*\
  *                                     *
  * Header file for an window manager   *
  * class.  			                *
  * Created by Hubert Stachowiak 2021   *
  *	                                    *
 \*=====================================*/

#ifndef VE_WINDOW
#define VE_WINDOW

#include <GLFW/glfw3.h>

class WindowManager
{
public:
	// Constructor initializes a window.
	WindowManager(int a_x_size, int a_y_size, int a_x_position, int a_y_position, const char* a_window_title);

	// Functions:
	void clear_window();
	bool destroy_window();

private:

	// Window details:
	int m_x_size{};
	int m_y_size{};
	int m_x_position{};
	int m_y_position{};
	const char* m_window_title;
	GLFWwindow* m_window;

};

#endif

