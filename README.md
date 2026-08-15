# IoT Smart Warehouse Lighting Automation (Proof of Concept)

An end-to-end IoT architecture prototype designed to transition commercial warehouse lighting from a static hardware utility into a dynamic, software-defined, cloud-managed asset.

## 📋 Project Overview
Conventional warehouse lighting systems are typically hardware-dependent, leading to energy inefficiencies, a lack of real-time visibility, and scaling difficulties. This proof of concept demonstrates a cost-effective, scalable IoT architecture that leverages **Arduino IoT Cloud** and virtual **ESP32** hardware simulation to enable seamless remote, on-demand lighting control across multiple zones.

## 🏢 Organizational Context & Scope
* **Scenario:** A mid-sized commercial distribution warehouse managing 150,000 square feet of storage space across multiple vertical lighting grids (Zone A and Zone B).
* **Target Impact:** Reducing unnecessary power consumption, providing real-time operational monitoring for facility managers, and driving ROI for executive stakeholders.

## 🛠️ Tech Stack & Architecture
* **Virtual Hardware Simulation:** Wokwi ESP32 Virtual Environment
* **Cloud Platform & Dashboard:** Arduino IoT Cloud (Web Console Layer)
* **Communication Protocol:** MQTT-based synchronization via Arduino IoT SDK
* **Connectivity:** Simulated Wi-Fi gateway (`Wokwi-GUEST`)
* **Programming Language:** C++ (Embedded Firmware)

### System Architecture Flow
```text
[User / Web Console Layer] (Arduino IoT Cloud Dashboard & Virtual Switches)
       │
       ▼ (MQTT over Wi-Fi / Wokwi-GUEST)
[Processing & Communications Layer] (Virtual ESP32 & Arduino Cloud SDK)
       │
       ├───────────────────────────────┐
       ▼                               ▼
[Output Unit A - LED 1]         [Output Unit B - LED 2]
(GPIO 23 via Resistor)          (GPIO 22 via Resistor)

⚙️ System Logic & Implementation
Digital Twin Mapping: Two Boolean cloud variables are mapped directly to physical ESP32 digital output pins (GPIO 23 for led1 and GPIO 22 for led2).

Event Handling: Real-time state synchronization is managed through asynchronous onVariableChange callback functions, ensuring low-latency updates between the web dashboard and virtual hardware.

🚀 How to Run the Simulation
Open the project workspace in the Wokwi ESP32 Simulator.

Ensure your sketch.ino, arduino_secrets.h, and thingProperties.h files are properly configured.

Start the simulation to connect automatically to the simulated Wokwi-GUEST network.

Toggle the switches on your Arduino IoT Cloud Dashboard to observe real-time state changes on the virtual ESP32 LEDs.

👤 Author
Racheal O.O
