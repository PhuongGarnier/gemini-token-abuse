// main.cpp — entry point. Wires config and subsystems together.

#include "geminitokenabuse/settings.h"
#include "geminitokenabuse/keys.h"
#include "geminitokenabuse/projects.h"
#include "geminitokenabuse/rotate.h"
#include "geminitokenabuse/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    geminitokenabuse::Settings settings = geminitokenabuse::Settings::load_default();
    geminitokenabuse::Keys keys(settings.store_path);
    geminitokenabuse::Projects projects(settings.store_path);
    geminitokenabuse::Rotate rotate(settings.store_path);
    geminitokenabuse::Cli cli(settings.store_path);
    std::fprintf(stderr, "[gemini-token-abuse] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
