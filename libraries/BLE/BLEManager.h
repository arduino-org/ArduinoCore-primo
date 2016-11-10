/*
  Copyright (c) 2016 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
  
*/

#ifndef __BLE_MANAGER_H
#define __BLE_MANAGER_H

#include "BLEPeripheral.h"
#include "BLECentralRole.h"

class BLECentralRole;

class BLEManagerClass  {
public:
	BLEManagerClass();

    static bool registerPeripheral(BLEPeripheral *peripheral);
	static bool registerCentral(BLECentralRole *central);
	
    static void processBleEvents(ble_evt_t *bleEvent);
	    
private:
    static BLEPeripheral    *_peripheralList[1];
	static BLECentralRole   *_centralList[1];
	static bool             _handlerSet;
};

extern BLEManagerClass BLEManager;

#endif
