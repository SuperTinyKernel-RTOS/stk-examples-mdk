# SuperTinyKernel™ RTOS examples for Arm Keil MDK/µVision

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Platform: Arm Cortex-M](https://img.shields.io/badge/Platform-Arm%20Cortex--M-blue.svg)](https://developer.arm.com/ip-products/processors/cortex-m)

**SuperTinyKernel™ RTOS** (STK) is a high-performance, deterministic, bare-metal C++ real-time operating system designed for resource-constrained embedded systems.

> **Note:** This repository is related to examples configured exclusively for Arm Keil MDK/µVision. For details about SuperTinyKernel RTOS, visit its [project on GitHub](https://github.com/SuperTinyKernel-RTOS).

---

## 🛠 Getting Started with [Arm Keil MDK](https://www.keil.com/demo/eval/arm.htm)

STK provides ready-to-use examples for popular development boards. Follow these steps to get up and running:

1.  **Clone the Repository:**
    ```bash
    git clone https://github.com/SuperTinyKernel-RTOS/stk-examples-mdk.git
    cd stk-examples-mdk
    ```

2.  **Initialize Dependencies:**
    Navigate to your chosen example folder and run the configuration script. This will automatically fetch the STK kernel and necessary HAL drivers.
    ```bash
    cd stm/blinky-stm32f407g-disc1
    python configure.py
    ```

3.  **Build & Flash:**
    Open the generated project in **Arm Keil MDK**, compile, and flash your board. To reconfigure STM32 project use [**STM32CubeMX**](https://www.st.com/content/st_com/en/stm32cubemx.html).

---

## 📂 Supported Examples

| Board                | Path                          | Description                               |
|:---------------------|:------------------------------|:------------------------------------------|
| **STM32F407G-DISC1** | `stm\blinky-stm32f407g-disc1` | Basic LED toggle using STK tasks/threads. |

> **Note:** Using GCC/Eclipse, or MCUXpresso? Examples for these environments are located in the main STK repository: [STK Main Repo - Examples](https://github.com/SuperTinyKernel-RTOS/stk/tree/main/build/example/project)

---

## 🔗 Resources

* **Core:** [Repository](https://github.com/SuperTinyKernel-RTOS/stk)
* **Documentation:** [STK API](https://stk.neutroncode.com)
* **Issue Tracker:** [Report a bug](https://github.com/SuperTinyKernel-RTOS/stk-examples-mdk/issues)