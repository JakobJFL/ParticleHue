# ParticleHue
This repository shows you how you can control your Philips Hue lights with a particle device without using IFTTT or Particles integration webhooks. 

**Credits**
This repository is based on another repository by James Forsyth [hue-photon](https://github.com/fsyth/hue-photon). Thanks for your help.

### Step 1 - Philips Hues API
First you need a developer ID for Philips Hues API if you already have worked with Philips Hues API you can skip this step.

After this you **can** use CLIP API Debugger or something like [Postman](https://chrome.google.com/webstore/detail/postman/djdcfiocijfjponepmbbdmbeblofhfff?utm_source=chrome-ntp-icon) to test if you can control your Philips Hue lights through Philips Hues API. 

### Step 2 - Philips Hues API

You start by typing in /api/ then your newly created username then /lights/ then what light you want to control fx 1 followed by /state it should like look something like this "/api/1028d66426293e821ecfd9ef1a0731df/lights/1/state". 
