// projects.cpp — part of gemini-token-abuse.

#include "geminitokenabuse/projects.h"

#include <cstdio>

namespace geminitokenabuse {

Projects::Projects(const std::string& config_path)
    : config_path_(config_path) {}

void Projects::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Projects::run() {
    if (verbose_) std::fprintf(stderr, "[gemini-token-abuse] projects: run\n");
    // core logic lives here
    return true;
}

}  // namespace geminitokenabuse
