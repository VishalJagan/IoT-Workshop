# IoT-Workshop
An Internet of Things Workshop given for Designhub.

Loading the sketch into the Adafruit Feather M0 Wifi will make it create a new hotspot with the SSID as specified in the arduino_secrets.h file. Connecting to this page will serve the HTML file, converted to index.h. The HTML file in this example is index.html and notice that the converted version has multiple sections and no comments. It is necessary to split the HTML into sections such that no one section is too long, and strip all sections of the comments. 

This particular example acts on data passed back from the HTML as URL parameters, and proceeds to use the returned array as a basis for illuminating pixels on a FeatherWing OLED display (black and white version).

Further exercises could include:
-Synchronizing the data back and forth between the FeatherWing and HTML page (currently it is just one way)
-Allow multiple devices to add to the FeatherWing simultaneously (not overwriting the previous one)
-Changing the drawing algorithm to be more efficient (such as recognizing lines and using drawLine())
