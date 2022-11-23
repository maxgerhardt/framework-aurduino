/*
 * main.cpp
 *
 *  Created on: 26 Mar 2015
 *      Author: smccumiskey
 */

#include "system_tc3x.h"

extern void init();

extern void setup();

extern void loop();

int main(void){

	init();

	setup();

	while(1){

		loop();
	}


}



