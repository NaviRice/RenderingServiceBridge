#include <stdio.h>
#include <navirice/Step.h>
#include <navirice/InitService.h>
#include <stdlib.h>

void new_step_callback(Step step) {
    printf("[Step latitude=%f longitude=%f description=%s step=%s]\n", step.latitude, step.longitude, step.description, step.icon);
}

void rendering_service_started_callback(Step step) {
    set_new_step_callback(&new_step_callback);
}

int main(int argc, char* argv[]) {
    if(argc != 3) {
        printf("Usage: service [ip address] [port]\n");
        return 1;
    }

    char* ipAddress = argv[1];
    int port = atoi(argv[2]);

    init_rendering_service(ipAddress, port, &rendering_service_started_callback);

    while (1) {
        // Renderer business logic
    }

    return 0;
}