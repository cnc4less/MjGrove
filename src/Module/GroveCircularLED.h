//GROVE_NAME        "Grove - Circular LED"
//SKU               104030013
//WIKI_URL          http://wiki.seeedstudio.com/Grove-Circular_LED/

#pragma once

#include "Abstract/GroveModule.h"
#include "../Connector/GroveConnectorDIO.h"

class GroveCircularLED : public GroveModule
{
private:
	HalGpio* _PinDCKI;
	HalGpio* _PinDI;
	float _BrightnessList[24];

	void SendData(uint16_t data);
	void LatchData();

public:
	GroveCircularLED(GroveConnectorDIO* connector)
	{
		_PinDCKI = &connector->P1;
		_PinDI = &connector->P2;
	}

	void Init();
	void Clear();
	void SetBrightness(int index, float brightness);
	void Show();

};
