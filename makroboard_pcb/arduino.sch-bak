EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 2
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Microchip_ATmega:ATmega32U4-AU U1
U 1 1 5E92BD5C
P 3400 3300
F 0 "U1" H 3400 1411 50  0000 C CNN
F 1 "ATmega32U4-AU" H 3400 1320 50  0000 C CNN
F 2 "Package_QFP:TQFP-44_10x10mm_P0.8mm" H 3400 3300 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7766-8-bit-AVR-ATmega16U4-32U4_Datasheet.pdf" H 3400 3300 50  0001 C CNN
	1    3400 3300
	1    0    0    -1  
$EndComp
$Comp
L 105450-0101:105450-0101 J11
U 1 1 5E92CCFE
P 7700 2950
F 0 "J11" H 7700 3917 50  0000 C CNN
F 1 "105450-0101" H 7700 3826 50  0000 C CNN
F 2 "type-c:MOLEX_105450-0101" H 7700 2950 50  0001 L BNN
F 3 "Molex" H 7700 2950 50  0001 L BNN
F 4 "USB Shielded I/O Receptacle; Type C; Right Angle; Surface Mount; Gold over Nickel" H 7700 2950 50  0001 L BNN "Feld4"
F 5 "None" H 7700 2950 50  0001 L BNN "Feld5"
F 6 "105450-0101" H 7700 2950 50  0001 L BNN "Feld6"
F 7 "1.71 USD" H 7700 2950 50  0001 L BNN "Feld7"
F 8 "Good" H 7700 2950 50  0001 L BNN "Feld8"
	1    7700 2950
	1    0    0    -1  
$EndComp
$Comp
L Device:R R13
U 1 1 5E92E88D
P 8950 2750
F 0 "R13" V 8743 2750 50  0000 C CNN
F 1 "22R" V 8834 2750 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 8880 2750 50  0001 C CNN
F 3 "~" H 8950 2750 50  0001 C CNN
	1    8950 2750
	0    1    1    0   
$EndComp
$Comp
L Device:R R14
U 1 1 5E92F442
P 8950 2850
F 0 "R14" V 8743 2850 50  0000 C CNN
F 1 "22R" V 8834 2850 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 8880 2850 50  0001 C CNN
F 3 "~" H 8950 2850 50  0001 C CNN
	1    8950 2850
	0    1    1    0   
$EndComp
Wire Wire Line
	8400 2750 8800 2750
Wire Wire Line
	8400 2850 8800 2850
Text GLabel 9550 2750 2    50   Input ~ 0
USB_D+
Text GLabel 9550 2850 2    50   Input ~ 0
USB_D-
$Comp
L Device:Varistor RV1
U 1 1 5E92FF6A
P 9250 3400
F 0 "RV1" H 9353 3446 50  0000 L CNN
F 1 "Varistor" H 9353 3355 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 9180 3400 50  0001 C CNN
F 3 "~" H 9250 3400 50  0001 C CNN
	1    9250 3400
	1    0    0    -1  
$EndComp
$Comp
L Device:Varistor RV2
U 1 1 5E930DD7
P 9400 3650
F 0 "RV2" H 9503 3696 50  0000 L CNN
F 1 "Varistor" H 9503 3605 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 9330 3650 50  0001 C CNN
F 3 "~" H 9400 3650 50  0001 C CNN
	1    9400 3650
	1    0    0    -1  
$EndComp
Wire Wire Line
	9100 2750 9400 2750
Wire Wire Line
	9100 2850 9250 2850
Wire Wire Line
	9250 3250 9250 2850
Connection ~ 9250 2850
Wire Wire Line
	9250 2850 9550 2850
Wire Wire Line
	9400 3500 9400 2750
Connection ~ 9400 2750
Wire Wire Line
	9400 2750 9550 2750
$Comp
L power:GND #PWR026
U 1 1 5E9349E2
P 9250 4000
F 0 "#PWR026" H 9250 3750 50  0001 C CNN
F 1 "GND" H 9255 3827 50  0000 C CNN
F 2 "" H 9250 4000 50  0001 C CNN
F 3 "" H 9250 4000 50  0001 C CNN
	1    9250 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	9250 4000 9250 3550
$Comp
L power:GND #PWR027
U 1 1 5E934DED
P 9400 4000
F 0 "#PWR027" H 9400 3750 50  0001 C CNN
F 1 "GND" H 9405 3827 50  0000 C CNN
F 2 "" H 9400 4000 50  0001 C CNN
F 3 "" H 9400 4000 50  0001 C CNN
	1    9400 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	9400 4000 9400 3800
$Comp
L Device:C C16
U 1 1 5E93527F
P 9600 2150
F 0 "C16" H 9715 2196 50  0000 L CNN
F 1 "C" H 9715 2105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 9638 2000 50  0001 C CNN
F 3 "~" H 9600 2150 50  0001 C CNN
	1    9600 2150
	1    0    0    -1  
