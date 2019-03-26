
#include "Globals.h"
#include "WindowController.h"

class ShadesController
{
public:
	const static int Width = 25, Height = 9; 
	RGB Lights[Height][Width];
	
	int EyeX = 0, EyeY = 0;
	
	enum AnimState
	{
		Null = 0,
		Idle = 1,
		Blink,
		Happy,
		Funny,
		EyeRoll,
		Eyebrow,
		Boop,
		OwO,
		Test, 
	};
	
	AnimState CurrState = Test, NextState = Null;
	i64 AnimStartTime = 0;
	
	ShadesController();
	
	void CopyFrame(u8 src[Height][Width]);
	void CopyFrame(RGB src[Height][Width]);
	void Update(i64 now);
	
	void AnimateIdle(i64 now);
	void AnimateBlink(i64 now);
	void AnimateHappy(i64 now);
	void AnimateFunny(i64 now);
	void AnimateEyeRoll(i64 now);
	void AnimateEyebrow(i64 now);
	void AnimateBoop(i64 now);
	void AnimateOwO(i64 now);
	void AnimateTest(i64 now);
	
#ifdef GRAPHICAL
	void Draw(int xOff, int yOff);
#endif
};
