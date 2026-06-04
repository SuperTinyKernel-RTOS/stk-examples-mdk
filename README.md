# SuperTinyKernel™ RTOS examples for Arm Keil MDK/µVision

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Platform: Arm Cortex-M](https://img.shields.io/badge/Platform-Arm%20Cortex--M-blue.svg)](https://developer.arm.com/ip-products/processors/cortex-m)

**SuperTinyKernel™ RTOS** (STK) is a high-performance, deterministic, bare-metal C++ real-time operating system designed for resource-constrained embedded systems.

> **Note:** This repository contains examples configured exclusively for Arm Keil MDK/µVision. For details about SuperTinyKernel RTOS, visit its [project on GitHub](https://github.com/SuperTinyKernel-RTOS).

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

3. **Configure MCU:**
   For STM32 MCUs use [**STM32CubeMX**](https://www.st.com/content/st_com/en/stm32cubemx.html) to reconfigure the project.

   > **Note**: When project is regenerated make sure to uncomment `SVC_Handler`, `PendSV_Handler` and `SysTick_Handler` functions (or prefix function name with _) in `stm32f4xx_it.c` file. These ISR handlers are used by STK.

4.  **Build & Flash:**
    Open the generated project `stm/blinky-stm32f407g-disc1/project.uvprojx` in **Arm Keil MDK**, compile, and flash your board. To reconfigure STM32 project use [**STM32CubeMX**](https://www.st.com/content/st_com/en/stm32cubemx.html) via Project → Manage Run-Time Environment → Device tree → STM32CubeMX.

---

## 📂 Supported Examples

| Board                | Path                                             | Description                                                                  |
|:---------------------|:-------------------------------------------------|:-----------------------------------------------------------------------------|
| **STM32F407G-DISC1** | `stm\blinky-stm32f407g-disc1`                    | Basic LED toggle using STK tasks/threads.                                    |
| **STM32F407G-DISC1** | `stm\blinky_c-stm32f407g-disc1`                  | Basic LED toggle using STK C API.                                            |
| **STM32F407G-DISC1** | `stm\blinky_c-cmsis-rtos2-stm32f407g-disc1`      | Basic LED toggle using CMSIS-RTOS2 API via STK CMSIS-RTOS2 adapter.          |
| **STM32F407G-DISC1** | `stm\blinky_c-cmsis-rtos2-prio-stm32f407g-disc1` | Priority inheritance demo using CMSIS-RTOS2 API via STK CMSIS-RTOS2 adapter. |

> **Note:** Using GCC/Eclipse? Examples for these environments are located in [STK Main Repo - Examples](https://github.com/SuperTinyKernel-RTOS/stk/tree/main/build/example/project).

> **Note:** Using MCUXpresso, or Arm Keil MDK/µVision, IAR EWARM? Examples for these environments are located in their [respective repositories](https://github.com/SuperTinyKernel-RTOS/).

---

## 🔗 Resources

* **Core:** [Repository](https://github.com/SuperTinyKernel-RTOS/stk)
* **Documentation:** [STK API](https://supertinykernel.org)
* **Issue Tracker:** [Report a bug](https://github.com/SuperTinyKernel-RTOS/stk-examples-mdk/issues)