$EndComp
$Comp
L Device:CP C17
U 1 1 5E935C82
P 10050 2150
F 0 "C17" H 10168 2196 50  0000 L CNN
F 1 "CP" H 10168 2105 50  0000 L CNN
F 2 "Capacitor_SMD:C_1206_3216Metric" H 10088 2000 50  0001 C CNN
F 3 "~" H 10050 2150 50  0001 C CNN
	1    10050 2150
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR028
U 1 1 5E936724
P 9600 1750
F 0 "#PWR028" H 9600 1600 50  0001 C CNN
F 1 "+5V" H 9615 1923 50  0000 C CNN
F 2 "" H 9600 1750 50  0001 C CNN
F 3 "" H 9600 1750 50  0001 C CNN
	1    9600 1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	9600 1750 9600 1900
Wire Wire Line
	9600 1900 10050 1900
Wire Wire Line
	10050 1900 10050 2000
Connection ~ 9600 1900
Wire Wire Line
	9600 1900 9600 2000
Wire Wire Line
	9600 2300 9600 2450
Wire Wire Line
	8400 2550 8600 2550
Wire Wire Line
	8600 2550 8600 2450
Connection ~ 8600 2450
Wire Wire Line
	8600 2450 8400 2450
Wire Wire Line
	8400 2350 8600 2350
Wire Wire Line
	8600 2350 8600 2450
Wire Wire Line
	8400 2250 8600 2250
Wire Wire Line
	8600 2250 8600 2350
Connection ~ 8600 2350
Wire Wire Line
	9600 2450 10050 2450
Wire Wire Line
	10050 2450 10050 2300
$Comp
L Device:R R12
U 1 1 5E9386C1
P 5900 2400
F 0 "R12" H 5970 2446 50  0000 L CNN
F 1 "56k" H 5970 2355 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 5830 2400 50  0001 C CNN
F 3 "~" H 5900 2400 50  0001 C CNN
	1    5900 2400
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole_Pad J1
U 1 1 5E93A412
P 6550 2250
F 0 "J1" V 6787 2253 50  0000 C CNN
F 1 "TX1+" V 6696 2253 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 6550 2250 50  0001 C CNN
F 3 "~" H 6550 2250 50  0001 C CNN
	1    6550 2250
	0    -1   -1   0   
$EndComp
$Comp
L power:+5V #PWR020
U 1 1 5E93B739
P 5900 2150
F 0 "#PWR020" H 5900 2000 50  0001 C CNN
F 1 "+5V" H 5915 2323 50  0000 C CNN
F 2 "" H 5900 2150 50  0001 C CNN
F 3 "" H 5900 2150 50  0001 C CNN
	1    5900 2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	5900 2150 5900 2250
Wire Wire Line
	5900 2550 5900 2650
Wire Wire Line
	5900 2650 7000 2650
$Comp
L Device:R R11
U 1 1 5E93CD02
P 5750 2400
F 0 "R11" H 5550 2450 50  0000 L CNN
F 1 "n.b." H 5550 2350 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 5680 2400 50  0001 C CNN
F 3 "~" H 5750 2400 50  0001 C CNN
	1    5750 2400
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR019
U 1 1 5E93CE96
P 5750 2150
F 0 "#PWR019" H 5750 2000 50  0001 C CNN
F 1 "+5V" H 5765 2323 50  0000 C CNN
F 2 "" H 5750 2150 50  0001 C CNN
F 3 "" H 5750 2150 50  0001 C CNN
	1    5750 2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	5750 2150 5750 2250
Wire Wire Line
	7000 2750 5750 2750
Wire Wire Line
	5750 2750 5750 2550
$Comp
L Mechanical:MountingHole_Pad J2
U 1 1 5E93E7AE
P 6550 2350
F 0 "J2" V 6787 2353 50  0000 C CNN
F 1 "TX1-" V 6696 2353 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 6550 2350 50  0001 C CNN
F 3 "~" H 6550 2350 50  0001 C CNN
	1    6550 2350
	0    -1   -1   0   
$EndComp
$Comp
L Mechanical:MountingHole_Pad J3
U 1 1 5E93E980
P 6550 2450
F 0 "J3" V 6787 2453 50  0000 C CNN
F 1 "TX2+" V 6696 2453 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 6550 2450 50  0001 C CNN
F 3 "~" H 6550 2450 50  0001 C CNN
	1    6550 2450
	0    -1   -1   0   
$EndComp
$Comp
L Mechanical:MountingHole_Pad J4
U 1 1 5E93EBC1
P 6550 2550
F 0 "J4" V 6787 2553 50  0000 C CNN
F 1 "TX2-" V 6696 2553 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 6550 2550 50  0001 C CNN
F 3 "~" H 6550 2550 50  0001 C CNN
	1    6550 2550
	0    -1   -1   0   
