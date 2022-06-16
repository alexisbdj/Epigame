#ifndef JEUDELESPACE_INPUTS_HPP
#define JEUDELESPACE_INPUTS_HPP

#include "Command.hpp"
#include "GLFW/glfw3.h"
#include <unordered_map>
#include <vector>
#include <string>
#include <memory>
#include "InputKey.hpp"

class Inputs {
public:
    void handleInputs();
    void loadInputs(std::unordered_map<std::string, std::vector<InputKey>> inputs);
    void changeInput(std::string event, std::vector<InputKey> inputs);
    void addAction(std::string event, std::unique_ptr<Command> action);
    void addAction(std::string event, std::vector<std::unique_ptr<Command>> actions);

private:
    std::unordered_map<std::string, std::vector<InputKey>> eventKey;
    std::unordered_map<std::string, std::unique_ptr<Command>> eventAction;
};
#endif //JEUDELESPACE_INPUTS_HPP
