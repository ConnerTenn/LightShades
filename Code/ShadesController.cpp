
#include "ShadesController.h"

ShadesController::ShadesController()
{
	for (int i = 0; i < Width*Height; i++)
	{
		((RGB *)Lights)[i] = {0,0,0};//HSL((double)i/(Width*Height))();
	}
	
	AnimStartTime = GetMilliseconds();
}

void ShadesController::CopyFrame(u8 src[Height][Width])
{
	for (int i = 0; i < Width*Height; i++)
	{
		((RGB *)Lights)[i] = ((u8 *)src)[i] ? RGB{255,255,255} : RGB{0,0,0};
	}
}

void ShadesController::CopyFrame(RGB src[Height][Width])
{
	for (int i = 0; i < Width*Height; i++)
	{
		((RGB *)Lights)[i] = ((RGB *)src)[i];
	}
}
void ShadesController::CopySubFrame(u8 *src, int w, int h, int xDest, int yDest)
{
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			Lights[y+yDest][x+xDest] = src[y*w+x] ? RGB{255,255,255} : RGB{0,0,0};
		}
	}
}
void ShadesController::CopySubFrame(RGB *src, int w, int h, int xDest, int yDest)
{
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			Lights[y+yDest][x+xDest] = src[y*w+x];
		}
	}
}

void ShadesController::Update(i64 now)
{
	if (NextState!=AnimState::Null)
	{
		LastState = CurrState;
		CurrState = NextState;
		
		AnimStartTime = now;
		NextState = AnimState::Null;
	} 
	
	switch (CurrState)
	{
		case AnimState::Idle:
			AnimateIdle(now); break;
		case AnimState::Blink:
			AnimateBlink(now); break;
		case AnimState::Happy:
			AnimateHappy(now); break;
		case AnimState::Funny:
			AnimateFunny(now); break;
		case AnimState::EyeRoll:
			AnimateEyeRoll(now); break;
		case AnimState::Eyebrow:
			AnimateEyebrow(now); break;
		case AnimState::Boop:
			AnimateBoop(now); break;
		case AnimState::OwO:
			AnimateOwO(now); break;
		case AnimState::Test:
			AnimateTest(now); break;
		default:
			break;
	}
}

#ifdef GRAPHICAL
void ShadesController::Draw(int xOff, int yOff)
{
	DrawLine(xOff+30-1, yOff-1, xOff+(Width-1)*30-10, yOff-1, {255,255,255});
	DrawLine(xOff+30-1, yOff+Height*30-10, xOff+(Width/2-3)*30-10, yOff+Height*30-10, {255,255,255});
	DrawLine(xOff+(Width/2+3)*30+30-1, yOff+Height*30-10, xOff+(Width-1)*30-10, yOff+Height*30-10, {255,255,255});
	DrawLine(xOff-1, yOff+30-1, xOff-1, yOff+(Height-1)*30-10, {255,255,255});
	DrawLine(xOff+Width*30-10, yOff+30-1, xOff+Width*30-10, yOff+(Height-1)*30-10, {255,255,255});
	
	DrawLine(xOff-1, yOff+30-1, xOff+30-1, yOff+30-1, {255,255,255});
	DrawLine(xOff+30-1, yOff-1, xOff+30-1, yOff+30-1, {255,255,255});
	DrawLine(xOff+(Width-1)*30-10, yOff+30-1, xOff+Width*30-10-1, yOff+30-1, {255,255,255});
	DrawLine(xOff+(Width-1)*30-10, yOff-1, xOff+(Width-1)*30-10, yOff+30-1, {255,255,255});
	DrawLine(xOff-1, yOff+(Height-1)*30-10, xOff+30-1, yOff+(Height-1)*30-10, {255,255,255});
	DrawLine(xOff+30-1, yOff+(Height-1)*30-10, xOff+30-1, yOff+Height*30-10, {255,255,255});
	DrawLine(xOff+(Width-1)*30-10, yOff+(Height-1)*30-10, xOff+Width*30-10-1, yOff+(Height-1)*30-10, {255,255,255});
	DrawLine(xOff+(Width-1)*30-10, yOff+(Height-1)*30-10, xOff+(Width-1)*30-10, yOff+Height*30-10, {255,255,255});
	
	DrawLine(xOff+(Width/2-3)*30-10, yOff+(Height-1)*30-10, xOff+(Width/2-3)*30-10, yOff+Height*30-10, {255,255,255});
	DrawLine(xOff+(Width/2+4)*30-1, yOff+(Height-1)*30-10, xOff+(Width/2+4)*30-1, yOff+Height*30-10, {255,255,255});
	DrawLine(xOff+(Width/2-3)*30-10, yOff+(Height-1)*30-10, xOff+(Width/2-2)*30-10, yOff+(Height-1)*30-10, {255,255,255});
	DrawLine(xOff+(Width/2+3)*30-1, yOff+(Height-1)*30-10, xOff+(Width/2+4)*30-1, yOff+(Height-1)*30-10, {255,255,255});
	DrawLine(xOff+(Width/2-2)*30-10, yOff+(Height-3)*30-10, xOff+(Width/2-2)*30-10, yOff+(Height-1)*30-10, {255,255,255});
	DrawLine(xOff+(Width/2+3)*30-1, yOff+(Height-3)*30-10, xOff+(Width/2+3)*30-1, yOff+(Height-1)*30-10, {255,255,255});
	DrawLine(xOff+(Width/2-2)*30-10, yOff+(Height-3)*30-10, xOff+(Width/2-1)*30-10, yOff+(Height-3)*30-10, {255,255,255});
	DrawLine(xOff+(Width/2+2)*30-1, yOff+(Height-3)*30-10, xOff+(Width/2+3)*30-1, yOff+(Height-3)*30-10, {255,255,255});
	DrawLine(xOff+(Width/2-1)*30-10, yOff+(Height-4)*30-10, xOff+(Width/2-1)*30-10, yOff+(Height-3)*30-10, {255,255,255});
	DrawLine(xOff+(Width/2+2)*30-1, yOff+(Height-4)*30-10, xOff+(Width/2+2)*30-1, yOff+(Height-3)*30-10, {255,255,255});
	DrawLine(xOff+(Width/2-1)*30-10, yOff+(Height-4)*30-10, xOff+(Width/2+2)*30-1, yOff+(Height-4)*30-10, {255,255,255});
	
	for (int y = 0; y < Height; y++)
	{
		for (int x = 0; x < Width; x++)
		{
			if (!(x==0 && y==0) && !(x==Width-1 && y==0) && !(x==0 && y==Height-1) && !(x==Width-1 && y==Height-1) && !(x>Width/2-4 && x<Width/2+4 && y==Height-1) && !(x>Width/2-3 && x<Width/2+3 && (y==Height-2 || y==Height-3)) && !(x>Width/2-2 && x<Width/2+2 && y==Height-4))
			{
				DrawRectangle(x*30+xOff, y*30+yOff, 20, 20, Lights[y][x]);
			}
		}
	}
	//OutlineRectangle(xOff-2, yOff-2, Width*30-10+2+2, Height*30-10+2+2, {255,255,255});
}
#endif

