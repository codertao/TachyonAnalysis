
void FUN_004ab7a0(undefined2 *param_1)

{
  undefined1 local_98 [128];
  undefined4 local_18;
  undefined4 local_14;
  
  DAT_0055e418 = DAT_0055e418 + 1;
  switch(*param_1) {
  case 0x1050:
    DAT_0055e404 = *(undefined4 *)(param_1 + 2);
    DAT_0055e408 = DAT_0055e408 + 1;
    DAT_0055e40c = DAT_0055e40c + 1;
    netsock_GetPlayerName(DAT_0055e404,local_98);
    DAT_0055e42c = local_18;
    DAT_0055e430 = local_14;
    if (DAT_0055e434 != (code *)0x0) {
      (*DAT_0055e434)();
      return;
    }
    break;
  case 0x1051:
    if (DAT_0055e428 != 0) {
      DAT_0055e404 = *(undefined4 *)(param_1 + 2);
      DAT_0055e408 = DAT_0055e408 + -1;
      if (DAT_0055e438 != (code *)0x0) {
        (*DAT_0055e438)();
        return;
      }
    }
    break;
  case 0x1052:
    if (DAT_0055e440 != (code *)0x0) {
      (*DAT_0055e440)();
      return;
    }
    break;
  case 0x1053:
    if (DAT_0055e444 != (code *)0x0) {
      (*DAT_0055e444)(*(undefined4 *)(param_1 + 2));
    }
  }
  return;
}

