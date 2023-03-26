# esphometest

This is a basic test to develop custom component.
The example is copied from [esphome-custom-component](https://github.com/thegroove/esphome-custom-component-examples)

But it fails to compile with error:

    src/main.cpp:18:1: error: 'empty_light' does not name a type; did you mean '_daylight'?
    empty_light::EmptyLightOutput *empty_light_emptylightoutput;
    ^~~~~~~~~~~
    _daylight
    src/main.cpp: In function 'void setup()':
    src/main.cpp:156:3: error: 'empty_light_emptylightoutput' was not declared in this scope
    empty_light_emptylightoutput = new empty_light::EmptyLightOutput();
    ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
    src/main.cpp:156:38: error: 'empty_light' does not name a type; did you mean '_daylight'?
    empty_light_emptylightoutput = new empty_light::EmptyLightOutput();
                                        ^~~~~~~~~~~
                                        _daylight


I'm building using the latest docker esphome
Stuck for a very long time now and feel I've tried changing everything :(

# FIXED 

Thanks to the forum similar topics suggestion I finally found the solution to my problem in minutes.
Turns our esphome expects an empty init.py file in your custom component folder. In my case since I was using the ‘light’ component I had ‘light.py’ but no init.py file. Simply adding an empty init.py file fixed the compilation issue.