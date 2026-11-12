
/* sweep: asm, reg-passed args */

uint SndAsm_StreamQueueFree(void)

{
  return DAT_004cafe2 - DAT_004cafde & 0xf;
}

