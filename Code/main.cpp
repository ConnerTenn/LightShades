
#include "Globals.h"
#include "WindowController.h"
#include "ShadesController.h"

//TerminalBuffer TermBuffer(10, 900, 30);

ShadesController Shades;
	
int main()
{
	InitWindow();
	srand(StartTime);
	
	//u64 startTime = GetMilliseconds();
	i64 lastTime = StartTime;
	i64 maxTime = 0;
	
	bool run = true;
	while (run)
	{		
		u64 key;
		XEvent event;
		if (PendingEvent(&event))
		{
			if (event.type == KeyPress) 
			{ 
				key = GetKeyPressed(&event); 
				
				if (key == 65307) { run = false; }
			}
			else if (event.type == KeyRelease) 
			{ 
				key = GetKeyReleased(&event); 
				
			}
		}
		
		Shades.Update(GetMilliseconds()-StartTime/1000);
		
		ForceClear();
		
		Shades.Draw(100, 100);
		
		
		i64 delta = GetMicroseconds() - lastTime;
		lastTime = GetMicroseconds();
		maxTime = MAX(delta, maxTime);
		DrawText(10, 10, "Runtime:" + std::to_string((lastTime-StartTime)/1'000'000.0) + "  Frametime:" + std::to_string(delta/1'000'000.0) + "  Maxtime:" + std::to_string(maxTime/1'000'000.0), {255,255,255});
		if ((lastTime-StartTime) % 1'00'000 < 1000) { maxTime = 0; }
	
		Sync();
		
		//u64 nextTime = GetMilliseconds();
		//usleep((100-(GetMilliseconds()-lastTime))*1000);
		usleep(1000);
	}
	
	
	DestroyWindow();
	return 0;
}