$EndComp
$Comp
L Mechanical:MountingHole_Pad J5
U 1 1 5E93ED82
P 6550 2950
F 0 "J5" V 6787 2953 50  0000 C CNN
F 1 "SBU1" V 6696 2953 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 6550 2950 50  0001 C CNN
F 3 "~" H 6550 2950 50  0001 C CNN
	1    6550 2950
	0    -1   -1   0   
$EndComp
$Comp
L Mechanical:MountingHole_Pad J6
U 1 1 5E93F7A4
P 6550 3050
F 0 "J6" V 6787 3053 50  0000 C CNN
F 1 "SBU2" V 6696 3053 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 6550 3050 50  0001 C CNN
F 3 "~" H 6550 3050 50  0001 C CNN
	1    6550 3050
	0    -1   -1   0   
$EndComp
$Comp
L Mechanical:MountingHole_Pad J7
U 1 1 5E93F943
P 6550 3150
F 0 "J7" V 6787 3153 50  0000 C CNN
F 1 "RX1+" V 6696 3153 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 6550 3150 50  0001 C CNN
F 3 "~" H 6550 3150 50  0001 C CNN
	1    6550 3150
	0    -1   -1   0   
$EndComp
$Comp
L Mechanical:MountingHole_Pad J8
U 1 1 5E93FAD6
P 6550 3250
F 0 "J8" V 6787 3253 50  0000 C CNN
F 1 "RX1-" V 6696 3253 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 6550 3250 50  0001 C CNN
F 3 "~" H 6550 3250 50  0001 C CNN
	1    6550 3250
	0    -1   -1   0   
$EndComp
$Comp
L Mechanical:MountingHole_Pad J9
U 1 1 5E93FC53
P 6550 3350
F 0 "J9" V 6787 3353 50  0000 C CNN
F 1 "RX2+" V 6696 3353 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 6550 3350 50  0001 C CNN
F 3 "~" H 6550 3350 50  0001 C CNN
	1    6550 3350
	0    -1   -1   0   
$EndComp
$Comp
L Mechanical:MountingHole_Pad J10
U 1 1 5E93FE40
P 6550 3450
F 0 "J10" V 6787 3453 50  0000 C CNN
F 1 "RX2-" V 6696 3453 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 6550 3450 50  0001 C CNN
F 3 "~" H 6550 3450 50  0001 C CNN
	1    6550 3450
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6650 2250 7000 2250
Wire Wire Line
	7000 2350 6650 2350
Wire Wire Line
	6650 2450 7000 2450
Wire Wire Line
	7000 2550 6650 2550
Wire Wire Line
	6650 2950 7000 2950
Wire Wire Line
	6650 3050 7000 3050
Wire Wire Line
	7000 3150 6650 3150
Wire Wire Line
	6650 3250 7000 3250
Wire Wire Line
	7000 3350 6650 3350
Wire Wire Line
	6650 3450 7000 3450
$Comp
L Device:C C15
U 1 1 5E945C7B
P 8500 3900
F 0 "C15" H 8615 3946 50  0000 L CNN
F 1 "C" H 8615 3855 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 8538 3750 50  0001 C CNN
F 3 "~" H 8500 3900 50  0001 C CNN
	1    8500 3900
	1    0    0    -1  
$EndComp
Wire Wire Line
	8400 3650 8500 3650
Wire Wire Line
	8500 3650 8500 3750
$Comp
L power:GND #PWR021
U 1 1 5E947217
P 8500 4200
F 0 "#PWR021" H 8500 3950 50  0001 C CNN
F 1 "GND" H 8505 4027 50  0000 C CNN
F 2 "" H 8500 4200 50  0001 C CNN
F 3 "" H 8500 4200 50  0001 C CNN
	1    8500 4200
	1    0    0    -1  
$EndComp
Wire Wire Line
	8400 3250 9100 3250
Wire Wire Line
	9100 3250 9100 4300
Wire Wire Line
	8400 3350 9000 3350
Wire Wire Line
	9000 3350 9000 4300
Wire Wire Line
	8400 3450 8900 3450
Wire Wire Line
	8900 3450 8900 4300
Wire Wire Line
	8400 3550 8800 3550
Wire Wire Line
	8800 3550 8800 4300
$Comp
L power:GND #PWR022
U 1 1 5E94D20E
P 8800 4300
F 0 "#PWR022" H 8800 4050 50  0001 C CNN
F 1 "GND" H 8805 4127 50  0000 C CNN
F 2 "" H 8800 4300 50  0001 C CNN
F 3 "" H 8800 4300 50  0001 C CNN
	1    8800 4300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR023
