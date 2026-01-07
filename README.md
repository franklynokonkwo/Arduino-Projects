Automated Ambient-Light Controller (ALC)📖 
The Automated Ambient-Light Controller is an intelligent embedded system designed to manage lighting based on environmental luminosity. By utilizing a Photo-Sensitive Switch logic, the system monitors ambient light levels via an LDR (Light Dependent Resistor) and triggers an LED output when visibility drops below a calibrated threshold.

🛠 FeaturesReal-time Monitoring: Continuously samples ambient light levels using a 10-bit ADC.Autonomous Decision Making: Features an automated logic gate to eliminate the need for manual switching.Serial Debugging: Includes real-time data streaming to the Serial Monitor for environment calibration.

🏗 Engineering ImpactEnergy Efficiency: Simulates Smart City street lighting systems that optimize power consumption.
Signal Processing: Demonstrates basic analog-to-digital conversion and signal thresholding.
Sustainability: Increases the lifespan of lighting components by minimizing unnecessary operation hours.

💻 Software LogicThe system operates on a constant feedback loop:
Read the voltage from the Voltage Divider circuit.
Map the voltage to a digital integer (0–1023).
Compare the integer to the THRESHOLD constant.
Write HIGH or LOW to the actuator (LED) based on the result.
