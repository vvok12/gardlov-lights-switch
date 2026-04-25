### Summary
Turn on lights via arduino

### History

I've bought grow lights to help my kalamondin orange survive through the winter a year ago or so. It comes with radio controller and built-in timer that 
may be used to turn it on/off on a schedule: 4, 8, or 12 hours a day.
However, the configured state is lost as soon as power goes down, and power outages are frequent these days in a place where I live.
In addition, I've also discovered that the wireless controller starts behaving unpredictably after being left for a while with battery inserted
(switching light mode or turning lamp off voluntarily).
I've replaced this lamp with dumper one that works from power line directly and I use Sharp Smart Plug to set the schedule.
But our indoor garden grows and I could still make use of this one.

### Requirements 

* the lamp itself is powered from dedicated powered line with it's own schedule
* the wireless controller is powered from the general line so it turns on when power is supplied

### Components
* Arduino Uno
* LM2596 DC-DC voltage regulator module
* 1mm copper wire
* Gardlov 19388
### Wiring
### Code