
#include "Globals.h"
#include "WindowController.h"

class ShadesController
{
public:
	const static int Width = 40, Height = 5; 
	RGB Lights[Height][Width];
	
	ShadesController();
	
#ifdef GRAPHICAL
	void Draw(int xOff, int yOff);
#endif
};
