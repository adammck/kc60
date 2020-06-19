#!/bin/bash                                                                      
set -eu -o pipefail

echo "dfu-programmer atmega32u4 erase"
dfu-programmer atmega32u4 erase
echo "dfu-programmer atmega32u4 flash kc60_lufa.hex"
dfu-programmer atmega32u4 flash kc60_lufa.hex
echo "dfu-programmer atmega32u4 reset"
dfu-programmer atmega32u4 reset
echo "done!"
