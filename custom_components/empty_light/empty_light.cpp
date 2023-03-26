#include "esphome/core/log.h"
#include "empty_light.h"

namespace esphome {
namespace empty_light {

static const char *TAG = "empty_light";

void EmptyLightOutput::setup() {
   
}

light::LightTraits EmptyLightOutput::get_traits() {
    auto traits = light::LightTraits();
    traits.get_supports_color_temperature();

    return traits;
}

void EmptyLightOutput::write_state(light::LightState *state) {

}

void EmptyLightOutput::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty custom light");
}

} //namespace empty_light
} //namespace esphome