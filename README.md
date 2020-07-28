# Arduino_LED_Test

Simple sketch for testing arrays of addressable leds for integrity and QA for the LEDs themselves.

Function is only to sequentially light the LEDs one at a time, in order until it reaches the end of the chain and starts over again. Like a dot moving along a line.

It is possible to have forks in the chain of LEDs. In such a case the length of the largest chain should be appropriately declared. Corresponding nodes in different chains will light up as they share an address.