
/* sweep: asm, reg-passed args; guess */

void SndAsm_SetVoiceByte3f(void)

{
  int in_EAX;
  undefined1 unaff_BL;
  
  (&DAT_004c943f)[in_EAX * 0x40] = unaff_BL;
  return;
}

