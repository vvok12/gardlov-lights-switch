### Summary
Turn on the lights via Arduino

### History

I bought grow lights to help my kalamondin orange survive through the winter a year ago or so. It comes with a radio controller and a built-in timer that 
may be used to turn it on/off on a schedule: 4, 8, or 12 hours a day.
However, the configured state is lost as soon as power goes down, and power outages are frequent these days in the place where I live.
In addition, I've also discovered that the wireless controller starts behaving unpredictably after being left for a while with the battery inserted
(switching light mode or turning the lamp off voluntarily).
I've replaced this lamp with a dumper one that works from the power line directly, and I use a Sharp Smart Plug to set the schedule.
But our indoor garden grows, and I could still make use of this one.

### Requirements 

* The lamp itself is powered from a dedicated power line with its own schedule
* The wireless controller is powered from the general line, so it turns on when power is supplied
* When the controller is turned on, it continuously tries to turn the lamp on
* The wireless controller does not stay powered on indefinitely

### Components
* Arduino Uno
* LM2596 DC-DC voltage regulator module
* 1mm copper wire
* Gardlov 19388

### Wiring
