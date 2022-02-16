Plaato Keg System - ESPHome version
===================================

This is the ESPHome code for an alternative version of the plaato keg firmware
https://marcyoung.us/post/plaato_keg_esphome/

TODO:

* Figure out how the water sensor pins work
* Figure out how the magnetic reset works (and give it a purpose)
* Redo this in something like FreeRTOS where I can compile it on the fly for others who don't to use ESPHome
* Distribute binaries
* Find an easy way to "zero" a keg on the fly
* See if we can use [blynk-server](https://github.com/blynkkk/blynk-server) and DNS hijacking to distribute OTA flashing without doing any hardware work.


The yaml is [here](plaato.yaml)
