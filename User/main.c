#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "WeiDai.h"
#include "OLED.h"
#include "CountSensor.h"
int main()
{
	CountSensor_Init();
	LED_Init();
	OLED_Init();
	OLED_ShowNum(1,1,6,6);
	while(1)
	{
		
		
	}
	
	
}
