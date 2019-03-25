
#include "ShadesController.h"

ShadesController::ShadesController()
{
	for (int i = 0; i < Width*Height; i++)
	{
		((RGB *)Lights)[i] = {0,(u8)(255.0*i/(Width*Height)),0};
	}
}

#ifdef GRAPHICAL
void ShadesController::Draw(int xOff, int yOff)
{
	for (int y = 0; y < Height; y++)
	{
		for (int x = 0; x < Width; x++)
		{
			DrawRectangle(x*30+xOff, y*30+yOff, 20, 20, Lights[y][x]);
		}
	}
	OutlineRectangle(xOff-2, yOff-2, Width*30-10+2+2, Height*30-10+2+2, {255,255,255});
}
#endif

