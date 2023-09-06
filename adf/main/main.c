#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "recorder_engine.h"

static const char *TAG = "ESP_ADF_SKEL";

void app_main(void)
{
	esp_log_level_set("*", ESP_LOG_DEBUG);

	ESP_LOGI(TAG, "starting");

	rec_config_t cfg_re = DEFAULT_REC_ENGINE_CONFIG();
	if (rec_engine_create(&cfg_re) != ESP_OK) {
		ESP_LOGE(TAG, "failed to create recorder engine");
	}

	// main loop
	while (true) {
		ESP_LOGI(TAG, "running main loop");
		vTaskDelay(10000 / portTICK_PERIOD_MS);
	}
}
