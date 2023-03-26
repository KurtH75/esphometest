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