U 1 1 5E94D8A2
P 8900 4300
F 0 "#PWR023" H 8900 4050 50  0001 C CNN
F 1 "GND" H 8905 4127 50  0000 C CNN
F 2 "" H 8900 4300 50  0001 C CNN
F 3 "" H 8900 4300 50  0001 C CNN
	1    8900 4300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR024
U 1 1 5E94DB28
P 9000 4300
F 0 "#PWR024" H 9000 4050 50  0001 C CNN
F 1 "GND" H 9005 4127 50  0000 C CNN
F 2 "" H 9000 4300 50  0001 C CNN
F 3 "" H 9000 4300 50  0001 C CNN
	1    9000 4300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR025
U 1 1 5E94DD66
P 9100 4300
F 0 "#PWR025" H 9100 4050 50  0001 C CNN
F 1 "GND" H 9105 4127 50  0000 C CNN
F 2 "" H 9100 4300 50  0001 C CNN
F 3 "" H 9100 4300 50  0001 C CNN
	1    9100 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	8500 4200 8500 4050
Wire Wire Line
	8600 2250 8600 1900
Wire Wire Line
	8600 1900 9600 1900
Connection ~ 8600 2250
$Comp
L power:GND #PWR029
U 1 1 5E950438
P 10050 2600
F 0 "#PWR029" H 10050 2350 50  0001 C CNN
F 1 "GND" H 10055 2427 50  0000 C CNN
F 2 "" H 10050 2600 50  0001 C CNN
F 3 "" H 10050 2600 50  0001 C CNN
	1    10050 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	10050 2450 10050 2600
Connection ~ 10050 2450
$Comp
L Connector_Generic:Conn_02x03_Odd_Even J12
U 1 1 5E952B7C
P 9150 5750
F 0 "J12" H 9200 6067 50  0000 C CNN
F 1 "ICSP" H 9200 5976 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x03_P2.54mm_Vertical" H 9150 5750 50  0001 C CNN
F 3 "~" H 9150 5750 50  0001 C CNN
	1    9150 5750
	1    0    0    -1  
$EndComp
Text GLabel 8650 5650 0    50   Input ~ 0
MISO
Text GLabel 8650 5750 0    50   Input ~ 0
SCK
Text GLabel 8650 5850 0    50   Input ~ 0
RESET
Text GLabel 9750 5750 2    50   Input ~ 0
MOSI
$Comp
L Device:R R15
U 1 1 5E954544
P 9850 5650
F 0 "R15" V 9643 5650 50  0000 C CNN
F 1 "0R0" V 9734 5650 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 9780 5650 50  0001 C CNN
F 3 "~" H 9850 5650 50  0001 C CNN
	1    9850 5650
	0    1    1    0   
$EndComp
$Comp
L power:+5V #PWR030
U 1 1 5E954F34
P 10200 5400
F 0 "#PWR030" H 10200 5250 50  0001 C CNN
F 1 "+5V" H 10215 5573 50  0000 C CNN
F 2 "" H 10200 5400 50  0001 C CNN
F 3 "" H 10200 5400 50  0001 C CNN
	1    10200 5400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR031
U 1 1 5E9552A1
P 10200 5950
F 0 "#PWR031" H 10200 5700 50  0001 C CNN
F 1 "GND" H 10205 5777 50  0000 C CNN
F 2 "" H 10200 5950 50  0001 C CNN
F 3 "" H 10200 5950 50  0001 C CNN
	1    10200 5950
	1    0    0    -1  
$EndComp
Wire Wire Line
	10200 5950 10200 5850
Wire Wire Line
	10200 5850 9450 5850
Wire Wire Line
	9450 5750 9750 5750
Wire Wire Line
	9450 5650 9700 5650
Wire Wire Line
	10000 5650 10200 5650
Wire Wire Line
	10200 5650 10200 5400
Wire Wire Line
	8650 5650 8950 5650
Wire Wire Line
	8650 5750 8950 5750
Wire Wire Line
	8950 5850 8650 5850
$Comp
L Device:R R9
U 1 1 5E95E3CB
P 2500 1550
F 0 "R9" H 2570 1596 50  0000 L CNN
F 1 "10k" H 2570 1505 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 2430 1550 50  0001 C CNN
F 3 "~" H 2500 1550 50  0001 C CNN
	1    2500 1550
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR017
U 1 1 5E95EEC9
P 3400 1150
F 0 "#PWR017" H 3400 1000 50  0001 C CNN
F 1 "+5V" H 3415 1323 50  0000 C CNN
F 2 "" H 3400 1150 50  0001 C CNN
F 3 "" H 3400 1150 50  0001 C CNN
	1    3400 1150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3400 1150 3400 1250
Wire Wire Line
	2500 1400 2500 1250
Wire Wire Line
	2500 1250 2700 1250
