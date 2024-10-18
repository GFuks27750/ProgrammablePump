# Programmable Pump

This project was requested by friend of mine, so he can control his water system in terrarium automaticly. 
## What I used: 
<ul>
  <li>ESP32</li>
  <li>Relay module</li>
  <li>Step down transformer</li>
  <li>12V water pump</li>
  <li>IR receiver</li>
  <li>Remote</li>
</ul>

## How it works? 
It's fairly simple, step down transformer is powering ESP32, and then ESP32 is wired to relay, which is ofcourse connected to a pump. 
Everything is controled by a remote, that is sending signal to a IR receiver, everything can be easily managed in code, so you can add more time programs to your water pump. 



