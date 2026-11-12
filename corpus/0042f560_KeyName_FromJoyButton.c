
/* sweep */

undefined ** KeyName_FromJoyButton(undefined *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_s_key_press_00537688;
  puVar1 = PTR_s_KEY_NONE_0053768c;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (undefined **)0x0;
    }
    if ((*ppuVar2 == s_joy_butt_00536d48) && (ppuVar2[3] == param_1)) break;
    puVar1 = ppuVar2[5];
    ppuVar2 = ppuVar2 + 4;
  }
  return ppuVar2;
}