Connection ~ 3400 1250
Wire Wire Line
	3400 1250 3400 1500
Wire Wire Line
	2500 1700 2500 1800
Wire Wire Line
	2500 1800 2800 1800
Text GLabel 2150 1800 0    50   Input ~ 0
RESET
Wire Wire Line
	2150 1800 2500 1800
Connection ~ 2500 1800
$Comp
L Device:Crystal Y1
U 1 1 5E9666EF
P 1700 2100
F 0 "Y1" V 1746 1969 50  0000 R CNN
F 1 "16MHz" V 1655 1969 50  0000 R CNN
F 2 "Crystal:Crystal_SMD_SeikoEpson_MA505-2Pin_12.7x5.1mm_HandSoldering" H 1700 2100 50  0001 C CNN
F 3 "~" H 1700 2100 50  0001 C CNN
	1    1700 2100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	2800 2000 1850 2000
Wire Wire Line
	1850 2000 1850 1800
Wire Wire Line
	1850 1800 1700 1800
Wire Wire Line
	1700 1800 1700 1950
Wire Wire Line
	1700 2250 1700 2350
Wire Wire Line
	1700 2350 1850 2350
Wire Wire Line
	1850 2350 1850 2200
Wire Wire Line
	1850 2200 2800 2200
$Comp
L Device:C C12
U 1 1 5E96C696
P 1450 2700
F 0 "C12" H 1565 2746 50  0000 L CNN
F 1 "22pF" H 1565 2655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 1488 2550 50  0001 C CNN
F 3 "~" H 1450 2700 50  0001 C CNN
	1    1450 2700
	1    0    0    -1  
$EndComp
$Comp
L Device:C C11
U 1 1 5E96E15B
P 1050 2700
F 0 "C11" H 1165 2746 50  0000 L CNN
F 1 "22pF" H 1165 2655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 1088 2550 50  0001 C CNN
F 3 "~" H 1050 2700 50  0001 C CNN
	1    1050 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1050 2550 1050 1800
Wire Wire Line
	1050 1800 1700 1800
Connection ~ 1700 1800
Wire Wire Line
	1700 2350 1450 2350
Wire Wire Line
	1450 2350 1450 2550
Connection ~ 1700 2350
$Comp
L power:GND #PWR013
U 1 1 5E973016
P 1450 3050
F 0 "#PWR013" H 1450 2800 50  0001 C CNN
F 1 "GND" H 1455 2877 50  0000 C CNN
F 2 "" H 1450 3050 50  0001 C CNN
F 3 "" H 1450 3050 50  0001 C CNN
	1    1450 3050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR012
U 1 1 5E973901
P 1050 3050
F 0 "#PWR012" H 1050 2800 50  0001 C CNN
F 1 "GND" H 1055 2877 50  0000 C CNN
F 2 "" H 1050 3050 50  0001 C CNN
F 3 "" H 1050 3050 50  0001 C CNN
	1    1050 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	1050 3050 1050 2850
Wire Wire Line
	1450 2850 1450 3050
Wire Wire Line
	3500 1500 3500 1250
Wire Wire Line
	3500 1250 3400 1250
Wire Wire Line
	3300 1500 3300 1250
Wire Wire Line
	3300 1250 3400 1250
Connection ~ 3300 1250
$Comp
L Device:C C13
U 1 1 5E984839
P 1900 2700
F 0 "C13" H 2015 2746 50  0000 L CNN
F 1 "100n" H 2015 2655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 1938 2550 50  0001 C CNN
F 3 "~" H 1900 2700 50  0001 C CNN
	1    1900 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1900 2550 1900 2400
Wire Wire Line
	1900 2400 2800 2400
$Comp
L power:GND #PWR014
U 1 1 5E987F78
P 1900 3050
F 0 "#PWR014" H 1900 2800 50  0001 C CNN
F 1 "GND" H 1905 2877 50  0000 C CNN
F 2 "" H 1900 3050 50  0001 C CNN
F 3 "" H 1900 3050 50  0001 C CNN
	1    1900 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	1900 3050 1900 2850
Wire Wire Line
	2800 2600 2700 2600
Wire Wire Line
	2700 2600 2700 1250
Connection ~ 2700 1250
Wire Wire Line
	2700 1250 3300 1250
Text GLabel 2700 2800 0    50   Input ~ 0
USB_D+
Text GLabel 2700 2900 0    50   Input ~ 0
USB_D-
Wire Wire Line
	2700 2900 2800 2900
Wire Wire Line
	2800 2800 2700 2800
$Comp
L Device:C C14
U 1 1 5E994A47
P 2350 3450
F 0 "C14" H 2465 3496 50  0000 L CNN
F 1 "1µ" H 2465 3405 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 2388 3300 50  0001 C CNN
F 3 "~" H 2350 3450 50  0001 C CNN
	1    2350 3450
	1    0    0    -1  
