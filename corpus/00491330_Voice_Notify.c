
/* sweep: guess */

void Voice_Notify(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    switch(param_1) {
    case 0:
      if (DAT_00565a3a == '\0') {
        return;
      }
      uVar1 = 0x27;
      break;
    case 1:
      if (DAT_00565a3a == '\0') {
        return;
      }
      uVar1 = 0x28;
      break;
    case 2:
      if (DAT_00565a3a == '\0') {
        return;
      }
      uVar1 = 0x29;
      break;
    case 3:
      if (DAT_00565a3a == '\0') {
        return;
      }
      uVar1 = 0x2a;
      break;
    case 4:
      if (DAT_00565a3a == '\0') {
        return;
      }
      uVar1 = 0x2b;
      break;
    case 5:
      if (DAT_00565a3a == '\0') {
        return;
      }
      uVar1 = 0x2c;
      break;
    case 6:
      if (DAT_00565a3b == '\0') {
        return;
      }
      uVar1 = 0x2d;
      break;
    case 7:
      if (DAT_00565a3b == '\0') {
        return;
      }
    case 8:
      uVar1 = 0x2e;
    }
    Snd_Play2D(0xd,0x10,uVar1,0xff);
  }
  return;
}

