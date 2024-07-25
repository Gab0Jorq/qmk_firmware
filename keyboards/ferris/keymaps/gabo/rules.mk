
#Agregado x mi
MCU = atmega32u4

BOOTLOADER = caterina

BOOTMAGIC_ENABLE = yes  # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE  = yes  # Mouse keys(+4700)
EXTRAKEY_ENABLE  = yes  # Audio control and System control(+450)
CONSOLE_ENABLE   = no   # Console for debug(+400)
COMMAND_ENABLE   = no   # Commands for debug and configuration
NKRO_ENABLE      = no   # Nkey Rollover, antes estaba en yes
BACKLIGHT_ENABLE = no  # Enable keyboard backlight functionality
MIDI_ENABLE      = no  # MIDI support (+2400 to 4200, depending on config)
AUDIO_ENABLE     = no  # Audio output on port C6
UNICODE_ENABLE   = no  # Unicode
BLUETOOTH_ENABLE = no  # Enable Bluetooth with the Adafruit EZ-Key HID
STENO_ENABLE     = no  # enable TX Bolt protocol, requires VIRTSER and may not work with mouse keys
TAP_DANCE_ENABLE = yes # enable double tap
DYNAMIC_MACRO_ENABLE = yes # enable dynamic macro
## VIRTSER_ENABLE = yes # required for TX Bolt
SPLIT_KEYBOARD = yes        # Use shared split_common code
COMBO_ENABLE = yes     # Enable combos
CAPS_WORD_ENABLE = yes # Enable


#LTO_ENABLE = yes    #HACER MAS LIVIANO EL ARCHIVOO



# MCU name
#MCU = atmega32u4

# Bootloader selection
#BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
#BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
#MOUSEKEY_ENABLE = yes       # Mouse keys
#EXTRAKEY_ENABLE = yes       # Audio control and System control
#CONSOLE_ENABLE = no         # Console for debug
#COMMAND_ENABLE = no         # Commands for debug and configuration
#NKRO_ENABLE = no            # Enable N-Key Rollover
#BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
#RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
#UNICODE_ENABLE = yes        # Unicode
#AUDIO_ENABLE = no           # Audio output
#SPLIT_KEYBOARD = yes        # Use shared split_common code
#LAYOUTS = split_3x5_2