$EndComp
Wire Wire Line
	2800 3100 2350 3100
Wire Wire Line
	2350 3100 2350 3300
$Comp
L power:GND #PWR015
U 1 1 5E9988AA
P 2350 3750
F 0 "#PWR015" H 2350 3500 50  0001 C CNN
F 1 "GND" H 2355 3577 50  0000 C CNN
F 2 "" H 2350 3750 50  0001 C CNN
F 3 "" H 2350 3750 50  0001 C CNN
	1    2350 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	2350 3750 2350 3600
$Comp
L power:GND #PWR016
U 1 1 5E99D390
P 3350 5600
F 0 "#PWR016" H 3350 5350 50  0001 C CNN
F 1 "GND" H 3355 5427 50  0000 C CNN
F 2 "" H 3350 5600 50  0001 C CNN
F 3 "" H 3350 5600 50  0001 C CNN
	1    3350 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 5100 3300 5550
Wire Wire Line
	3300 5550 3350 5550
Wire Wire Line
	3400 5550 3400 5100
Wire Wire Line
	3350 5600 3350 5550
Connection ~ 3350 5550
Wire Wire Line
	3350 5550 3400 5550
Text GLabel 4300 2500 2    50   Input ~ 0
D11
Text GLabel 4300 2400 2    50   Input ~ 0
D10
Text GLabel 4300 2300 2    50   Input ~ 0
D9
Text GLabel 4300 2200 2    50   Input ~ 0
D8
Text GLabel 4300 2100 2    50   Input ~ 0
MISO
Text GLabel 4300 2000 2    50   Input ~ 0
MOSI
Text GLabel 4300 1900 2    50   Input ~ 0
SCK
Text GLabel 4300 1800 2    50   Input ~ 0
IO0
Text GLabel 4300 2700 2    50   Input ~ 0
D5
Text GLabel 4300 2800 2    50   Input ~ 0
D13
Text GLabel 4300 3000 2    50   Input ~ 0
D3
Text GLabel 4300 3100 2    50   Input ~ 0
D2
Text GLabel 4300 3200 2    50   Input ~ 0
D0
Text GLabel 4300 3300 2    50   Input ~ 0
D1
Text GLabel 4300 3400 2    50   Input ~ 0
D4
Text GLabel 4300 3500 2    50   Input ~ 0
IO1
Text GLabel 4300 3600 2    50   Input ~ 0
D12
Text GLabel 4300 3700 2    50   Input ~ 0
D6
$Comp
L Device:R R10
U 1 1 5E9A9360
P 4900 3900
F 0 "R10" V 4693 3900 50  0000 C CNN
F 1 "10k" V 4784 3900 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4830 3900 50  0001 C CNN
F 3 "~" H 4900 3900 50  0001 C CNN
	1    4900 3900
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR018
U 1 1 5E9AA0CB
P 5200 4100
F 0 "#PWR018" H 5200 3850 50  0001 C CNN
F 1 "GND" H 5205 3927 50  0000 C CNN
F 2 "" H 5200 4100 50  0001 C CNN
F 3 "" H 5200 4100 50  0001 C CNN
	1    5200 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5050 3900 5200 3900
Wire Wire Line
	5200 3900 5200 4100
Wire Wire Line
	4750 3900 4000 3900
Text GLabel 4300 4000 2    50   Input ~ 0
D7
Text GLabel 4300 4200 2    50   Input ~ 0
A5
Text GLabel 4300 4300 2    50   Input ~ 0
A4
Text GLabel 4300 4400 2    50   Input ~ 0
A3
Text GLabel 4300 4500 2    50   Input ~ 0
A2
Text GLabel 4300 4600 2    50   Input ~ 0
A1
Text GLabel 4300 4700 2    50   Input ~ 0
A0
Wire Wire Line
	4300 4700 4000 4700
Wire Wire Line
	4000 4600 4300 4600
Wire Wire Line
	4300 4500 4000 4500
Wire Wire Line
	4000 4400 4300 4400
Wire Wire Line
	4300 4300 4000 4300
Wire Wire Line
	4000 4200 4300 4200
Wire Wire Line
	4300 4000 4000 4000
Wire Wire Line
	4000 3700 4300 3700
Wire Wire Line
	4300 3600 4000 3600
Wire Wire Line
	4000 3500 4300 3500
Wire Wire Line
	4300 3400 4000 3400
Wire Wire Line
	4000 3300 4300 3300
Wire Wire Line
	4300 3200 4000 3200
Wire Wire Line
	4000 3100 4300 3100
Wire Wire Line
	4300 3000 4000 3000
Wire Wire Line
	4000 2800 4300 2800
Wire Wire Line
	4300 2700 4000 2700
Wire Wire Line
	4000 2500 4300 2500
