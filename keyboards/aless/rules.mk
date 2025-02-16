#Driver Enables
MCU = RP2040
BOOTLOADER = rp2040


I2C_DRIVER_REQUIRED = yes
I2C_DRIVER = vendor


OLED_ENABLE = yes
OLED_DRIVER = ssd1306
OLED_TRANSPORT = i2c

ENCODER_ENABLE = yes


EXTRAFLAGS += -Wno-error
