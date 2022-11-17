#include <ti/screen.h>
#include <ti/getkey.h>
#include <fileioc.h>

int main(void)
{
    /* Must be NULL to start the search */
    void *search_pos = NULL;

    /* Clear the homescreen */
    os_ClrHome();

    for (int8_t y = 0;;++y)
    {
        uint8_t type;
        /* Find the LibLoad AppVar, which is known to exist */
        /* The first two data bytes of LibLoad are 0xBF, 0xFE */
        const char *name = ti_DetectAny(&search_pos, "\xBF\xFE", &type);

        if (name == NULL || type != OS_TYPE_APPVAR)
        {
            break;
        }

        /* Print the name of the variable (Should be LibLoad) */
        os_SetCursorPos(0, y);
        os_PutStrFull(name);
    }

    /* Waits for a key */
    os_GetKey();

    return 0;
}