Wire Wire Line
	4300 2400 4000 2400
Wire Wire Line
	4000 2300 4300 2300
Wire Wire Line
	4300 2200 4000 2200
Wire Wire Line
	4000 2100 4300 2100
Wire Wire Line
	4300 2000 4000 2000
Wire Wire Line
	4000 1900 4300 1900
Wire Wire Line
	4300 1800 4000 1800
Text GLabel 6250 1050 2    50   Input ~ 0
SDA
Text GLabel 6250 1150 2    50   Input ~ 0
SCL
Text GLabel 6100 1050 0    50   Input ~ 0
D2
Text GLabel 6100 1150 0    50   Input ~ 0
D3
Wire Wire Line
	6100 1150 6250 1150
Wire Wire Line
	6100 1050 6250 1050
$Comp
L Connector_Generic:Conn_01x10 J14
U 1 1 5EBDB266
P 1900 5550
F 0 "J14" H 1980 5542 50  0000 L CNN
F 1 "DIG_IO_2" H 1980 5451 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x10_P2.54mm_Vertical" H 1900 5550 50  0001 C CNN
F 3 "~" H 1900 5550 50  0001 C CNN
	1    1900 5550
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x10 J16
U 1 1 5EBDBC7B
P 2600 5550
F 0 "J16" H 2680 5542 50  0000 L CNN
F 1 "GND" H 2680 5451 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x10_P2.54mm_Vertical" H 2600 5550 50  0001 C CNN
F 3 "~" H 2600 5550 50  0001 C CNN
	1    2600 5550
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR032
U 1 1 5EBDF074
P 700 5000
F 0 "#PWR032" H 700 4850 50  0001 C CNN
F 1 "+5V" H 715 5173 50  0000 C CNN
F 2 "" H 700 5000 50  0001 C CNN
F 3 "" H 700 5000 50  0001 C CNN
	1    700  5000
	1    0    0    -1  
$EndComp
Wire Wire Line
	700  5000 700  5150
Wire Wire Line
	700  6050 850  6050
Wire Wire Line
	850  5150 700  5150
Connection ~ 700  5150
Wire Wire Line
	700  5150 700  5250
Wire Wire Line
	850  5250 700  5250
Connection ~ 700  5250
Wire Wire Line
	700  5250 700  5350
Connection ~ 700  5350
Wire Wire Line
	700  5350 700  5450
Wire Wire Line
	850  5450 700  5450
Connection ~ 700  5450
Wire Wire Line
	700  5450 700  5550
Wire Wire Line
	850  5550 700  5550
Connection ~ 700  5550
Wire Wire Line
	700  5550 700  5650
Wire Wire Line
	850  5650 700  5650
Connection ~ 700  5650
Wire Wire Line
	700  5650 700  5750
Wire Wire Line
	850  5750 700  5750
Connection ~ 700  5750
Wire Wire Line
	700  5750 700  5850
Wire Wire Line
	850  5850 700  5850
Connection ~ 700  5850
Wire Wire Line
	700  5850 700  5950
Wire Wire Line
	850  5950 700  5950
Connection ~ 700  5950
Wire Wire Line
	700  5950 700  6050
Text GLabel 1500 5150 0    50   Input ~ 0
IO0
Wire Wire Line
	1500 5150 1700 5150
Text GLabel 1500 5250 0    50   Input ~ 0
SCK
Text GLabel 1500 5350 0    50   Input ~ 0
MOSI
Text GLabel 1500 5450 0    50   Input ~ 0
MISO
Text GLabel 1500 5550 0    50   Input ~ 0
D8
Text GLabel 1500 5650 0    50   Input ~ 0
D9
Text GLabel 1500 5750 0    50   Input ~ 0
D10
Text GLabel 1500 5850 0    50   Input ~ 0
D11
Text GLabel 1500 5950 0    50   Input ~ 0
D5
Text GLabel 1500 6050 0    50   Input ~ 0
D13
Wire Wire Line
	1500 6050 1700 6050
Wire Wire Line
	1700 5950 1500 5950
Wire Wire Line
	1500 5850 1700 5850
Wire Wire Line
	1700 5750 1500 5750
Wire Wire Line
	1500 5650 1700 5650
Wire Wire Line
	1700 5550 1500 5550
Wire Wire Line
	1500 5450 1700 5450
Wire Wire Line
	1700 5350 1500 5350
Wire Wire Line
	1500 5250 1700 5250
$Comp
L Connector_Generic:Conn_01x10 J15
U 1 1 5EC8394A
P 1900 6600
F 0 "J15" H 1980 6592 50  0000 L CNN
F 1 "DIG_IO_1" H 1980 6501 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x10_P2.54mm_Vertical" H 1900 6600 50  0001 C CNN
F 3 "~" H 1900 6600 50  0001 C CNN
	1    1900 6600
	1    0    0    -1  
