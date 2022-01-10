/*======================================*\
  *                                     *
  * Header file for a main engine class *
  * Created by Hubert Stachowiak 2021   *
  *	                                    *
 \*=====================================*/

#ifndef VE_ENGINE
#define VE_ENGINE

#include "WindowManager.h"

class VEngine
{
public:
	int initialize();
	void update();
	WindowManager create_window(int a_x_size, int a_y_size, int a_x_position, int a_y_position, const char* a_window_title);

private:

};

#endif
