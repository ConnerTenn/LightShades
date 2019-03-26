
#include "Globals.h"
#include "WindowController.h"

class ShadesController
{
public:
	const static int Width = 25, Height = 5; 
	RGB Lights[Height][Width];
	
	ShadesController();
	
	void CopyFrame(u8 src[Height][Width]);
	void CopyFrame(RGB src[Height][Width]);
	void Update(i64 now);
	
#ifdef GRAPHICAL
	void Draw(int xOff, int yOff);
#endif
};
