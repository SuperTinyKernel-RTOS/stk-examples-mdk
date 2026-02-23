# SuperTinyKernel™ RTOS

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Platform: Arm Cortex-M](https://img.shields.io/badge/Platform-Arm%20Cortex--M-blue.svg)](https://developer.arm.com/ip-products/processors/cortex-m)

**SuperTinyKernel™ RTOS** (STK) is a minimalistic, high-performance RTOS designed for deeply embedded C/C++ applications. It prioritizes a tiny memory footprint and ultra-low latency, making it ideal for real-time tasks.

---

## 🚀 Key STK Features

* **Ultra-Lightweight:** Minimal RAM/Flash overhead, leaving more room for your application logic.
* **High Performance:** Optimized context switching and interrupt handling.
* **C/C++ Friendly:** Clean API designed for modern embedded development.

---

## 🛠 Getting Started with Arm Keil MDK

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
    Open the generated project in **Arm Keil MDK**, compile, and flash your board.

---

## 📂 Supported Examples

| Board                | Path                          | Description                               |
|:---------------------|:------------------------------|:------------------------------------------|
| **STM32F407G-DISC1** | `stm\blinky-stm32f407g-disc1` | Basic LED toggle using STK tasks/threads. |

---

## 🔗 Resources

* **Project:** [SuperTinyKernel RTOS on GitHub](https://github.com/SuperTinyKernel-RTOS)
* **Documentation:** [STK API](https://stk.neutroncode.com)
* **Issue Tracker:** [Report a bug](https://github.com/SuperTinyKernel-RTOS/stk-examples-mdk/issues)