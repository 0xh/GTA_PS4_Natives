# GTA_PS4_Natives

This is an edit/updated version of Kurt2467's GTA5 PS3 Native Invoker (https://github.com/kurt2467/GTAV_Native_Invoker)

## Requirements
1. 1.76 PS4

## How to use
1. Send the included *loader* payload (loader/loader.bin) to your PS4, you should then get a notification
2. Build your payload
3. Rename to plugin1.bin
4. Copy to USB
5. Plug USB into right USB port on the PS4 (usb0)
6. Start game and you should get a message saying payload was loaded

## Bugs
1. Sometimes the loader payload will crash, I will fix this if enough people complain about it

## Info
Function "loop" is our entry point and will be called many times per frame.
Use optimization where possible as we do not have a lot of executable memory with this method.

The source contains a sample menu base with a couple of options. *Spawn vehicle* is a little bugged as the car spawns under the map, I don't have much time to fix it though.

I haven't exactly tested this in a while so let me know whether it's working or not.
