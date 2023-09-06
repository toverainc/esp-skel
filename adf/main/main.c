#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "ESP_ADF_SKEL";

void app_main(void)
{
	esp_log_level_set("*", ESP_LOG_DEBUG);

	ESP_LOGI(TAG, "starting");

	// main loop
	while (true) {
		ESP_LOGI(TAG, "running main loop");
		vTaskDelay(10000 / portTICK_PERIOD_MS);
	}
}
