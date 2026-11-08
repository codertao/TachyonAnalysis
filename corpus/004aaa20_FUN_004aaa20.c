
void FUN_004aaa20(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 < 0x104) && (uVar1 != 0x103)) {
    if (uVar1 < 0x22) {
      switch(uVar1) {
      case 3:
        DAT_0055e404 = param_1[2];
        DAT_0055e42c = param_1[4];
        DAT_0055e430 = param_1[5];
        Net_SendSessionNotify(DAT_0055e404);
        DAT_0055e408 = DAT_0055e408 + 1;
        DAT_0055e40c = DAT_0055e40c + 1;
        if (DAT_0055e434 != (code *)0x0) {
          (*DAT_0055e434)();
          DAT_0055e418 = DAT_0055e418 + 1;
          return;
        }
        break;
      case 5:
        if (DAT_0055e428 == 0) {
          uVar1 = param_1[2];
          if ((uVar1 == DAT_0055e400) && (DAT_0055e404 = uVar1, DAT_0055e440 != (code *)0x0)) {
            (*DAT_0055e440)();
            DAT_0055e418 = DAT_0055e418 + 1;
            return;
          }
        }
        else {
          DAT_0055e404 = param_1[2];
          DAT_0055e408 = DAT_0055e408 + -1;
          if (DAT_0055e438 != (code *)0x0) {
            (*DAT_0055e438)();
            DAT_0055e418 = DAT_0055e418 + 1;
            return;
          }
        }
      }
    }
    else {
      if (uVar1 != 0x31) {
        DAT_0055e418 = DAT_0055e418 + 1;
        return;
      }
      if (DAT_0055e43c != (code *)0x0) {
        (*DAT_0055e43c)();
      }
    }
  }
  DAT_0055e418 = DAT_0055e418 + 1;
  return;
}

