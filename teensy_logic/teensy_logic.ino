//GPIO registers for fast reading of the bus traces
uint32_t reg6 = GPIO6_DR;
uint32_t reg7 = GPIO7_DR;

enum GPIO_REG : uint8_t {
    GPIO6,
    GPIO7,
};

// maps physical pin in the GPIO to the bit
// we read b0_02-b0_03, b0_12-b0_13, b1_00-b1_15 from returned val from the GPIO6 PSR
enum GPIO6_PIN_MAPPING : uint8_t {
    BIT_0 = 1, //b0_02
    BIT_1 = 0, //b0_03
    BIT_2 = 24, //b0_12
    BIT_3 = 25, //b0_13
    BIT_4 = 19, //b1_00
    BIT_5 = 18, //b1_01
    BIT_6 = 14,
    BIT_7 = 15,
    BIT_8 = 40,
    BIT_9 = 41,
    BIT_10 = 17,
    BIT_11 = 16,
    BIT_12 = 22,
    BIT_13 = 23,
    BIT_14 = 20,
    BIT_15 = 21,
    BIT_16 = 38,
    BIT_17 = 39,
    BIT_18 = 26,
    BIT_19 = 27, //b1_15
};

//reads b0_00-b0_12 from the returned GPIO7 PSR
enum GPIO7_PIN_MAPPING : uint8_t {
    BIT_20 = 10,
    BIT_21 = 12,
    BIT_22 = 11,
    BIT_23 = 13,
    BIT_24 = 40,
    BIT_25 = 41,
    BIT_26 = 42,
    BIT_27 = 43,
    BIT_28 = 44,
    BIT_29 = 45,
    BIT_30 = 6,
    BIT_31 = 9,
    BIT_32 = 32,
};

uint32_t readGPIO(GPIO_REG gpio) {
    uint32_t gpioWord;
  // config iomux to select gpio mode via iomux controller (IOMUXC)
  // config gpio direction register to input (GDIR[GDIR] = 0b)
  // read value from data register / pad register
    return gpioWord;
}

struct Bus8080 {
    uint8_t address[16];
    uint8_t data[8];

    uint8_t sync;
    uint8_t dbin;
    uint8_t wr;
    uint8_t wait;
    uint8_t hold;
    uint8_t hlda;
    uint8_t inte;
    uint8_t int_;
};

Bus8080 createBusTrace(uint32_t gpioWord) {
    // define the bus8080 struct and return in 
}

void setup() {
  for (auto pin : cpu.address) {
    pinMode(pin, INPUT);
  }
  for (auto pin : cpu.data) {
    pinMode(pin, INPUT);
  }
}

void loop() {
  
}
