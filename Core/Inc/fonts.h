#ifndef INC_FONTS_H_
#define INC_FONTS_H_

#include <inttypes.h>

typedef struct {
	const uint8_t FontWidth;
	uint8_t FontHeight;
	const uint16_t *data;
} FontDef;

extern FontDef Font_7x10;
extern FontDef Font_11x18;
extern FontDef Font_16x26;

#endif /* INC_FONTS_H_ */
