#include <printf.h>
#include <navirice/Step.h>
#include <navirice/InitService.h>

void new_step_callback(Step step) {
    printf("[Step x=%f y=%f description=%s step=%s]\n", step.x, step.y, step.description, step.icon);
}

void rendering_service_started_callback(Step step) {
    set_new_step_callback(&new_step_callback);
}

int main() {
    init_rendering_service("0.0.0.0", 8000, &rendering_service_started_callback);

    while (1) {
        // Renderer business logic
    }

    return 0;
}