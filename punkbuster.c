#define _GNU_SOURCE
#include "eth.h"

void eth_glReadPixels( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels )
{
            typedef void (*SCR_UpdateScreen_t)(void);
            SCR_UpdateScreen_t SCR_UpdateScreen = (SCR_UpdateScreen_t)sethET->SCR_UpdateScreen;
            seth.value[VAR_VISUALS]=qfalse;
            SCR_UpdateScreen();
            SCR_UpdateScreen();
            SCR_UpdateScreen();
            SCR_UpdateScreen();
            orig_glReadPixels(x,y,width,height,format,type,pixels);
            seth.value[VAR_VISUALS]=qtrue;
            return;
}
