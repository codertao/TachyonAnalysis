
/* sweep */

void Fonts_LoadTagged(undefined4 *param_1)

{
  undefined4 *puVar1;
  char *src;
  
  src = (char *)*param_1;
  while (src != (char *)0x0) {
    Font_LoadTagged(src,(void *)param_1[1],param_1[2],0xcccc);
    puVar1 = param_1 + 3;
    param_1 = param_1 + 3;
    src = (char *)*puVar1;
  }
  Font_SetColorRamp(0,0xc9,0xff,0,0,0);
  return;
}

