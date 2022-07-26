#ifndef GR_GRAPHICS_HPP_
#define GR_GRAPHICS_HPP_

#include "WindowHandler.hpp"
#include "VulkanInstance.hpp"
#include "PhysicalDevice.hpp"
#include "LogicalDevice.hpp"
#include "SwapChain.hpp"
#include "Pipeline.hpp"

namespace gr {
    class Graphics {
        public:
            Graphics();
            ~Graphics();

            void waitForIdle();

            void test();

            Buffer &newBuffer(size_t nvertex, size_t nindex = 0);
            void removeBuffer(Buffer &b);
            void clearBuffer();
        private:
            VulkanInstance instance;
            PhysicalDevice physicalDevice;
            LogicalDevice device;
            SwapChain swapChain;
            Pipeline pipeline;
    };
}

#endif