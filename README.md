# ParticleHue
This repository shows you how you can control your Philips Hue lights with a Particle Photon without using IFTTT or Particles integration webhooks.

**Credits:** This repository is based on another repository by James Forsyth [hue-photon](https://github.com/fsyth/hue-photon). Thanks for your help.


## Getting started
*A small starter guide, to **quickly** get started on controlling Philips Hue lights.*
### Step 1 - Philips Hues API
First you need a developer ID for Philips Hues API. Follow [this](https://developers.meethue.com/develop/get-started-2/) guide if you already have worked with Philips Hues API you can skip this step.

After this you **can** use CLIP API Debugger or something like [Postman](https://www.getpostman.com/) to test if you can control your Philips Hue lights through Philips Hues API. 

### Step 2 - The code
Now it's time to upload the code to your Particle Photon. 
Find the file: "ControllingHue.ino" and copy the context into a new app in Particle Build. Change the IP and the username, the ones labelled: "[CHANGE THIS]". You can find your Philips Hue Bridge internal ip address [her](https://www.meethue.com/api/nupnp) remember to be on the same network as your Bridge. The username you created earlier in Step 1. It should look something like this: "1028d66426293e821ecfd9ef1a0731df".

Now you should be able to control your Philips Hue lights. You can add buttons or whatever comes into your mind to control your lights with this code. 

## Further expansion and understanding
There's though a lot more to explain and a lot more to do with the Philips Hue API. 


