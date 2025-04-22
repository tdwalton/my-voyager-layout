#undef TAPPING_TERM
#define TAPPING_TERM 150

#define PERMISSIVE_HOLD

#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 300000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "BRgoQ/nl9qeQ"
#define LAYER_STATE_8BIT
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define RGB_MATRIX_STARTUP_SPD 60

#undef ENABLE_RGB_MATRIX_HUE_PENDULUM
