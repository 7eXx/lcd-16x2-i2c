# LCD 16x2 with I2C
This is a simple example of how to use an LCD 16x2 with an I2C bus.

## Connections
| LCD Pin | I2C Pin   |
|---------|-----------|
| VCC     | 5V / 3.3V |
| GND     | GND       |
| SDA     | SDA       |
| SCL     | SCL       |

## Notes
The I2C address of the LCD may vary.  
Common addresses are `0x27` and `0x3F`.  
You can use an I2C scanner to find the correct address.