Nanode Hardware
---------------

* CPU: Atmel ATMEGA328P
* Ethernet: Microchip ENC28J60
* MAC Address: Microchip 11AA02E48 serial EEPROM


Required Libraries
------------------

* https://github.com/sde1000/NanodeUNIO


Pin Mapping
-----------

| Pin | Use                                |
|-----|------------------------------------|
| D6  | Red LED                            |
| D7  | UNI/O bus: MAC Address (11AA02E48) |
| D8  | SPI bus: Ethernet Slave Select     |
| D11 | SPI bus: Shared MOSI               |
| D12 | SPI bus: Shared MISO               |
| D13 | SPI bus: Shared Serial Clock       |


[Nanode]:  http://www.nanode.eu/