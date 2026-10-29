//GPIO registers for fast reading of the bus traces
//Each clock cycle lasts 5ns so reading the entire bus
//takes 15ns. 
uint32_t reg6 = GPIO6_DR;
uint32_t reg7 = GPIO7_DR;
uint32_t reg9 = GPIO9_DR;

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

//these values map to the 32 bit word formed by reading the gpio registers
constexpr Bus8080 cpu = {
    .address = {
        0, 1, 2, 3, 4, 5, 6, 7,
        8, 9, 10, 11, 12, 13, 14, 15
    },

    .data = {
        16, 17, 18, 19, 20, 21, 22, 23
    },

    .sync = 24,
    .dbin = 25,
    .wr   = 26,
    .wait = 27,
    .hold = 28,
    .hlda = 29,
    .inte = 30,
    .int_ = 31
};

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
