// rotate.cpp — part of gemini-token-abuse.

#include "geminitokenabuse/rotate.h"

#include <cstdio>

namespace geminitokenabuse {

Rotate::Rotate(const std::string& config_path)
    : config_path_(config_path) {}

void Rotate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Rotate::run() {
    if (verbose_) std::fprintf(stderr, "[gemini-token-abuse] rotate: run\n");
    // core logic lives here
    return true;
}

}  // namespace geminitokenabuse
