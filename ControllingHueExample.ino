const byte ip[] = {123,123,1,123}; //[CHANGE THIS] Your Philips Hue Bridge Internal ip address. You can find it here: https://www.meethue.com/api/nupnp
const String username = "1028d66426293e821ecfd9ef1a0731df"; //[CHANGE THIS] Philips Hue developer username (the one created in step 1).

String json;
TCPClient client;

void setup() {
    //You can use these methods to control your lights:
    state(true, 1); //her you type: state(<on ("true" turn the lamp on & "false" turn the lamp off)>, <lightNumber(the number of the light you want to control fx 1)>);
    setHue(15500, 150, 255, 1); //her you type: setHue(<hue (The color)>, <sat (The saturation)>, <bri (The brightness)>, <lightNumber(the number of the light you want to control fx 1)>);
    
}

void loop() {

}

void state(bool state, int lightNumber) {
    if (state) {
        json = "{\"on\":true}";
    }
    else {
        json = "{\"on\":false}";
    }
        
    sendJSON(lightNumber);
}

void setHue(int hue, int sat, int bri, int lightNumber) {
    json = "{\"hue\":" + String(hue, DEC) +
           ",\"sat\":" + String(sat, DEC) +
           ",\"bri\":" + String(bri, DEC) + "}";
    sendJSON(lightNumber);
}

void sendJSON(int lightNumber) {
    
    if (client.connect(ip, 80)) {
        client.print("PUT /api/");
        client.print(username);
        client.print("/lights/");
        client.print(lightNumber);
        client.println("/state HTTP/1.0");
        client.print("Content-Length: ");
        client.println(json.length());
        client.println();
        client.println(json);
    }
    delay(200); // This is probably not necessary...
}