$EndComp
Text GLabel 1500 6200 0    50   Input ~ 0
D3
Text GLabel 1500 6300 0    50   Input ~ 0
D2
Text GLabel 1500 6400 0    50   Input ~ 0
D0
Text GLabel 1500 6500 0    50   Input ~ 0
D1
Text GLabel 1500 6600 0    50   Input ~ 0
D4
Text GLabel 1500 6700 0    50   Input ~ 0
IO1
Text GLabel 1500 6800 0    50   Input ~ 0
D12
Text GLabel 1500 6900 0    50   Input ~ 0
D6
Text GLabel 1500 7000 0    50   Input ~ 0
D7
Text GLabel 1500 7100 0    50   Input ~ 0
RESET
Wire Wire Line
	1500 6200 1700 6200
Wire Wire Line
	1700 6300 1500 6300
Wire Wire Line
	1500 6400 1700 6400
Wire Wire Line
	1700 6500 1500 6500
Wire Wire Line
	1500 6600 1700 6600
Wire Wire Line
	1700 6700 1500 6700
Wire Wire Line
	1500 6800 1700 6800
Wire Wire Line
	1700 6900 1500 6900
Wire Wire Line
	1500 7000 1700 7000
Wire Wire Line
	1700 7100 1500 7100
Text GLabel 3400 6750 0    50   Input ~ 0
A0
Text GLabel 3400 6850 0    50   Input ~ 0
A1
Text GLabel 3400 6950 0    50   Input ~ 0
A2
Text GLabel 3400 7050 0    50   Input ~ 0
A3
Text GLabel 3400 7150 0    50   Input ~ 0
A4
$Comp
L Connector_Generic:Conn_01x06 J17
U 1 1 5ED07527
P 3950 6950
F 0 "J17" H 4030 6942 50  0000 L CNN
F 1 "ANALOG_IO" H 4030 6851 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 3950 6950 50  0001 C CNN
F 3 "~" H 3950 6950 50  0001 C CNN
	1    3950 6950
	1    0    0    -1  
$EndComp
Text GLabel 3400 7250 0    50   Input ~ 0
A5
Wire Wire Line
	3400 6750 3750 6750
Wire Wire Line
	3750 6850 3400 6850
Wire Wire Line
	3400 6950 3750 6950
Wire Wire Line
	3750 7050 3400 7050
Wire Wire Line
	3400 7150 3750 7150
Wire Wire Line
	3750 7250 3400 7250
Wire Wire Line
	850  5350 700  5350
$Comp
L Connector_Generic:Conn_01x10 J13
U 1 1 5EBDA8F8
P 1050 5550
F 0 "J13" H 1130 5542 50  0000 L CNN
F 1 "+5V" H 1130 5451 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x10_P2.54mm_Vertical" H 1050 5550 50  0001 C CNN
F 3 "~" H 1050 5550 50  0001 C CNN
	1    1050 5550
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR033
U 1 1 5ED58F54
P 2300 6200
F 0 "#PWR033" H 2300 5950 50  0001 C CNN
F 1 "GND" H 2305 6027 50  0000 C CNN
F 2 "" H 2300 6200 50  0001 C CNN
F 3 "" H 2300 6200 50  0001 C CNN
	1    2300 6200
	1    0    0    -1  
$EndComp
Wire Wire Line
	2300 6200 2300 6050
Wire Wire Line
	2300 5150 2400 5150
Wire Wire Line
	2400 5250 2300 5250
Connection ~ 2300 5250
Wire Wire Line
	2300 5250 2300 5150
Wire Wire Line
	2400 5350 2300 5350
Connection ~ 2300 5350
Wire Wire Line
	2300 5350 2300 5250
Wire Wire Line
	2400 5450 2300 5450
Connection ~ 2300 5450
Wire Wire Line
	2300 5450 2300 5350
Wire Wire Line
	2400 5550 2300 5550
Connection ~ 2300 5550
Wire Wire Line
	2300 5550 2300 5450
Wire Wire Line
	2400 5650 2300 5650
Connection ~ 2300 5650
Wire Wire Line
	2300 5650 2300 5550
Wire Wire Line
	2400 5750 2300 5750
Connection ~ 2300 5750
Wire Wire Line
	2300 5750 2300 5650
Wire Wire Line
	2400 5850 2300 5850
Connection ~ 2300 5850
Wire Wire Line
	2300 5850 2300 5750
Wire Wire Line
	2400 5950 2300 5950
Connection ~ 2300 5950
Wire Wire Line
	2300 5950 2300 5850
Wire Wire Line
	2400 6050 2300 6050
Connection ~ 2300 6050
Wire Wire Line
	2300 6050 2300 5950
NoConn ~ 8400 2950
NoConn ~ 8400 3050
$EndSCHEMATC
