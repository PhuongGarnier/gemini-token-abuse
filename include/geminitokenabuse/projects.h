// projects — part of gemini-token-abuse.

#pragma once

#include <string>
#include <vector>

namespace geminitokenabuse {

class Projects {
public:
    explicit Projects(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace geminitokenabuse
