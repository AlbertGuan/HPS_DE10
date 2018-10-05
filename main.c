#include "LEDCtrl.h"
#include "GSensor.h"
#include "I2CSwitch.h"

int main(int argc, char **argv)
{
	//LEDCtrl();

	//GSensor(argc, argv);

	i2c_switch(argc, argv);
	return 0;
}
