
#include "ShadesController.h"

#define _ 0

u8 Frames[][ShadesController::Height][ShadesController::Width] = 
{
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,1,1,_,_,_},
		{_,_,1,_,1,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,1,_,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,1,1,_,_,_},
		{_,_,1,_,1,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,1,_,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,1,1,_,_,_,_,_,_,_,_,_,_,_,1,1,1,1,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,1,1,_,_,_,_,_,_,_,_,_,_,_,1,1,1,1,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,1,1,_,_,_},
		{_,_,1,_,1,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,1,_,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,1,1,_,_,_},
		{_,_,1,_,1,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,1,_,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,1,1,_,_,_,_,_,_,_,_,_,_,1,1,1,1,1,1,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_} },
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,1,1,_,_,_,_,_,_,_,_,_,_,1,1,1,1,1,1,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_} },
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,1,1,1,1,1,1,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_} },
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,1,1,1,1,1,1,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_} },
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,1,1,1,1,1,1,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_} },
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,1,1,1,1,1,1,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_} },
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,1,1,1,1,1,1,_,_},
		{_,_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_} },
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_},
		{_,_,_,1,_,_,1,_,_,_,1,_,1,_,1,_,_,_,1,_,_,1,_,_,_},
		{_,_,_,1,_,_,1,_,_,_,_,1,_,1,_,_,_,_,1,_,_,1,_,_,_},
		{_,_,_,1,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,1,_,_,_},
		{_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_} },
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_},
		{_,_,_,1,_,_,1,_,_,_,1,_,1,_,1,_,_,_,1,_,_,1,_,_,_},
		{_,_,_,1,_,_,1,_,_,_,_,1,_,1,_,_,_,_,1,_,_,1,_,_,_},
		{_,_,_,1,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,1,_,_,_},
		{_,_,_,_,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,1,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_} },
	
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
	
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_},
		{_,_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_,_},
		{_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
	
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
	
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_},
		{_,_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_,_},
		{_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
	
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,_,_,_,_,1,1,_,_,_,1,1,_,_,_,1,1,1,_,_,_},
		{_,_,1,_,_,1,_,_,1,_,_,1,_,1,_,_,1,_,_,1,_,_,1,_,_},
		{_,_,1,1,1,_,_,_,1,_,_,1,_,1,_,_,1,_,_,1,1,1,_,_,_},
		{_,_,1,_,_,1,_,_,_,1,1,_,_,_,1,1,_,_,_,1,_,_,_,_,_},
		{_,_,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
		
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,1,1,1,_,_,_,_,1,1,_,_,_,1,1,_,_,_,1,1,1,_,_,_},
		{_,_,1,_,_,1,_,_,1,_,_,1,_,1,_,_,1,_,_,1,_,_,1,_,_},
		{_,_,1,1,1,_,_,_,1,_,_,1,_,1,_,_,1,_,_,1,1,1,_,_,_},
		{_,_,1,_,_,1,_,_,_,1,1,_,_,_,1,1,_,_,_,1,_,_,_,_,_},
		{_,_,1,1,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
	
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,1,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,1,_,_,_},
		{_,_,1,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
	
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,1,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,1,_,_,_},
		{_,_,1,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
	
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,1,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,1,_,_,_},
		{_,_,1,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
	
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,1,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,1,_,_,_},
		{_,_,1,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
	
	{	{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,_},
		{_,_,_,1,_,1,_,_,_,_,_,_,_,_,_,_,_,_,_,1,_,1,_,_,_},
		{_,_,1,_,_,_,1,_,_,_,_,_,_,_,_,_,_,_,1,_,_,_,1,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_}	},
};

#undef _

void ShadesController::AnimateIdle(i64 now)
{
	
}
void ShadesController::AnimateBlink(i64 now)
{
	
}
void ShadesController::AnimateHappy(i64 now)
{
	
}
void ShadesController::AnimateFunny(i64 now)
{
	
}
void ShadesController::AnimateEyeRoll(i64 now)
{
	
}
void ShadesController::AnimateEyebrow(i64 now)
{
	
}
void ShadesController::AnimateBoop(i64 now)
{
	
}
void ShadesController::AnimateOwO(i64 now)
{
	
}
void ShadesController::AnimateTest(i64 now)
{
	for (int y = 0; y < Height; y++)
	{
		for (int x = 0; x < Width; x++)
		{
			if (((now-AnimStartTime)%10000) < 5000)
			{
				Lights[y][x] = HSL(mmod(((now-AnimStartTime)%2000)/2000.0 + (-y-x)/50.0,1.0),1.0,0.3)();
			}
			else 
			{
				Lights[y][x] = HSL(MAGENTA+y/60.0-0.11+sin(((now-AnimStartTime)%5000)/5000.0*Width-x/2.0)/70.0+cos(((now-AnimStartTime)%9000)/9000.0*Width-x/5.0)/70.0,1.0,0.3)();
			}
		}
	}
	
	CopyFrame(Frames[0+1*(now-AnimStartTime)/200 % 27]);
}

