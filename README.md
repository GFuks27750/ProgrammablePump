# Programmable Pump

This project was requested by friend of mine, so he can control his water system in terrarium automaticly. 
## What I used: 
<ul>
  <li><a href = "https://botland.com.pl/moduly-wifi-i-bt-esp32/8893-esp32-wifi-bt-42-platforma-z-modulem-esp-wroom-32-zgodny-z-esp32-devkit-5904422337438.html">ESP32</a></li>
  <li><a href = "https://allegro.pl/oferta/modul-przekaznika-1-kanalowego-5v-10a-l-h-10749204005">Relay</a></li>
  <li><a href = "https://botland.com.pl/przetwornice-step-down/2967-przetwornica-step-down-lm2596-32v-35v-3a-5903351241397.html">Step down transformer</a></li>
  <li><a href = "https://botland.com.pl/odbiorniki-podczerwieni/4931-odbiornik-podczerwieni-tsop31236-36-khz-5904422302757.html">IR receiver</a></li>
  <li>12V water pump (I have no idea where my friend got it, but I assume any pump will work)</li>
  <li>Remote (just any remote will work, I've used old remote from led lights)</li>
</ul>

## How it works? 
It's fairly simple, step down transformer is powering ESP32, and then ESP32 is wired to relay, which is ofcourse connected to a pump. 
Everything is controled by a remote, that is sending signal to a IR receiver, everything can be easily managed in code, so you can add more time programs to your water pump.

## Case
I've also designed a 3D printable case for this project, .stl files are in the repository.








